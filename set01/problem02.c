//2. Write a C program to add two numbers using 4 functions.
#include <stdio.h>
// Welcome to the program!!
void userinput(int *lm, int *nk); // using call by reference
int add(int y, int z); // using call by value with parameters passed
void display(int y, int z, int sum); // using call by value  with parameter passed

int main()
{
    int y, z, sum;

    userinput(&y, &z);

    sum = add(y, z);

    display(y, z, sum);

    return 0;
}

void userinput(int *lm, int *nk)
{
    printf("Please enter two numbers of your choice! ");
    printf("\nenter the first number:");
    scanf("%d",lm);
    printf("\nenter the second number:");
    scanf("%d",nk);
}

int add(int y, int z)
{
    return y + z;
}

void display(int y, int z, int sum)
{
    printf(" sum is : %d + %d = %d\n", y, z, sum);
}
