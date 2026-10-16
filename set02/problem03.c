//Write a program to add two fraction and display the result in the most reduced form.
#include <stdio.h>

struct fraction {
    int numerator, denominator;
};

typedef struct fraction Fraction;

Fraction input()
{
    Fraction f;

    printf("Enter the numerator and denominator: ");
    scanf("%d%d", &f.numerator, &f.denominator);

    return f;
}

int find_gcd(int x, int y)
{
    int temp;

    if (x < 0)
        x = -x;

    if (y < 0)
        y = -y;

    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }

    return x;
}

Fraction add_fraction(Fraction first, Fraction second)
{
    Fraction sum;
    int gcd;

    sum.numerator = first.numerator * second.denominator
                  + second.numerator * first.denominator;

    sum.denominator = first.denominator * second.denominator;

    gcd = find_gcd(sum.numerator, sum.denominator);

    if (gcd != 0)
    {
        sum.numerator /= gcd;
        sum.denominator /= gcd;
    }

    if (sum.denominator < 0)
    {
        sum.numerator = -sum.numerator;
        sum.denominator = -sum.denominator;
    }

    return sum;
}

void output(Fraction first, Fraction second, Fraction sum)
{
    printf("Sum of %d/%d and %d/%d = %d/%d\n",
           first.numerator, first.denominator,
           second.numerator, second.denominator,
           sum.numerator, sum.denominator);
}

int main()
{
    Fraction first, second, sum;

    first = input();
    second = input();

    sum = add_fraction(first, second);

    output(first, second, sum);

    return 0;
}
