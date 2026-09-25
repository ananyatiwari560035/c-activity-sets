//2. Write a C program to add two numbers using 4 functions.
#include <stdio.h>
// Welcome to the program!!
void userinput(int *lm, int *nk); // parameters are pointers
int add(int y, int z); // parameters passed by value
void display(int y, int z, int sum); // parameters passed by value

int main()
{
    int y, z, sum;

    userinput(&y, &z); // function call done

    sum = add(y, z);  // function call done

    display(y, z, sum); // function call done

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
