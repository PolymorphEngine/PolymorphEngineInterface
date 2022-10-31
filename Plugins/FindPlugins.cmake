if(NOT TARGET render-2D)
    include(FetchContent)

    FetchContent_Declare(
            render-2D
            GIT_REPOSITORY https://github.com/PolymorphEngine/render-2D.git
            GIT_TAG main
    )

    FetchContent_MakeAvailable(render-2D)
    get_target_property(RENDER_2D_ICLS render-2D INCLUDE_DIRECTORIES)
endif()

if(NOT TARGET render-core)
    include(FetchContent)

    FetchContent_Declare(
            render-core
            GIT_REPOSITORY https://github.com/PolymorphEngine/render-core.git
            GIT_TAG main
    )
    FetchContent_MakeAvailable(render-core)
    
    get_target_property(RENDER_CORE_ICLS render-core INCLUDE_DIRECTORIES)
endif()

if(NOT TARGET raylib-render-core)
    include(FetchContent)

    FetchContent_Declare(
            raylib-render-core
            GIT_REPOSITORY https://github.com/PolymorphEngine/raylib-render-core.git
            GIT_TAG main
    )

    FetchContent_MakeAvailable(raylib-render-core)
endif()

if(NOT TARGET input)
    include(FetchContent)

    FetchContent_Declare(
            input
            GIT_REPOSITORY https://github.com/PolymorphEngine/input.git
            GIT_TAG main
    )

    FetchContent_MakeAvailable(input)
    get_target_property(INPUT_ICLS input INCLUDE_DIRECTORIES)
endif()

