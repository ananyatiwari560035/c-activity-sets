//Find the area of the largest of three circles.
#include <stdio.h>

struct circle {
    float radius, area;
};

typedef struct circle Circle;

Circle input_circle()
{
    Circle c;
    printf("Enter radius: ");
    scanf("%f", &c.radius);
    return c;
}

void compute_area(Circle *c)
{
    c->area = 3.14 * c->radius * c->radius;
}

float largest_of_three_circles(Circle c1, Circle c2, Circle c3)
{
    float largest = c1.area;

    if (c1.area > c2.area && c1.area > c3.area) {
        largest = c1.area;
    }
    else if (c2.area > c3.area) {
        largest = c2.area;
    }
    else {
        largest = c3.area;
    }

    return largest;
}

void display(Circle c1, Circle c2, Circle c3, float largest)
{
    printf("Largest of circles with radii as 1-->%.2f 2-->%.2f and 3-->%.2f haves area %.2f\n",
           c1.radius, c2.radius, c3.radius, largest);
}

int main()
{
    Circle c1, c2, c3;

    c1 = input_circle();
    c2 = input_circle();
    c3 = input_circle();

    compute_area(&c1);
    compute_area(&c2);
    compute_area(&c3);

    float largest = largest_of_three_circles(c1, c2, c3);

    display(c1, c2, c3, largest);

    return 0;
}