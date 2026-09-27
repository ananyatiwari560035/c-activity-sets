//sum of n different numbers.
#include <stdio.h>

int get_count()
{
    int count;

    printf("How many values do you want to enter? ");
    scanf("%d", &count);

    return count;
}

void get_values(int count, int values[count])
{
    for(int i = 0; i < count; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);
    }
}

int calculate_sum(int count, int values[count])
{
    int total = 0;

    for(int i = 0; i < count; i++)
    {
        total = total + values[i];
    }

    return total;
}

void show_result(int count, int values[count], int total)
{
    for(int i = 0; i < count - 1; i++)
    {
        printf("%d + ", values[i]);
    }

    printf("%d = %d", values[count - 1], total);
}

int main()
{
    int count;
    int total;

    count = get_count();

    int values[count];

    get_values(count, values);

    total = calculate_sum(count, values);

    show_result(count, values, total);

    return 0;
}
