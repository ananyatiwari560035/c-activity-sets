//

#include <stdio.h>
#include <math.h>

int getNumber()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    return n;
}

int globalFirst = 0;
int globalSecond = 1;

int generateFibonacci()
{
    static int firstTerm = 0;
    static int secondTerm = 1;

    int currentTerm = firstTerm;

    firstTerm = secondTerm;
    secondTerm = currentTerm + secondTerm;

    return currentTerm;
}

int main()
{
    int n;
    int result;

    n = getNumber();

    for(int i = 0; i < n; i++)
    {
        result = generateFibonacci();
        printf("Fibonacci term: %d\n", result);
    }

    return 0;
}
