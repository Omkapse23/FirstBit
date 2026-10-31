#include <stdio.h>

void armstrong(int *n);

int main()
{
    int n = 153;

    armstrong(&n);

    return 0;
}

void armstrong(int *n)
{
    int temp = *n, sum = 0;

    while(temp > 0)
    {
        int rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }

    if(sum == *n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}