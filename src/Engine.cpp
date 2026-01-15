#include "Codex/Engine.h"

#include <iostream>

namespace codex {

Engine::Engine(EngineConfig config)
    : config_(std::move(config)) {
    seed_world();

}

void Engine::run(std::uint32_t frames) {
    const float delta_seconds = 1.0f / static_cast<float>(config_.target_fps);

    std::cout << "Starting " << config_.application_name
              << " (" << config_.target_fps << " FPS target)" << std::endl;


    for (std::uint32_t frame = 0; frame < frames; ++frame) {
        tick(delta_seconds);
    }
}

void Engine::tick(float delta_seconds) {
    for (auto &entity : world_.entities) {
        entity.transform.rotation.y += 0.5f * delta_seconds;
    }

    std::cout << "Ticked " << world_.entities.size()
              << " entities (dt=" << delta_seconds << ")" << std::endl;
}

const EngineConfig &Engine::config() const {
    return config_;
}

const WorldState &Engine::world() const {
    return world_;
}


void Engine::seed_world() {
    Entity camera {
        next_entity_id_++,
        "MainCamera",
        {math::Vector3 {0.0f, 1.5f, -4.0f}, math::Vector3 {}, math::Vector3 {1.0f, 1.0f, 1.0f}}
    };

    Entity light {
        next_entity_id_++,
        "KeyLight",
        {math::Vector3 {2.0f, 3.0f, -1.0f}, math::Vector3 {}, math::Vector3 {1.0f, 1.0f, 1.0f}}
    };

    Entity cube {
        next_entity_id_++,
        "DebugCube",
        {math::Vector3 {}, math::Vector3 {}, math::Vector3 {1.0f, 1.0f, 1.0f}}
    };

    world_.entities = {camera, light, cube};
}


void Engine::seed_ui() {
    ui::Panel diagnostics;
    diagnostics.name = "Diagnostics";
    diagnostics.labels = {
        {"FPS: 60"},
        {"Entities: 3"}
    };

    ui::Panel scene_panel;
    scene_panel.name = "Scene";
    scene_panel.labels = {
        {"Active Camera: MainCamera"},
        {"Environment: Clear sky"}
    };

    ui_state_.hud.title = "Codex Engine HUD";
    ui_state_.hud.panels = {diagnostics, scene_panel};
    ui_state_.focused_panel = diagnostics.name;
}
}
