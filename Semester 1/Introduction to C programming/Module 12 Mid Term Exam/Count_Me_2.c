#include <stdio.h>
#include<string.h>
int main()
{
    char arr[100001];
    scanf("%s", arr);
 
    int c = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] != 'a' && arr[i] != 'e' && arr[i] !='i' && arr[i] !='o' && arr[i] !='u')
        {
           c++;
        }
    }
    printf("%d", c);

    return 0;
}