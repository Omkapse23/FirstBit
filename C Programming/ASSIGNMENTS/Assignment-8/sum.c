#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;

    printf("Enter an array ele : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<5; i++) {
        sum = sum + arr[i];
    }

    printf("Sum : %d", sum);
}