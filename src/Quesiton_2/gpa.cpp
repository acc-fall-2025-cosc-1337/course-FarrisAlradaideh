#include "gpa.h"

std::string gpa_to_letter_grade(double gpa)
{
    if(gpa >= 3.5 && gpa <= 4.0)
    {
        return "A";
    }
    else if(gpa >= 3.0 && gpa < 3.5)
    {
        return "B";
    }
    else if(gpa >= 2.0 && gpa < 3.0)
    {
        return "C";
    }
    else if(gpa >= 1.0 && gpa < 2.0)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

