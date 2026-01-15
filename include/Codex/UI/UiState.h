#pragma once

#include <string>

#include "Codex/UI/Hud.h"

namespace codex::ui {

struct UiState {
    Hud hud {};
    std::string focused_panel;
};

} // namespace codex::ui
