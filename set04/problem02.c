//Sudoku version 2 and 3.

int checkRow(int n, int a[n])
{
    int temp[n];

    for(int i = 0; i < n; i++)
    {
        temp[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        int pos = a[i] - 1;

        if(temp[pos] == 0)
        {
            temp[pos] = a[i];
        }
        else
        {
            return 0;
        }
    }

    return 1;
}
