//Write a program to print your name, age, height, weight and place of birth.
#include <stdio.h>

int main()
{   // welcome to the program enter your name, age, height, weight...
    char name[50], place[50];
    int age;
    float height, weight;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("Enter your place of birth: ");
    scanf("%s", place);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Weight: %.2f\n", weight);
    printf("Place of Birth: %s\n", place);

    return 0;
}