#include <stdio.h>

char winner(char arr[], int n)
{
    int t = 0;
    int p = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'T')
        {
            t++;
        }
        else if (arr[i] == 'P')
        {
            p++;
        }
    }

    if (t > p)
    {
        return 'T';
    }
    else if (p > t)
    {
        return 'P';
    }
    else
    {
        return 'D';
    }
}

int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        int n;
        scanf("%d", &n);
        char arr[n + 1];
        scanf("%s", arr);

        char result = winner(arr, n);

        if (result == 'T')
        {
            printf("Tiger\n");
        }
        else if (result == 'P')
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}
