#include <stdio.h>

void arraySum(int arr[], int brr[], int crr[]);
int main() {
    int arr[5];
    int brr[5];
    int crr[5];

    arraySum(arr, brr, crr);
}

void arraySum(int arr[], int brr[], int crr[]) {
    printf("First array : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("second array : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &brr[i]);
    }

    printf("Third array : ");
    for(int i=0; i<5; i++) {
        crr[i] = arr[i] + brr[i];
    }

    for(int i=0; i<5; i++) {
        printf("%d ", crr[i]);
    }
}