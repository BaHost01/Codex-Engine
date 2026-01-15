#pragma once

#include <cstdint>
#include <string>
#include <vector>

#include "Codex/Math/Transform.h"

namespace codex {

struct Entity {
    std::uint32_t id {0};
    std::string name;
    math::Transform transform {};
};

struct EngineConfig {
    std::string application_name {"Codex Engine"};
    std::uint32_t target_fps {60};
};

struct WorldState {
    std::vector<Entity> entities {};
};

class Engine {
public:
    explicit Engine(EngineConfig config);

    void run(std::uint32_t frames = 3U);
    void tick(float delta_seconds);

    [[nodiscard]] const EngineConfig &config() const;
    [[nodiscard]] const WorldState &world() const;

private:
    EngineConfig config_;
    WorldState world_ {};
    std::uint32_t next_entity_id_ {1U};

    void seed_world();
};

} // namespace codex
