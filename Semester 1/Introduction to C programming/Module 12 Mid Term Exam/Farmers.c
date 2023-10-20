#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int m1, m2, d, fd;
        scanf("%d%d%d", &m1, &m2, &d);
        fd = (d * m1) / (m1 + m2);
        printf("%d\n", d - fd);
    }

    return 0;
}