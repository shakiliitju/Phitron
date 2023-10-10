#include <stdio.h>
int main()
{

    int i, n;
    while (1)
    {
        scanf("%d", &n);

        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}