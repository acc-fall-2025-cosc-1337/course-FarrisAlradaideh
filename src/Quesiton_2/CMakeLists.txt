project(gpa_letter_grade)

add_library(gpa_library
    "gpa.cpp"
    "gpa.h"
)

add_executable(gpa_exe
    "main.cpp"
    "gpa.cpp"
)





