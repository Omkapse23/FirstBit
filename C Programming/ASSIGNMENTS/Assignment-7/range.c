#include <stdio.h>

void sum(int *start, int *end);

int main()
{
    int start = 1, end = 5;

    sum(&start, &end);

    return 0;
}

void sum(int *start, int *end)
{
    int total = 0;

    for(int i = *start; i <= *end; i++)
    {
        total = total + i;
    }

    printf("Sum = %d", total);
}