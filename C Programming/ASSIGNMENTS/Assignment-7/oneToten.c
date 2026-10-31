#include <stdio.h>

void numbers(int *start, int *end);

int main()
{
    int start = 1, end = 10;

    numbers(&start, &end);

    return 0;
}

void numbers(int *start, int *end)
{
    for(int i = *start; i <= *end; i++)
    {
        printf("%d ", i);
    }
}