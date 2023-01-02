cmake_minimum_required(VERSION 3.17)
project(PAP_GameEngine)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/objects)
include_directories(src/utils)
include_directories(src/environment)
include_directories(src/include)

add_executable(PAP_GameEngine
        src/include/objects.h
        src/include/utils.h
        src/include/environment.h
        src/objects/cube.cpp
        src/objects/cube.h
        src/objects/object.cpp
        src/objects/object.h
        src/objects/plane.cpp
        src/objects/plane.h
        src/objects/quad.cpp
        src/objects/quad.h
        src/objects/point2D.cpp
        src/objects/point2D.h
        src/objects/sphere.cpp
        src/objects/sphere.h
        src/objects/triangle3D.cpp
        src/objects/triangle3D.h
        src/objects/triangle2D.cpp
        src/objects/triangle2D.h
        src/utils/vector3D.cpp
        src/utils/vector3D.h
        src/utils/vector2D.cpp
        src/utils/vector2D.h
        src/utils/mathTools.cpp
        src/utils/mathTools.h
        src/utils/color.cpp
        src/utils/color.h
        src/main.cpp
        )
