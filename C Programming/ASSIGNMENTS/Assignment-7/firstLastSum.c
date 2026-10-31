#include <stdio.h>

void sumDigits(int *n);

int main()
{
    int n = 12345;

    sumDigits(&n);

    return 0;
}

void sumDigits(int *n)
{
    int last = *n % 10;
    int first = *n;

    while(first >= 10)
    {
        first = first / 10;
    }

    printf("Sum = %d", first + last);
}