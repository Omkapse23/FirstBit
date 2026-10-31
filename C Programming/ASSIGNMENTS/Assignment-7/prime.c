#include <stdio.h>

void prime(int *n);

int main()
{
    int n = 7;

    prime(&n);

    return 0;
}

void prime(int *n)
{
    int flag = 0;

    if(*n <= 1)
        flag = 1;

    for(int i = 2; i < *n; i++)
    {
        if(*n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Prime");
    else
        printf("Not Prime");
}