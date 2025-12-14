add_executable(final_test_2
    roll_tests.cpp
)

target_link_libraries(final_test_2
    final_2_library
    final_1_library
)

add_test(NAME final_test_2 COMMAND final_test_2 -s)






