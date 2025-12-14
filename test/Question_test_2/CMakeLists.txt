project(question_2_tests)

add_executable(question_2_tests
    "gpa_test.cpp"
)

target_link_libraries(question_2_tests
    question_2_library
)
