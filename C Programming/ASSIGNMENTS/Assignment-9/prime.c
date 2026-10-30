#include <stdio.h>

void prime(int arr[]);
int main() {
    int arr[5];
    prime(arr);
}

void prime(int arr[]) {
    printf("Enter array elements : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers : ");
    for(int i=0; i<5; i++) {
        int count = 0;

        for(int j=1; j<=arr[i]; j++) {
            if(arr[i] % j == 0) {
                count++;
            }
        }

        if(count == 2) {
            printf("%d", arr[i]);
        }
    }
}