#include <stdio.h>

void prime(int *n);

int main()
{
    int n = 50;

    prime(&n);

    return 0;
}

void prime(int *n)
{
    for(int num = 2; num <= *n; num++)
    {
        int flag = 0;

        for(int i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%d ", num);
    }
}