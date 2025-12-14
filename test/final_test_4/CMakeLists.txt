add_executable(final_test_4
    phase_tests.cpp
)

target_link_libraries(final_test_4
    final_4_library
    final_3_library
    final_2_library
    final_1_library
)

add_test(NAME final_test_4 COMMAND final_test_4 -s)


