#include <stdio.h>

void palindrome(int *n);

int main()
{
    int n = 121;

    palindrome(&n);

    return 0;
}

void palindrome(int *n)
{
    int temp = *n;
    int rev = 0;

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