// Relationship Between Arrays, Pointers, Memory Addresses, and Values

#include <stdio.h>

int main()
{
    int first_number;
    int second_number;

    int values[10] = {1,2,3,4,5,6,7,8,9,10};

    int *ptr = values;

    printf("Address of first number: %p\n", &first_number);
    printf("Address of second number: %p\n", &second_number);

    for(int index = 0; index < 10; index++, ptr++)
    {
        printf("%p %p %p %d %d %d\n",&values[index],ptr,values + index,*ptr,values[index],*(values + index));
    }

    return 0;
}
