#include <stdio.h>
int main()
{

    int a, n, i, max = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (max < a)
        {
            max = a;
        }
    }
    printf("%d\n", max);
    return 0;
}