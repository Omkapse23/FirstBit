#include <stdio.h>

void reverse(int arr[]);
int main() {
    int arr[5];
    reverse(arr);
}

void reverse(int arr[]) {
    
    printf("Enter array : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reverse array : ");
    for(int i=4; i>=0; i--) {
        printf("%d ", arr[i]);
    }
}