#include <stdio.h>

void evenOdd(int *n);

int main()
{
    int n = 20;

    evenOdd(&n);

    return 0;
}

void evenOdd(int *n)
{
    if(*n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}