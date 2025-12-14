#include "decimal_binary.h"

std::string decimal_to_binary(int value)
{
    std::string binary;
    int remainder;

    while(value > 0)
    {
        remainder = value % 2;

        if(remainder == 0)
        {
            binary.push_back('0');
        }
        else
        {
            binary.push_back('1');
        }

        value = value / 2;
    }

    // pad with leading zeros to make 8 bits
    while(binary.length() < 8)
    {
        binary.push_back('0');
    }

    // reverse the string
    std::string final_binary;
    for(int i = binary.length() - 1; i >= 0; i--)
    {
        final_binary.push_back(binary[i]);
    }

    return final_binary;
}