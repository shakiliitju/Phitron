#include <stdio.h>
#include <limits.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int x[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int p, value = INT_MAX;
    for (i = 0; i < n; i++)
    {
        if (x[i] < value)
        {
            value = x[i];
            p = i + 1;
        }
    }

    printf("%d %d\n", value, p);
    return 0;
}