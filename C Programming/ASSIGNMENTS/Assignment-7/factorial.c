#include <stdio.h>

void factorial(int *n);

int main()
{
    int n = 5;

    factorial(&n);

    return 0;
}

void factorial(int *n)
{
    int fact = 1;

    for(int i = 1; i <= *n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
}