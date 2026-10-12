//Write a program to add three fractions.
#include <stdio.h>

struct Fraction {
    int numerator;
    int denominator;
};

typedef struct Fraction Fraction;

Fraction read_fraction(int index)
{
    Fraction f;
    printf("Enter numerator and denominator for fraction %d: ", index + 1);
    scanf("%d%d", &f.numerator, &f.denominator);
    return f;
}

Fraction add_two_fractions(Fraction f1, Fraction f2)
{
    Fraction result;
    result.denominator = f1.denominator * f2.denominator;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    return result;
}

Fraction add_three_fractions(Fraction f1, Fraction f2, Fraction f3)
{
    Fraction temp = add_two_fractions(f1, f2);
    Fraction final = add_two_fractions(temp, f3);
    return final;
}

void show_sum(Fraction f1, Fraction f2, Fraction f3, Fraction total)
{
    printf("The sum of %d/%d + %d/%d + %d/%d = %d/%d\n",
           f1.numerator, f1.denominator,
           f2.numerator, f2.denominator,
           f3.numerator, f3.denominator,
           total.numerator, total.denominator);
}

int main()
{  
    Fraction first, second, third, total;
    first = read_fraction(0);
    second = read_fraction(1);
    third = read_fraction(2);

    total = add_three_fractions(first, second, third);

    show_sum(first, second, third, total);
    return 0;
}
