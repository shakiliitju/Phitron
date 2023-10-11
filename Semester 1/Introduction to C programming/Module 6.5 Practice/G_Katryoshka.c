#include <stdio.h>
int main()
{
    int n, m, k, count1 = 0, count2 = 0;
    scanf("%d %d %d", &n, &m, &k);

    if (n < 1 && k < 1)
    {
        printf("0\n");
    }
    else if (n < m && n < k)
    {
        count1 = n;
    }
    else if (m < k)
    {
        count1 = m;
    }
    else
    {
        count1 = k;
    }

    n = n - count1;
    m = m - count1;
    k = k - count1;

    if (n >= 2 && k >= 1)
    {
        if (n / 2 <= k)
        {
            count2 = n / 2;
        }
    }

    printf("%d\n", count1 + count2);

    return 0;
}