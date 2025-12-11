#include "decisions.h"

std::string get_letter_grade_using_if(int numerical_grade)
{
    if(numerical_grade >= 90 && numerical_grade <= 100)
    {
        return "A";
    }
    else if(numerical_grade >= 80 && numerical_grade <= 89)
    {
        return "B";
    }
    else if(numerical_grade >= 70 && numerical_grade <= 79)
    {
        return "C";
    }
    else if(numerical_grade >= 60 && numerical_grade <= 69)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

std::string get_letter_grade_using_switch(int numerical_grade)
{
    int tens = numerical_grade / 10;

    switch(tens)
    {
        case 10:
        case 9:
            return "A";
        case 8:
            return "B";
        case 7:
            return "C";
        case 6:
            return "D";
        default:
            return "F";
    }
#include "decisions.h"

std::string get_letter_grade_using_if(int numerical_grade)
{
    if(numerical_grade >= 90 && numerical_grade <= 100)
    {
        return "A";
    }
    else if(numerical_grade >= 80 && numerical_grade <= 89)
    {
        return "B";
    }
    else if(numerical_grade >= 70 && numerical_grade <= 79)
    {
        return "C";
    }
    else if(numerical_grade >= 60 && numerical_grade <= 69)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

std::string get_letter_grade_using_switch(int numerical_grade)
{
    int tens = numerical_grade / 10;

    switch(tens)
    {
        case 10:
        case 9:
            return "A";
        case 8:
            return "B";
        case 7:
            return "C";
        case 6:
            return "D";
        default:
            return "F";
    }
}


project(hw_03_library)

add_library(hw_03_library "decisions.cpp" "decisions.h")
add_executable(hw_03_exe "main.cpp" "decisions.cpp")

