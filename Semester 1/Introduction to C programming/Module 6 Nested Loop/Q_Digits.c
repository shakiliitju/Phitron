#include <stdio.h>
int main()
{
    int n, i, j, x, y;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        do
        {
            printf("%d ", x % 10);
            x = x / 10;
        } while (x != 0);

        printf("\n");
    }

    return 0;
}