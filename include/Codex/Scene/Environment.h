#pragma once

#include <string>
#include <vector>

#include "Codex/Math/Vector3.h"

namespace codex::scene {

struct DirectionalLight {
    std::string name {"Sun"};
    math::Vector3 direction { -0.3f, -1.0f, -0.2f };
    math::Vector3 color { 1.0f, 0.98f, 0.9f };
    float intensity {1.0f};
};

struct GroundPlane {
    std::string material {"Grid"};
    math::Vector3 size {50.0f, 1.0f, 50.0f};
};

struct Sky {
    std::string description {"Clear sky"};
    math::Vector3 tint {0.45f, 0.65f, 0.95f};
};

struct Environment {
    Sky sky {};
    GroundPlane ground {};
    std::vector<DirectionalLight> lights {DirectionalLight {}};
};

} // namespace codex::scene
