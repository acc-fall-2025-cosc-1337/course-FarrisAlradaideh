add_library(final_2_library
    Roll.cpp
    Roll.h
)

add_executable(final_2_exe
    main.cpp
    Roll.cpp
)

target_link_libraries(final_2_exe
    final_2_library
    final_1_library
)



