#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        int temp = x[i];
        x[i] = x[n - 1 - i];
        x[n - 1 - i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }

    return 0;
}