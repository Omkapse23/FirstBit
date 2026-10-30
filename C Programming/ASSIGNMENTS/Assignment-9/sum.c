#include <stdio.h>

void sum(int arr[]);
int main() {
    int arr[5];
    sum(arr);
}

void sum(int arr[]) {
    printf("Enter array elements : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for(int i=0; i<5; i++) {
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);
}