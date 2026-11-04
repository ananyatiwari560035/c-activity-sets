//Understand how to use n & n-1 to count the number of bits in a number.
#include <stdio.h>

int input()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int count_bits1(int num)
{
    int flag = 1;
    int count = 0;

    for(int i = 0; i < sizeof(int) * 8; i++)
    {
        if((num & flag) > 0)
        {
            count++;
        }

        flag <<= 1;
    }

    return count;
}

int count_bits2(int num)
{
    int count = 0;

    while(num)
    {
        count++;
        num = num & (num - 1);
    }

    return count;
}

void output(int num, int count)
{
    printf("Number of 1 bits in %d = %d\n", num, count);
}

int main()
{
    int num, count;

    num = input();

    count = count_bits1(num);
    output(num, count);

    count = count_bits2(num);
    output(num, count);

    return 0;
}