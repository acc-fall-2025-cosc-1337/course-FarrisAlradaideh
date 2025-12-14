add_executable(final_test_3
    shooter_tests.cpp
)

target_link_libraries(final_test_3
    final_3_library
    final_2_library
    final_1_library
)

add_test(NAME final_test_3 COMMAND final_test_3 -s)


