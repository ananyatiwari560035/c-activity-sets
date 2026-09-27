//Write a program to find the length of a string.

#include <stdio.h>

void getString(char str[])
{
    printf("Enter the string: ");
    scanf("%s", str);
}

int findLength(char str[])
{
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }

    return count;
}

void displayResult(int len, char str[])
{
    printf("Number of characters in %s = %d\n", str, len);
}

int main()
{
    char str[100];
    int len;

    getString(str);
    len = findLength(str);
    displayResult(len, str);

    return 0;
}