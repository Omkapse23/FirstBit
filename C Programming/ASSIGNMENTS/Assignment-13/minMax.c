#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter array size : ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid array size.\n");
    }

    int *arr = malloc(n * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed.\n");
    }

    for(int i=0; i<n; i++) {
        printf("Enter elements %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for(int i=0; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }

        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Min : %d\n", min);
    printf("Max : %d", max);

    free(arr);
}