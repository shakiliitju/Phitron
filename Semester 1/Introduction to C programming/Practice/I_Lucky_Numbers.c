#include <stdio.h>
int main()
{
    int n, x, y;
    scanf("%d", &n);
    x = n / 10;
    y = n % 10;
    if (x == 0 || y == 0)
    {
        printf("YES\n");
    }
    else if (x % y == 0)
    {
        printf("YES\n");
    }
    else if (y % x == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}