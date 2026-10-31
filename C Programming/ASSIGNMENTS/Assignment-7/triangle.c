#include <stdio.h>

void triangle(int *a, int *b, int *c);

int main()
{
    int a = 5, b = 5, c = 5;

    triangle(&a, &b, &c);

    return 0;
}

void triangle(int *a, int *b, int *c)
{
    if(*a == *b && *b == *c)
        printf("Equilateral Triangle");
    else if(*a == *b || *b == *c || *a == *c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");
}