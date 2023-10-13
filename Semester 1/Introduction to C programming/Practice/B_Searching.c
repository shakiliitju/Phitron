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

    int a, count = -1;
    scanf("%d", &a);

    for (i = 0; i < n; i++)
    {
        if (x[i] == a)
        {
            count=i;
            break;
        }
    }
    printf("%d\n", count);
    
    return 0;
}