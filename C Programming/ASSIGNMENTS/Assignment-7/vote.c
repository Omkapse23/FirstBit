#include <stdio.h>

void voting(int *age);

int main()
{
    int age = 20;

    voting(&age);

    return 0;
}

void voting(int *age)
{
    if(*age >= 18)
        printf("Eligible to Vote");
    else
        printf("Not Eligible to Vote");
}