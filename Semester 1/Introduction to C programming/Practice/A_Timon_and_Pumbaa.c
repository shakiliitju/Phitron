#include <stdio.h>
int main()
{

    int a, b, value;
    scanf("%d %d", &a, &b);

    value = a - b;
    if (value <= 0)
    {
        printf("0\n");
    }
    else
    {
    printf("%d", value);
    }
    
    return 0;
}