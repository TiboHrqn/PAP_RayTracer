cmake_minimum_required(VERSION 3.17)
project(PAP_RayTracer)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/objects)
include_directories(src/utils)

add_executable(PAP_RayTracer
        src/objects/cube.cpp
        src/objects/cube.h
        src/objects/object.cpp
        src/objects/object.h
        src/objects/plane.cpp
        src/objects/plane.h
        src/objects/quad.cpp
        src/objects/quad.h
        src/objects/sphere.cpp
        src/objects/sphere.h
        src/utils/vector3D.cpp
        src/utils/vector3D.h)
