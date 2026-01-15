#pragma once

#include <string>
#include <vector>

namespace codex::ui {

struct TextStyle {
    std::string font {"Inter"};
    int size {16};
    std::string color {"#FFFFFF"};
};

struct Label {
    std::string text;
    TextStyle style {};
};

struct Panel {
    std::string name {"Panel"};
    std::string background {"#1C1C1C"};
    std::vector<Label> labels {};
};

struct Hud {
    std::string title {"Codex HUD"};
    std::vector<Panel> panels {};
};

} // namespace codex::ui
