#include <stdio.h>

// //**********Pass by value**********

// struct Date {
//     int date;
//     int month;
//     int year;
// };

// struct Date storeDate(struct Date d1);
// void displayDate(struct Date d1);

// void main() {
//     struct Date d1;
//     d1 = storeDate(d1);
//     displayDate(d1);
// }

// struct Date storeDate(struct Date d1) {
//     printf("*****Enter Dates*****\n");
//     printf("Enter Date : ");
//     scanf("%d", &d1.date);
//     printf("Enter month : ");
//     scanf("%d", &d1.month);
//     printf("Enter Year : ");
//     scanf("%d", &d1.year);

//     printf("\n");

//     return d1;
// }

// void displayDate(struct Date d1) {
//     printf("*****Dates are*****\n");
//     printf("%d / %d / %d", d1.date, d1.month, d1.year);
// }







//**********Pass by address(Array)**********

typedef struct Date {
    int date;
    int month;
    int year;
} Date;

void storeDate(Date* ptr, int size);
void displayDate(Date* ptr, int size);

int main() {
    Date arr[3];
    storeDate(arr, 3);
    displayDate(arr, 3);
}

void storeDate(Date* ptr, int size) {
    printf("**********Enter Date**********\n");
    for(int i=0; i<size; i++) {
        printf("Enter Date : ");
        scanf("%d", &ptr[i].date);
        printf("Enter Month : ");
        scanf("%d", &ptr[i].month);
        printf("Enter Year : ");
        scanf("%d", &ptr[i].year);

        printf("\n");
    } 
}

void displayDate(Date* ptr, int size) {
    printf("**********Date**********\n");
    for(int i=0; i<size; i++) {
        printf("%d / %d / %d\n", ptr[i].date, ptr[i].month, ptr[i].year);
    }
}