#include <stdio.h>
int main()
{
    int a = 10, b = 3;
    int sum;
    sum = a + b;
    printf("Sum: %d\n", sum);

    int sub;
    sub = a - b;
    printf("Sub: %d\n", sub);

    int mul;
    mul = a * b;
    printf("Mul: %d\n", mul);

    int div;
    div = a / b;
    printf("Div: %d\n", div);

    int mod;
    mod = a % b;
    printf("Mod: %d\n", mod);

    return 0;
}