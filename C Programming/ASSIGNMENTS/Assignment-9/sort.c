#include <stdio.h>

void sort(int arr[]);
int main() {
    int arr[5];
    sort(arr);
}

void sort(int arr[]) {
    printf("Enter array elements : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<5; i++) {
        for(int j=i+1; j<5; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array : ");
    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
}