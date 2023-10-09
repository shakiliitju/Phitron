#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);

    if (n >= 97 && n <= 122)
    {
        printf("%c\n", n - 32);
    }
    else
    {
        printf("%c\n", n + 32);
    }

    return 0;
}