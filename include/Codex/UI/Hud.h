#pragma once

#include <string>
#include <vector>

namespace codex::ui {

struct TextStyle {
    std::string font {"Inter"};
    int size {16};
    std::string color {"#FFFFFF"};
    bool bold {false};
};

struct Layout {
    std::string direction {"vertical"};
    int padding {12};
    int gap {8};
};

struct Label {
    std::string text;
    TextStyle style {};
};

struct Button {
    std::string text;
    std::string action;
    std::string background {"#2E2E2E"};
    TextStyle style {{"Inter", 15, "#FFFFFF", true}};
};

struct Gauge {
    std::string label;
    float value {0.0f};
    float max_value {100.0f};
    std::string color {"#4FC3F7"};
};

struct Panel {
    std::string name {"Panel"};
    std::string background {"#1C1C1C"};
    Layout layout {};
    std::vector<Label> labels {};
    std::vector<Button> buttons {};
    std::vector<Gauge> gauges {};
};

struct Hud {
    std::string title {"Codex HUD"};
    std::vector<Panel> panels {};
};

} // namespace codex::ui
