#include <stdio.h>

void greatest(int *a, int *b, int *c);

int main()
{
    int a = 10, b = 20, c = 30;

    greatest(&a, &b, &c);

    return 0;
}

void greatest(int *a, int *b, int *c)
{
    if(*a > *b && *a > *c)
        printf("%d is Greatest", *a);
    else if(*b > *a && *b > *c)
        printf("%d is Greatest", *b);
    else
        printf("%d is Greatest", *c);
}