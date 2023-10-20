#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++)
    {

        if (a[i] % 2 == 0 && a[i] % 3 == 0)
        {
            c1++;
        }
        else if (a[i] % 2 == 0)
        {
            c1++;
        }
        else if (a[i] % 3 == 0)
        {
            c2++;
        }
    }
    printf("%d %d", c1, c2);

    return 0;
}