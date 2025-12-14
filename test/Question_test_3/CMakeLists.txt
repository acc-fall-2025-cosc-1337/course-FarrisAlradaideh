project(question_3_tests)

add_executable(question_3_tests
    "decimal_binary_test.cpp"
)

target_link_libraries(question_3_tests
    question_3_library
)
