#include <stdio.h>

void divisible(int *n);

int main()
{
    int n = 15;

    divisible(&n);

    return 0;
}

void divisible(int *n)
{
    if(*n % 3 == 0 && *n % 5 == 0)
        printf("Divisible by both");
    else if(*n % 3 == 0)
        printf("Divisible by 3 but not by 5");
    else if(*n % 5 == 0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by neither");
}