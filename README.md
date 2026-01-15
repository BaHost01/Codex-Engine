# Codex Engine

Codex Engine is a lightweight, educational 3D game engine scaffold written in modern C++.
This repository currently focuses on establishing core engine concepts like math types,
transforms, an expanded UI state, a basic asset compilation pass, and a simple environment
description so we can iterate quickly.

## Goals

- Provide foundational math utilities (vectors, transforms).
- Define a minimal world representation with entities.
- Sketch a basic 3D environment (sky, ground, light) for scene setup.
- Introduce a richer HUD model for UI iteration.
- Add an engine asset compilation step for shaders and materials.
- Create an engine loop that demonstrates update flow.
- Keep the build simple and portable.

## Build

```bash
cmake -S . -B build
cmake --build build
./build/codex_engine
```

## Next Steps

- Add a renderer abstraction and GPU backend.
- Introduce a scene graph and component system.
- Integrate input handling and window creation.
- Connect the UI state to a real debug overlay.
```
