#include <stdio.h>
int main()
{

    char x;
    scanf("%c", &x);
    if (x == 122)
    {
        printf("%c\n", x - 25);
    }

    for (int i = 97; i <= 121; i++)
    {

        if (x == i)
        {
            printf("%c\n", x + 1);
        }
    }
    return 0;
}