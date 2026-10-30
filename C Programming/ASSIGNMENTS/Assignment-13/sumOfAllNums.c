#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the size of an array : ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for(int i=0; i<n; i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);

    free(arr);
}