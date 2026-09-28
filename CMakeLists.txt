cmake_minimum_required(VERSION 3.15)

project(MiniLearn
    VERSION 0.1.0
    DESCRIPTION "A lightweight machine learning framework with Python and C++"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(minilearn_demo
    cpp/main.cpp
    cpp/linear_regression.cpp
)

target_include_directories(minilearn_demo
    PRIVATE
    ${PROJECT_SOURCE_DIR}/cpp
)
