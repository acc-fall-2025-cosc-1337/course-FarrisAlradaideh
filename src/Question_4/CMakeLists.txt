project(cookie_ingredients)

add_library(cookie_ingredients_library
    "cookies.cpp"
    "cookies.h"
)

add_executable(cookie_ingredients_exe
    "main.cpp"
    "cookies.cpp"
)


