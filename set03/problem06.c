//Understanding Recursion.
#include <stdio.h>

int sum(int num)
{
    if(num == 0)
    {
        return 0;
    }

    return sum(num - 1) + num;
}

int fibonacci(int num)
{
    int result;

    if(num == 0)
    {
        return 0;
    }

    if(num == 1)
    {
        return 1;
    }

    result = fibonacci(num - 1) + fibonacci(num - 2);

    printf("%d\n", result);

    return result;
}

int main()
{
    int result;

    result = fibonacci(10);

    printf("Fibonacci = %d\n", result);
    printf("Sum = %d\n", sum(10));

    return 0;
}