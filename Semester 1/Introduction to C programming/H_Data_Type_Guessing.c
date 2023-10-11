#include <stdio.h>
int main()
{
    int n, k, a;
    scanf("%d%d%d", &n, &k, &a);
    long double value;
    value = (n * k) / 1.0*a;

    if (value >= -2147483648 && value <= 2147483647)
    {
        printf("int\n");
    }
    else if (value < -2147483648 && value > 2147483647)
    {
        printf("long long\n");
    }
    else
    {
        printf("double");
    }
    return 0;
}