project(question_3)

add_library(question_3_library
    "decimal_binary.cpp"
    "decimal_binary.h"
)

add_executable(question_3_exe
    "main.cpp"
    "decimal_binary.cpp"
)



