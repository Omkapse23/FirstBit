#include <stdio.h>

int main() {
    int arr[5];
    int max, min;

    printf("Enter an array element : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(int i=1; i<5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }

        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximun : %d \n", max);
    printf("Minimun : %d", min);
}