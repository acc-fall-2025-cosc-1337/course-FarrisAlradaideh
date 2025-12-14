project(question_1_tests)

add_executable(question_1_tests
    "decimal_hex_test.cpp"
)

target_link_libraries(question_1_tests
    question_1_library
)
