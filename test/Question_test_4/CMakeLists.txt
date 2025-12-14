project(question_4_tests)

add_executable(question_4_tests
    "cookies_test.cpp"
)

target_link_libraries(question_4_tests
    question_4_library
)
