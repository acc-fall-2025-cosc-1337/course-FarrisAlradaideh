add_library(final_3_library
    Shooter.cpp
    Shooter.h
)

add_executable(final_3_exe
    main.cpp
    Shooter.cpp
)

target_link_libraries(final_3_exe
    final_3_library
    final_2_library
    final_1_library
)

