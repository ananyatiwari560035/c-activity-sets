//Pointers and structures
#include <stdio.h>
#include <stdlib.h>

struct object
{
    int type;
    void *shape;
};

typedef struct object Object;

struct circle
{
    int type;
    float radius, area;
};

typedef struct circle Circle;

struct rectangle
{
    int type;
    float length, breadth, area;
};

typedef struct rectangle Rectangle;

struct triangle
{
    int type;
    float base, altitude;
};

typedef struct triangle Triangle;

Object input_shape()
{
    int choice;
    Object obj;

    printf("Choose a shape (0-Circle, 1-Rectangle, 2-Triangle): ");
    scanf("%d", &choice);

    if (choice == 0)
    {
        Circle *c;
        c = malloc(sizeof(Circle));

        if (c == NULL)
        {
            printf("Memory allocation failed.\n");
            exit(1);
        }

        c->type = 0;

        printf("Enter circle radius: ");
        scanf("%f", &c->radius);

        obj.type = c->type;
        obj.shape = c;
    }
    else if (choice == 1)
    {
        Rectangle *r;
        r = malloc(sizeof(Rectangle));

        if (r == NULL)
        {
            printf("Memory allocation failed.\n");
            exit(1);
        }

        r->type = 1;

        printf("Enter rectangle length and width: ");
        scanf("%f%f", &r->length, &r->breadth);

        obj.type = r->type;
        obj.shape = r;
    }
    else if (choice == 2)
    {
        Triangle *t;
        t = malloc(sizeof(Triangle));

        if (t == NULL)
        {
            printf("Memory allocation failed.\n");
            exit(1);
        }

        t->type = 2;

        printf("Enter triangle base and height: ");
        scanf("%f%f", &t->base, &t->altitude);

        obj.type = t->type;
        obj.shape = t;
    }
    else
    {
        printf("Invalid shape choice.\n");
        exit(1);
    }

    return obj;
}

void output_shape(Object obj)
{
    if (obj.type == 0)
    {
        printf("Selected Shape: Circle\n");
        printf("Radius = %.2f\n",
               ((Circle *)obj.shape)->radius);
    }
    else if (obj.type == 1)
    {
        printf("Selected Shape: Rectangle\n");
        printf("Length = %.2f\n",
               ((Rectangle *)obj.shape)->length);
        printf("Width = %.2f\n",
               ((Rectangle *)obj.shape)->breadth);
    }
    else if (obj.type == 2)
    {
        printf("Selected Shape: Triangle\n");
        printf("Base = %.2f\n",
               ((Triangle *)obj.shape)->base);
        printf("Height = %.2f\n",
               ((Triangle *)obj.shape)->altitude);
    }
}

int main()
{
    Object obj;

    obj = input_shape();
    output_shape(obj);

    free(obj.shape);

    return 0;
}