#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x;
    long long int value = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        value = value + x;
    }
    
    if (value < 0)
    {
        printf("%lld\n", value*-1);
    }
    else
    {
        printf("%lld\n", value);
    }

    return 0;
}