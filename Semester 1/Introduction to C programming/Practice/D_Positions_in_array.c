#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        if (x[i] <= 10)
        {
            printf("A[%d] = %d\n", i, x[i]);
        }
    }
    
    return 0;
}