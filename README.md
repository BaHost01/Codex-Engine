# Codex Engine

Codex Engine is a lightweight, educational 3D game engine scaffold written in modern C++.
This repository currently focuses on establishing core engine concepts like math types,

## Goals

- Provide foundational math utilities (vectors, transforms).
- Define a minimal world representation with entities.

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

```
