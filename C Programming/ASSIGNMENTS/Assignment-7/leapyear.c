#include <stdio.h>

void leapYear(int *year);

int main()
{
    int year = 2024;

    leapYear(&year);

    return 0;
}

void leapYear(int *year)
{
    if(*year % 400 == 0 || (*year % 4 == 0 && *year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}