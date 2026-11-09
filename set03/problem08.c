//Understanding Switch Case

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int getUserChoice()
{
    int userChoice;

    printf("Enter your choice (1 to 3, 4 to exit): ");
    scanf("%d", &userChoice);

    return userChoice;
}

void processUsingSwitch(int userChoice)
{
    switch (userChoice)
    {
        case 1:
            printf("You selected Option 1.\n");
            break;

        case 2:
            printf("You selected Option 2.\n");
            break;

        case 3:
            printf("You selected Option 3.\n");
            break;

        case 4:
            printf("Exiting the program. Goodbye!\n");
            exit(0);
            break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
            break;
    }
}

void processUsingIfElse(int userChoice)
{
    if (userChoice == 1)
    {
        printf("You selected Option 1.\n");
    }
    else if (userChoice == 2)
    {
        printf("You selected Option 2.\n");
    }
    else if (userChoice == 3)
    {
        printf("You selected Option 3.\n");
    }
    else if (userChoice == 4)
    {
        printf("Exiting the program. Goodbye!\n");
        exit(0); /* Equivalent to terminating the program */
    }
    else
    {
        printf("Invalid choice! Please try again.\n");
    }
}

int main()
{
    int userChoice;

    while (1)
    {
        userChoice = getUserChoice();
        processUsingSwitch(userChoice);
    }

    return 0;
}
```
