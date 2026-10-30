#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter an array ele : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reverse array : ");
    for(int i=4; i>=0; i--) {
        printf("%d ", arr[i]);
    }
}