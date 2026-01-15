#pragma once

#include "Codex/Math/Vector3.h"

namespace codex::math {

struct Transform {
    Vector3 position {0.0f, 0.0f, 0.0f};
    Vector3 rotation {0.0f, 0.0f, 0.0f};
    Vector3 scale {1.0f, 1.0f, 1.0f};
};

} // namespace codex::math
