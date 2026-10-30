#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for(int i=0; i<n; i++) {
        printf("Enter array elements %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array in ascending order : ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
}