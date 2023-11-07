#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < 5+((N-1)/2)+1; i++)
    {
        for (int j = 5+((N-1)/2) - i - 1; j >=0 ; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < N+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
