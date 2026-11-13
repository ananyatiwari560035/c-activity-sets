// Sudoku solution verifies

#include <stdio.h>

int checkRow(int n, int a[n])
{
    for(int i = 1; i <= 9; i++)
    {
        int found = 0;

        for(int j = 0; j < n; j++)
        {
            if(a[j] == i)
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int a[9] = {9, 1, 2, 3, 4, 5, 6, 7, 8};

    if(checkRow(9, a))
    {
        printf("All numbers from 1 to 9 are present.\n");
    }
    else
    {
        printf("Some numbers are missing.\n");
    }

    return 0;
}
