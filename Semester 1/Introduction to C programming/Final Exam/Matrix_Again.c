#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int mat[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int j = 0; j < M; j++)
    {
        printf("%d ", mat[N - 1][j]);
    }
    printf("\n");

    for (int i = 0; i < N; i++)
    {
        printf("%d ", mat[i][M - 1]);
    }

    return 0;
}
