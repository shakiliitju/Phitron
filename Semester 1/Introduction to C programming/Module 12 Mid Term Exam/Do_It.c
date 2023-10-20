#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= k; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}