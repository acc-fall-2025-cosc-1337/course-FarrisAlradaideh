add_library(final_4_library
    phase.cpp
    come_out_phase.cpp
    point_phase.cpp
)

add_executable(final_4_exe
    main.cpp
)

target_link_libraries(final_4_exe
    final_4_library
    final_3_library
    final_2_library
    final_1_library
)

