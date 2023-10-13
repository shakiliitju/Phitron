#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        int temp = x[i];
        x[i] = x[n - i - 1];
        x[n - i - 1] = temp;
    }
    if (n % 2 == 1)
    {
        for (int i = 1; i < n; i += 2)
        {
            printf("%d ", x[i]);
        }
    }
    else
    {
        for (int i = 0; i < n; i += 2)
        {
            printf("%d ", x[i]);
        }
    }
    
    return 0;
}