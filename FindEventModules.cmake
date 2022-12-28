if(NOT TARGET event-modules)
    include(FetchContent)

    FetchContent_Declare(
            event-modules
            GIT_REPOSITORY https://github.com/PolymorphEngine/event-modules.git
            GIT_TAG main
    )

    FetchContent_MakeAvailable(event-modules)
    get_target_property(event-modules-icls event-modules INTERFACE_INCLUDE_DIRECTORIES)
endif()