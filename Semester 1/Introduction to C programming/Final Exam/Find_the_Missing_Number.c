#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    long long int M;
    int A, B, C;

    for (int i = 0; i < t; i++)
    {
        scanf("%lld %d %d %d", &M, &A, &B, &C);
        
        if (A == 0 || B == 0 || C == 0 || M % (A * B * C) != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", M / (A * B * C));
        }
    }

    return 0;
}
