#include <stdio.h>
int main()
{

    int a, b, c, d;
    int i = 10, j = 10, k = 10, l = 10;
    a = i++;
    b = ++j;
    c = k--;
    d = --l;

    printf("a=%d, i=%d\n", a, i);
    printf("b=%d, i=%d\n", b, j);
    printf("c=%d, i=%d\n", c, k);
    printf("d=%d, i=%d\n", d, l);

    return 0;
}