#include <stdio.h>

void result(int *marks);

int main()
{
    int marks = 80;

    result(&marks);

    return 0;
}

void result(int *marks)
{
    if(*marks > 75)
        printf("Distinction");
    else if(*marks > 65)
        printf("First Class");
    else if(*marks > 55)
        printf("Second Class");
    else if(*marks >= 40)
        printf("Pass Class");
    else
        printf("Fail");
}