#include <stdio.h>
int main()
{

    int x, v;
    scanf("%d", &x);
    v = x / 1000;

    if (v % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}