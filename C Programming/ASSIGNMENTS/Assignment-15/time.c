#include <stdio.h>

typedef struct Time {
    int hr;
    int min;
    int sec;
} Time;

void storeTime(Time* ptr, int size);
void displayTime(Time* ptr, int size);
void addTime(Time* ptr, int size);
void convertToSec(Time* ptr, int size);

void main() {
    Time arr[2];

    storeTime(arr, 2);
    displayTime(arr, 2);
    addTime(arr, 2);
    convertToSec(arr, 2);
}

void storeTime(Time* ptr, int size) {
    printf("**********Enter Time Details**********\n");
    for(int i=0; i<size; i++) {
        printf("Enter Hours : ");
        scanf("%d", &ptr[i].hr);
        printf("Enter Minutes : ");
        scanf("%d", &ptr[i].min);
        printf("Enter Seconds : ");
        scanf("%d", &ptr[i].sec);

        printf("\n");
    }
}

void displayTime(Time* ptr, int size) {
    printf("**********Time Details**********\n");
    for(int i=0; i<size; i++) {
        printf("%d : %d : %d\n", ptr[i].hr, ptr[i].min, ptr[i].sec);
    }
}

void addTime(Time* ptr, int size) {
    int hr, min, sec;

    printf("**********Add of 2 time variables**********\n");
    sec = ptr[0].sec + ptr[1].sec;
    min = ptr[0].min + ptr[1].min;
    hr = ptr[0].hr + ptr[1].hr;

    min = min + sec / 60;
    sec = sec % 60;

    hr = hr + min / 60;
    min = min % 60;

    printf("Total Time : %d : %d : %d\n", hr, min, sec);
}

void convertToSec(Time* ptr, int size) {
    printf("**********Time to seconds**********\n");
    for(int i=0; i<size; i++) {
        int totalsec = ptr[i].hr * 3600 + ptr[i].min * 60 + ptr[i].sec;

        printf("Time %d in sec : %d", i+1, totalsec);
    }
}