#include <stdio.h>

void minMax(int arr[]);
int main() {
    int arr[5];

    minMax(arr);
}

void minMax(int arr[]) {

    printf("Enter array elements : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for(int i=0; i<5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }

        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Max : %d, Min : %d\n", max, min);
}