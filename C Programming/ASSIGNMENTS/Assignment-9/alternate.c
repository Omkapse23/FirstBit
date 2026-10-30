#include <stdio.h>

void alternate(int arr[]);
int main() {
    int arr[5];
    alternate(arr);
}

void alternate(int arr[]) {
    printf("Enter array elements : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<5; i=i+2) {
        printf("%d ", arr[i]);
    }
}  