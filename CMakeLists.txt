cmake_minimum_required(VERSION 3.16)
project(CodexEngine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(codex_engine_lib
src/Engine.cpp
)

target_include_directories(codex_engine_lib
add_library(codex_engine
    src/Engine.cpp
)

target_include_directories(codex_engine
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(codex_engine
    src/main.cpp
)

target_link_libraries(codex_engine
    PRIVATE
        codex_engine_lib
        codex_engine
)
