//Find the total area of n circles.
#include <stdio.h>

struct circle {
    float radius, area;
};

typedef struct circle Circle;

Circle input(int i)
{
    Circle c;
    printf("Enter radius of circle %d: ", i + 1);
    scanf("%f", &c.radius);
    return c;    
}

void input_circles(int n, Circle circles[n])
{
    for(int i = 0; i < n; i++) {
        circles[i] = input(i);
    }
}

void compute_area(Circle *c)
{
    c->area = c->radius * c->radius * 3.14;
}

void compute_areas(int n, Circle circles[n])
{
    for(int i = 0; i < n; i++) {
        compute_area(&circles[i]);
    }
}

float sum_of_areas(int n, Circle circles[n])
{
    float total_area = 0;
    for(int i = 0; i < n; i++) {
        total_area += circles[i].area;
    }
    return total_area;
}

void display_circle(int circle_no, Circle c)
{
    printf("Circle %d: radius = %.2f, area = %.2f\n", circle_no + 1, c.radius, c.area);
}

void display_result(int n, Circle circles[n], float total_area)
{
    for(int i = 0; i < n; i++) {
        display_circle(i, circles[i]);
    }  
    printf("Total area of all circles = %.2f\n", total_area);
}

int main()
{
    int n;
    printf("Enter the number of circles: ");
    scanf("%d", &n);

    Circle circles[n];
    input_circles(n, circles);
    compute_areas(n, circles);
    float total_area = sum_of_areas(n, circles);
    display_result(n, circles, total_area);

    return 0;
}
