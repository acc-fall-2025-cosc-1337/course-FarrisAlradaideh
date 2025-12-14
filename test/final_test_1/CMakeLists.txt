add_executable(final_test_1
    die_tests.cpp
)

target_link_libraries(final_test_1 final_1_library)

add_test(NAME final_test_1 COMMAND final_test_1 -s)





