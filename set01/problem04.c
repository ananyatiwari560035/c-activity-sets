//Write a program to find the largest of three numbers using 4 functions.
#include <stdio.h>
int input(int *num1, int *num2, int *num3){
    printf("--------Welcome to the program to find largest number---------");
    printf("\nenter the first number:");
    scanf("%d",num1);
    printf("\nenter the second number:");
    scanf("%d",num2);
    printf("\nenter the third number:");
    scanf("%d",num3);
}

int largest(int x,int y, int z){
     if (x == y && y == z)
        return 0;
     else if (x > y && x > z)
        return x;
     else if (y > x && y > z)
        return y;
     else
        return z;
}

int display(int result, int x, int y, int z){
    if (x == y && y == z)
        printf("\nAll three numbers are equal!!");
    else
        printf("\n%d is the largest number among 3 numbers given by you!!", result);

    return 0;
}

int main()
{
    int num1, num2, num3, result;

    input(&num1, &num2, &num3);

    result = largest(num1, num2, num3);

    display(result, num1, num2, num3);

    return 0;
}