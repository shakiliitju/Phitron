#include <stdio.h>
int main()
{

    char x;
    scanf("%c", &x);

    if (x <= 64 && x >= 48)
    {
        printf("IS DIGIT\n");
    }
    else if (x <= 96 && x >= 65)
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if (x <= 122 && x >= 97)
    {
        printf("ALPHA\nIS SMALL\n");
    }

    return 0;
}