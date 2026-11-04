//Count the number 1 bits in a number.
#include <stdio.h>

int input()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int count_ones(int num)
{
    int count = 0;

    printf("\nBits: ");

    for(int i = 0; i < sizeof(num) * 8; i++)
    {
        printf("%d", num & 1);

        if((num & 1) == 1)
        {
            count++;
        }

        num >>= 1;
    }

    return count;
}

int output(int num, int count)
{
    printf("\nNumber of 1 bits in %d = %d\n", num, count);
}

int main()
{
    int num;
    int count;

    num = input();
    count = count_ones(num);
    output(num, count);

    return 0;
}