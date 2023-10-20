#include <stdio.h>
#include <string.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        char arr[10001];
        scanf("%s", arr);

        int c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < strlen(arr); i++)
        {
            if (arr[i] >= 'A' && arr[i] <= 'Z')
            {
                c1++;
            }
            else if (arr[i] >= 'a' && arr[i] <= 'z')
            {
                c2++;
            }
            else if (arr[i] >= '0' && arr[i] <= '9')
            {
                c3++;
            }
        }
        printf("%d %d %d\n", c1, c2, c3);
    }

    return 0;
}