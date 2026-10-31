#include <stdio.h>

void operation(int *a, int *b, char *op);

int main()
{
    int a = 20, b = 10;
    char op = '+';

    operation(&a, &b, &op);

    return 0;
}

void operation(int *a, int *b, char *op)
{
    if(*op == '+')
        printf("Addition = %d", *a + *b);
    else if(*op == '-')
        printf("Subtraction = %d", *a - *b);
    else if(*op == '*')
        printf("Multiplication = %d", *a * *b);
    else if(*op == '/')
        printf("Division = %d", *a / *b);
    else if(*op == '%')
        printf("Modulus = %d", *a % *b);
    else
        printf("Invalid Operator");
}