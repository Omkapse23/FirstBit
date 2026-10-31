#include <stdio.h>

void armstrong(int *n);

int main()
{
    int n = 500;

    armstrong(&n);

    return 0;
}

void armstrong(int *n)
{
    for(int num = 1; num <= *n; num++)
    {
        int temp = num, sum = 0;

        while(temp > 0)
        {
            int rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }

        if(sum == num)
            printf("%d ", num);
    }
}