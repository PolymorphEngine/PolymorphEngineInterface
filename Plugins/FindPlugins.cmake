if(NOT TARGET render-2D)
    include(FetchContent)

    FetchContent_Declare(
            render-2D
            GIT_REPOSITORY https://github.com/PolymorphEngine/render-2D.git
            GIT_TAG main
    )

    FetchContent_MakeAvailable(render-2D)
endif()

if(NOT TARGET render-core)
    include(FetchContent)

    FetchContent_Declare(
            render-core
            GIT_REPOSITORY https://github.com/PolymorphEngine/render-core.git
            GIT_TAG main
    )

    FetchContent_MakeAvailable(render-core)
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
