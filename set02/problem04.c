//Write a program to add n fractions.
#include <stdio.h>

struct fraction {
    int numerator, denominator;
};

typedef struct fraction Fraction;

Fraction read_fraction()
{
    Fraction value;
    printf("Enter numerator and denominator: ");
    scanf("%d%d", &value.numerator, &value.denominator);
    return value;
}

void read_fractions(int count, Fraction fractions[count])
{
    for (int index = 0; index < count; index++) {
        fractions[index] = read_fraction();
    }
}

int calculate_gcd(int first, int second)
{
    int remainder;

    while (second != 0) {
        remainder = second;
        second = first % second;
        first = remainder;
    }

    return first;
}

Fraction add_two_fractions(Fraction first, Fraction second)
{
    Fraction sum;

    sum.denominator = first.denominator * second.denominator;
    sum.numerator = first.numerator * second.denominator
                  + second.numerator * first.denominator;

    int common_factor = calculate_gcd(sum.numerator, sum.denominator);

    sum.numerator /= common_factor;
    sum.denominator /= common_factor;

    return sum;
}

Fraction add_all_fractions(int count, Fraction fractions[count])
{
    Fraction total = fractions[0];

    for (int index = 1; index < count; index++) {
        total = add_two_fractions(total, fractions[index]);
    }

    return total;
}

void display_sum(int count, Fraction fractions[count], Fraction total)
{
    for (int index = 0; index < count - 1; index++) {
        printf("%d/%d + ", fractions[index].numerator,
               fractions[index].denominator);
    }

    printf("%d/%d = %d/%d\n",
           fractions[count - 1].numerator,
           fractions[count - 1].denominator,
           total.numerator, total.denominator);
}

int main()
{
    int count;

    printf("How many fractions do you want to add? ");
    scanf("%d", &count);

    if (count <= 0) {
        printf("Please enter a positive number of fractions.\n");
        return 1;
    }

    Fraction fractions[count];

    read_fractions(count, fractions);

    Fraction total = add_all_fractions(count, fractions);

    display_sum(count, fractions, total);

    return 0;
}