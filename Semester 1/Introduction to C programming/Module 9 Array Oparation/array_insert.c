#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int poss, val;
    scanf("%d %d", &poss, &val);

    for (int i = n; i >= poss; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[poss]=val;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}