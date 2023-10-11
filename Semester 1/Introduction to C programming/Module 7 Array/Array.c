#include <stdio.h>
int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int j = 0; j < 10; j++)
    {

        printf("%d\n", array[j]);
    }
    
    return 0;
}