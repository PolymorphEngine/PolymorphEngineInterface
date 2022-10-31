cmake_minimum_required(VERSION 3.20)
project(Raylib-Project-Template)

set(CMAKE_CXX_STANDARD 23)
set(OpenGL_GL_PREFERENCE GLVND)
set(GRAPHICS GRAPHICS_API_OPENGL_43)
set(EXECUTABLE_OUTPUT_PATH ../)

#set(CMAKE_MODULE /usr/bin/clang)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=memory")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize-memory-track-origins -fsanitize=memory -fsanitize-recover=all -fPIE -fno-omit-frame-pointer  -fno-optimize-sibling-calls -O1")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

include_directories(
        ./Game/
        Game/Scripts/include/
        Game/Factory/include
        Game/Factory/include/initializers
)



if(NOT TARGET PolymorphEngine)
    include(FetchContent)

    FetchContent_Declare(
            PolymorphEngine
            GIT_REPOSITORY https://github.com/PolymorphEngine/engine.git
            GIT_TAG feature/PluginManager
    )

    FetchContent_MakeAvailable(PolymorphEngine)
endif()


include(Plugins/FindPlugins.cmake)


file(GLOB_RECURSE SCRIPTS_SRC Game/Scripts/src/*.cpp)
file(GLOB_RECURSE SCRIPTS_ICL Game/Scripts/include/*.hpp)

file(GLOB_RECURSE FACTORY_SRC Game/Factory/src/*.cpp)
file(GLOB_RECURSE FACTORY_ICL Game/Factory/include/*.hpp)

get_target_property(engine-icls PolymorphEngine INCLUDE_DIRECTORIES)

add_executable(${PROJECT_NAME} ${SCRIPTS_SRC} ${SCRIPTS_ICL} ${FACTORY_SRC} ${FACTORY_ICL} ${RENDER_2D_ICLS} ${RENDER_CORE_ICLS} ${INPUT_ICLS} main.cpp)
target_link_libraries(${PROJECT_NAME} PolymorphEngine)
set_target_properties(PolymorphEngine PROPERTIES EXCLUDE_FROM_ALL True POSITION_INDEPENDENT_CODE ON)
target_include_directories(${PROJECT_NAME} PUBLIC ${RENDER_2D_ICLS} ${RENDER_CORE_ICLS} ${INPUT_ICLS})