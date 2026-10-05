//Distance between two point using pass by reference.
#include <stdio.h>
#include <math.h>

/* Passing structures by reference */

struct point {
    float x, y;
};

typedef struct point Point;

void readPoints(Point *first, Point *second)
{
    printf("Enter coordinates of first point: ");
    scanf("%f%f", &first->x, &first->y);

    printf("Enter coordinates of second point: ");
    scanf("%f%f", &second->x, &second->y);
}

float calculateDistance(Point first, Point second)
{
    float result;

    result = sqrt((second.x - first.x) * (second.x - first.x) +
                  (second.y - first.y) * (second.y - first.y));

    return result;
}

void displayResult(Point first, Point second, float result)
{
    printf("\nDistance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n",
           first.x, first.y,
           second.x, second.y,
           result);
}

int main()
{
    Point firstPoint, secondPoint;
    float result;

    readPoints(&firstPoint, &secondPoint);

    result = calculateDistance(firstPoint, secondPoint);

    displayResult(firstPoint, secondPoint, result);

    return 0;
}