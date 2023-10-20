#include <stdio.h>
#include <string.h>
int main()
{

    char s[10001];
    scanf("%s", s);
    int c[26];
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        c[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (c[i] != 0)
        {
            printf("%c - %d\n", i + 'a', c[i]);
        }
    }

    return 0;
}