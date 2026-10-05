//A program to read and print the points of a polygon

#include <stdio.h>

struct point {
    float x, y;
};

typedef struct point Point;

struct hexagon {
    int number_of_points;
    Point coordinates[6];
};

typedef struct hexagon Hexagon;

Hexagon getHexagon()
{
    Hexagon hex;
    hex.number_of_points = 6;

    for(int i = 0; i < 6; i++) {
        printf("Enter coordinates for point %d: ", i + 1);
        scanf("%f%f", &hex.coordinates[i].x, &hex.coordinates[i].y);
    }

    return hex;
}

void showHexagon(Hexagon hex)
{
    printf("\nThe coordinates of the hexagon are:\n");

    for(int i = 0; i < 6; i++) {
        printf("Point %d = (%.2f, %.2f)\n",
               i + 1,
               hex.coordinates[i].x,
               hex.coordinates[i].y);
    }
}

int main()
{
    Hexagon hex;

    hex = getHexagon();
    showHexagon(hex);

    return 0;
}