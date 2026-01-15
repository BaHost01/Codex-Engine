#include "Codex/Engine.h"

int main() {
    codex::EngineConfig config;
    config.application_name = "Codex Engine Prototype";
    config.target_fps = 60;

    codex::Engine engine(config);
    engine.run(5);

    return 0;
}
