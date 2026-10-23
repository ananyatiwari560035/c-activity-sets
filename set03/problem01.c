//Understanding pointers
#include <stdio.h>
#include <stdlib.h>

struct triangle
{
    float base, altitude, area;
};

typedef struct triangle Triangle;

void *input()
{
    Triangle *ptr = malloc(sizeof(Triangle));

    printf("Enter the base and height: ");
    scanf("%f%f", &ptr->base, &ptr->altitude);

    return ptr;
}

void output(Triangle tri)
{
    printf("Base of triangle = %.2f\n", tri.base);
    printf("Height of triangle = %.2f\n", tri.altitude);
}

int main()
{
    void *data;

    data = input();

    Triangle *ptr = (Triangle *)data;

    output(*ptr);

    free(data);

    return 0;
}