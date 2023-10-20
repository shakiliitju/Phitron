#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int x;
        scanf("%d", &x);
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                c++;
            }
        }
        if (c > 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}