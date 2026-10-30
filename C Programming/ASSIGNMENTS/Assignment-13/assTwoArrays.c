#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    int *brr = malloc(n * sizeof(int));
    int *crr = malloc(n * sizeof(int));

    for(int i=0; i<n; i++) {
        printf("Enter first array elements %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for(int i=0; i<n; i++) {
        printf("Enter second array elements %d : ", i+1);
        scanf("%d", &brr[i]);
    }
    printf("\n");

    for(int i=0; i<n; i++) {
        crr[i] = arr[i] + brr[i];
    }

    printf("Final Array : ");
    for(int i=0; i<n; i++) {
        printf(" %d", crr[i]);
    }

    free(arr);
    free(brr);
    free(crr);
}