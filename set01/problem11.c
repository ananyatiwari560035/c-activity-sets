//Write a program to find the area of a circle.
#include <stdio.h>

struct circle {
    float radius, area;
};

typedef struct circle Circle;

Circle input_circle()
{
    Circle c;

    printf("Please enter radius of circle:");
    scanf("%f", &c.radius);

    return c;
}

Circle compute_area(Circle c)
{
    c.area = 3.14 * c.radius * c.radius;

    return c;
}

void print_circle(Circle c)
{
    printf("The circle with radius = %f has area = %f\n",
           c.radius, c.area);
}

int main()
{
    Circle c;

    c = input_circle();
    c = compute_area(c);
    print_circle(c);

    return 0;
}