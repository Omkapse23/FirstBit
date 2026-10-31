#include <stdio.h>

void discount(int *price, char *student);

int main()
{
    int price = 1000;
    char student = 'y';

    discount(&price, &student);

    return 0;
}

void discount(int *price, char *student)
{
    if(*student == 'y' || *student == 'Y')
    {
        if(*price > 500)
            printf("Discount = %.2f", *price * 0.10);
        else
            printf("No Discount");
    }
    else
    {
        if(*price > 600)
            printf("Discount = %.2f", *price * 0.15);
        else
            printf("No Discount");
    }
}