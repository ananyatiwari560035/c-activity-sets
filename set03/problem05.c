/*Undertand floating point number. Appoximation and reason why == operator should not be used to compare two floating point numbers.*/
#include <stdio.h>
#include <math.h>

int check()
{
    float num = 0.0;

    for(int i = 0; i < 13; i++)
    {
        num += 17.0 / 13.0;
    }

    if(fabs(17.0 - num) < 0.0001)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result;

    result = check();

    printf("Result = %d\n", result);

    return 0;
}