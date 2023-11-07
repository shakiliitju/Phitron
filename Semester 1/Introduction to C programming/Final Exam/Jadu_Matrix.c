#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int matrix[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (N != M)
    {
        printf("NO\n");
        return 0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j || i == N - j - 1)
            {
                if (matrix[i][j] != 1)
                {
                    printf("NO\n");
                    return 0;
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }
    printf("YES\n");

    return 0;
}
