#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    b=a-1000;
    scanf("%d",&a);
    
    if(a>1000)
    {
        printf("I will buy Punjabi\n");
    }
    else if(b>500)
    {
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
    }
    else 
    {
        printf("Bad luck!\n");
    }
    return 0;
}
