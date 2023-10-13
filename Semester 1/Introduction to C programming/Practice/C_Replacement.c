#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        if (x[i] < 0)
        {
            x[i] = 2;
        }
        else if (x[i] > 0)
        {
            x[i] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }

    return 0;
}