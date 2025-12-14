project(decimal_hex)

add_library(decimal_hex_library
    "decimal_hex.cpp"
    "decimal_hex.h"
)

add_executable(decimal_hex_exe
    "main.cpp"
    "decimal_hex.cpp"
)


