#include "repetition.h"

int get_factorial(int num)
{
    int result = 1;

    for(int i = 1; i <= num; i++)
    {
        result = result * i;
    }

    return result;
}

int sum_odd_numbers(int num)
{
    int total = 0;
    int i = 1;

    while(i <= num)
    {
        if(i % 2 != 0)
        {
            total = total + i;
        }

        i++;
    }

    return total;
}
