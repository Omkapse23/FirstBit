#include <stdio.h>
void price();
int main() {
    price();
}

void price() {
    float price, discount, finalPrice;
    char student;

    printf("Enter a price : ");
    scanf("%f", &price);

    printf("Are you student(y/n) : ");
    scanf(" %c", &student);

    if(student == 'y') {
        if(price > 500) {
            discount = price * 0.2;
        } else {
            discount = price * 0.1;
        }
    } else if(student == 'n') {
        if(price > 600) {
            discount = price * 0.15;
        } else {
            discount = 0;
        }
    } else {
        printf("Invalid input");
    }

    finalPrice = price - discount;

    printf("Discount = %f\n", discount);
    printf("Final Price = %f", finalPrice);
}