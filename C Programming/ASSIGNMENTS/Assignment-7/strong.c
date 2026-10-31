#include <stdio.h>

void strong(int *n);

int main()
{
    int n = 145;

    strong(&n);

    return 0;
}

void strong(int *n)
{
    int temp = *n, sum = 0;

    while(temp > 0)
    {
        int rem = temp % 10;
        int fact = 1;

        for(int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == *n)
        printf("Strong");
    else
        printf("Not Strong");
}