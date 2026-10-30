#include <stdio.h>

void evenOdd(int arr[]);
int main() {
    int arr[5];
    evenOdd(arr);
}

void evenOdd(int arr[]) {
    printf("Enter array elements : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers : ");
    for(int i=0; i<5; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    printf("Odd numbers : ");
    for(int i=0; i<5; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
}