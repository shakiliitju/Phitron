#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("Hello.\n");
    }
    printf("\n");
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    printf("\n");
    for (i = 2; i <= 20; i = i + 2)
    {
        printf("%d\n", i);
    }
    printf("\n");
    for (i = 1; i <= 20; i = i + 2)
    {
        printf("%d\n", i);
    }
    printf("\n");
    for (i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    printf("\n");
    int sum = 0;
    for (i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }
    printf("1...5 sum=%d\n", sum);

    printf("\n");
    int j;
    for (j = 1; j <= 10; j++)
    {
        if (j % 2 == 0)
        {
            printf("%d - Even\n", j);
        }
        else
        {
            printf("%d - Odd\n", j);
        }
    }

    printf("\n");
    int k;
    for (k = 1; k <= 10; k++)
    {
        printf("%d\n",k);
       
        if(k==3)
        {
            continue;
        }

         if (k == 5)
        {
            break;
        }
    }
    return 0;
}