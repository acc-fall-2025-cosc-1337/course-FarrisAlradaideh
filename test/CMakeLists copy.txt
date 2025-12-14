add_library(final_1_library
    Die.cpp
    Die.h
)

add_executable(final_1_exe
    main.cpp
    Die.cpp
)

target_link_libraries(final_1_exe final_1_library)





