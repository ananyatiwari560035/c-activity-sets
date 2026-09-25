//2. Write a C program to add two numbers.
#include<stdio.h>
int main(){
    int a,b,sum;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    sum=a+b;
    printf("the sum is:%d+%d=%d",a,b,sum);
    return 0;
}
