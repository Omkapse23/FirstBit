#include <stdio.h>

void evenOdd(int *n);
void prime(int *n);
void palindrome(int *n);
void positiveNegative(int *n);
void reverse(int *n);
void sumDigits(int *n);

int main()
{
    int choice = 5;
    int n = 12321;

    switch(choice)
    {
        case 1:
            evenOdd(&n);
            break;

        case 2:
            prime(&n);
            break;

        case 3:
            palindrome(&n);
            break;

        case 4:
            positiveNegative(&n);
            break;

        case 5:
            reverse(&n);
            break;

        case 6:
            sumDigits(&n);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}

void evenOdd(int *n)
{
    if(*n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
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

void palindrome(int *n)
{
    int temp = *n, rev = 0;

    while(temp > 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == *n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

void positiveNegative(int *n)
{
    if(*n > 0)
        printf("Positive");
    else if(*n < 0)
        printf("Negative");
    else
        printf("Zero");
}

void reverse(int *n)
{
    int temp = *n, rev = 0;

    while(temp > 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    printf("Reverse = %d", rev);
}

void sumDigits(int *n)
{
    int temp = *n, sum = 0;

    while(temp > 0)
    {
        sum = sum + temp % 10;
        temp = temp / 10;
    }

    printf("Sum of digits = %d", sum);
}