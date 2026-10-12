//Write a program to add three fractions.
#include <stdio.h>

struct Fraction {
    int numerator;
    int denominator;
};

typedef struct Fraction Fraction;

Fraction input_fraction(int i)
{
    Fraction f;
    printf("Enter numerator and denominator for fraction %d: ", i + 1);
    scanf("%d%d", &f.numerator, &f.denominator);
    return f;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction result;
    result.denominator = f1.denominator * f2.denominator;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    return result;
}

void display_sum(Fraction f1, Fraction f2, Fraction result)
{
    printf("The sum of %d/%d + %d/%d = %d/%d\n",
           f1.numerator, f1.denominator,
           f2.numerator, f2.denominator,
           result.numerator, result.denominator);
}

int main()
{  
    Fraction f1, f2, result;
    f1 = input_fraction(0);
    f2 = input_fraction(1);
    result = add_fractions(f1, f2);
    display_sum(f1, f2, result);
    return 0;
}
