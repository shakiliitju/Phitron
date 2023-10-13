#include <stdio.h>
int main()
{
    int n;
    long long int value = 0;
    scanf("%d", &n);
    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
        value = value + x[i];
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