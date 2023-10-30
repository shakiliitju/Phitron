#include <stdio.h>
#include <string.h>

int is_palindrome(const char *s) {
    
    for (int i = 0; i < strlen(s) / 2; i++) 
    {
        if (s[i] != s[strlen(s)- i - 1]) 
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    char s[1001];
    scanf("%s", &s);
    if (is_palindrome(s)) 
    {
        printf("Palindrome\n");
    } else 
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
