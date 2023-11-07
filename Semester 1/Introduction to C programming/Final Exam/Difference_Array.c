#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);
        int A[N], B[N], C[N];

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        for (int i = 0; i < N; i++)
        {
            B[i] = A[i];
        }
        
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (B[i] > B[j])
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        for (int i = 0; i < N; i++)
        {
            C[i] = abs(A[i] - B[i]);
        }

        for (int i = 0; i < N; i++)
        {
            printf("%d", C[i]);
            if (i < N - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
