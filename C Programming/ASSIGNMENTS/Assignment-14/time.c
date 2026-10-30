#include <stdio.h>

////**********pass by value***********

// struct Time {
//     int hr;
//     int min;
//     int sec;
// };

// struct Time storeTime(struct Time t1);
// void displayTime(struct Time t1);

// void main() {
//     struct Time t1;
//     t1 = storeTime(t1);
//     displayTime(t1);
// }

// struct Time storeTime(struct Time t1) {
//     printf("*****Enter Time*****\n");
//     printf("Enter Hour : ");
//     scanf("%d", &t1.hr);
//     printf("Enter Minute : ");
//     scanf("%d", &t1.min);
//     printf("Enter Seconds : ");
//     scanf("%d", &t1.sec);

//     printf("\n");

//     return t1;
// }

// void displayTime(struct Time t1) {
//     printf("*****Time Details*****\n");
//     printf("%d : %d : %d", t1.hr, t1.min, t1.sec);
// }








//*********pass by address(array)*********

typedef struct Time {
    int hr;
    int min;
    int sec;
} Time;

void storeStudent(Time* ptr, int size);
void displayStudent(Time* ptr, int size);

void main() {
    Time arr[3];

    storeStudent(arr, 3);
    displayStudent(arr, 3);
}

void storeStudent(Time* ptr, int size) {
    printf("**********Enter Time**********\n");
    for(int i=0; i<size; i++) {
        printf("Enter Hours : ");
        scanf("%d", ptr[i].hr);
        printf("Enter Minuts : ");
        scanf("%d", ptr[i].min);
        printf("Enter Seconds : ");
        scanf("%d", ptr[i].sec);

        printf("\n");
    }
}

void displayStudent(Time* ptr, int size) {
    printf("**********Time**********\n");
    for(int i=0; i<size; i++) {
        printf("%d : %d : %d", ptr[i].hr, ptr[i].min, ptr[i].sec);

        printf("\n");
    }
}