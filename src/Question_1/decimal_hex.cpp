#include "decimal_hex.h"

std::string decimal_to_hex(int value)
{
    std::string result;
    int remainder;

    if(value == 0)
    {
        result.push_back('0');
    }

    while(value > 0)
    {
        remainder = value % 16;

        if(remainder < 10)
        {
            result.push_back(remainder + '0');
        }
        else
        {
            result.push_back((remainder - 10) + 'A');
        }

        value = value / 16;
    }

    // reverse the string
    std::string final_result;
    for(int i = result.length() - 1; i >= 0; i--)
    {
        final_result.push_back(result[i]);
    }

    return final_result;
}

