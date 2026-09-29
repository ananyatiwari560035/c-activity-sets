#include <stdio.h>
#include <math.h>

struct point {
    float x, y;
};

typedef struct point Point;

// Read coordinates of a point
Point get_point()
{
    Point pt;

    printf("Enter x and y coordinates: ");
    scanf("%f %f", &pt.x, &pt.y);

    return pt;
}

// Find distance between two points
float calculate_distance(Point first, Point second)
{
    float result;

    result = sqrt((first.x - second.x) * (first.x - second.x) +
                  (first.y - second.y) * (first.y - second.y));

    return result;
}

// Display the result
void display_result(Point first, Point second, float result)
{
    printf("\nThe distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n",
           first.x, first.y, second.x, second.y, result);
}

int main()
{
    Point first, second;
    float result;

    first = get_point();
    second = get_point();

    result = calculate_distance(first, second);

    display_result(first, second, result);

    return 0;
}