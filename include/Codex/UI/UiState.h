#pragma once

#include <string>

#include "Codex/UI/Hud.h"

namespace codex::ui {

struct UiState {
    Hud hud {};
    std::string focused_panel;
    bool debug_overlay_enabled {true};
};

} // namespace codex::ui
