#include <stdio.h>

void perfect(int *n);

int main()
{
    int n = 500;

    perfect(&n);

    return 0;
}

void perfect(int *n)
{
    for(int num = 1; num <= *n; num++)
    {
        int sum = 0;

        for(int i = 1; i < num; i++)
        {
            if(num % i == 0)
                sum = sum + i;
        }

        if(sum == num)
            printf("%d ", num);
    }
}