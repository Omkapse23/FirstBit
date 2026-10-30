#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter an array elements : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<5; i++) {
        if(arr[i] % 2 == 0) {
            printf("Even : %d\n", arr[i]);
        }

        if(arr[i] % 2 != 0) {
            printf("odd : %d\n", arr[i]);
        }
    }
}