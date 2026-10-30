#include <stdio.h>

// //**********pass by value**********

// struct Distance {
//     int feet;
//     int inch;
// };

// struct Distance storeDis(struct Distance d1);
// void displayDis(struct Distance d1);

// int main(){
//     struct Distance d1;
//     d1 = storeDis(d1);
//     displayDis(d1);
// }

// struct Distance storeDis(struct Distance d1) {
//     printf("*****Enter Distance*****\n");
//     printf("Enter Feet : ");
//     scanf("%d", &d1.feet);
//     printf("Enter Inch : ");
//     scanf("%d", &d1.inch);

//     printf("\n");

//     return d1;
// }

// void displayDis(struct Distance d1) {
//     printf("*****Distance*****\n");
//     printf("%d.%d", d1.feet, d1.inch);
// }







//**********pass by address(array)**********

typedef struct Distance {
    int feet;
    int inch;
} Distance;

void storeDistance(Distance* ptr, int size);
void displayDistance(Distance* ptr, int size);

void main() {
    Distance arr[2];
    storeDistance(arr, 2);
    displayDistance(arr, 2);
}

void storeDistance(Distance* ptr, int size) {
    printf("**********Enter feet and inch**********\n");
    for(int i=0; i<size; i++) {
        printf("Enter Feet : ");
        scanf("%d", ptr[i].feet);
        printf("Enter Inch : ");
        scanf("%d", ptr[i].inch);

        printf("\n");
    }
}

void displayDistance(Distance* ptr, int size) {
    printf("**********Distance**********\n");
    for(int i=0; i<size; i++) {
        printf("%d.%d\n", ptr[i].feet, ptr[i].inch);
    }
}