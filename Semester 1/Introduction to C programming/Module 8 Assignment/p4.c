#include <stdio.h>

int main()
{
    int a, x, p = 0, n = 0;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &x);
        if (x > 0)
        {
            p = p + x;
        }
        else if (x < 0)
        {
            n = n + x;
        }
    }

    printf("%d %d\n", p, n);

    return 0;
}
