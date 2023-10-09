#include <stdio.h>
int main()
{

    int i, n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("-1\n");
    }
    else
    {

        for (i = 1; i <= n; i++)
        {

            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}