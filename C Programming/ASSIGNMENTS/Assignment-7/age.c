#include <stdio.h>

void ageCategory(int *age);

int main()
{
    int age = 25;

    ageCategory(&age);

    return 0;
}

void ageCategory(int *age)
{
    if(*age < 12)
        printf("Child");
    else if(*age <= 19)
        printf("Teenager");
    else if(*age <= 59)
        printf("Adult");
    else
        printf("Senior");
}