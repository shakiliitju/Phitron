#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a >= 2000)
    {
        printf("Gurte jabo.\n");
    }
    else
    {
        printf("Jabo na.\n");
    }

    if (b >= 80 && b <= 100)
    {
        printf("A+");
    }
    else if (b >= 70 && b <= 79)
    {
        printf("A");
    }
    else if (b >= 70 && b <= 79)
    {
        printf("A");
    }
    else if (b >= 0 && b <= 40)
    {
        printf("Fail");
    }

    return 0;
}