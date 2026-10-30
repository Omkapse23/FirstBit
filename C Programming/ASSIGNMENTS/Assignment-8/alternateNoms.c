#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter an elements : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<5; i = i+2) {
        printf("%d ", arr[i]);
    }
}