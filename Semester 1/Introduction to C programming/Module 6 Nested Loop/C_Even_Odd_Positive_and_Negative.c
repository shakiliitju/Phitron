#include <stdio.h>
int main()
{

    int n, i, x;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            c1++;
        }
     else
        {
            c2++;
        }
        
        if (x > 0)
        {
            c3++;
        }
        
        if (x < 0)
        {
            c4++;
        }
    }
    printf("Even: %d\n", c1);
    printf("Odd: %d\n", c2);
    printf("Positive: %d\n", c3);
    printf("Negative: %d\n", c4);

    return 0;
}