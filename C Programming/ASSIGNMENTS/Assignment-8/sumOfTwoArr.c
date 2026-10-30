#include <stdio.h>

int main() {
    int arr[5];
    int brr[5];
    int crr[5];

    printf("Enter 1st array ele : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter 2nd array ele : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &brr[i]);
    }

    for(int i=0; i<5; i++) {
        crr[i] = arr[i] + brr[i];
    }

    printf("Third array : ");
    for(int i=0; i<5; i++) {
        printf("%d ", crr[i]);
    }
}