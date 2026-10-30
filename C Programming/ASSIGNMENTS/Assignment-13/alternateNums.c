#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for(int i=0; i<n; i++) {
        printf("Enter elements %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i+=2) {
        printf(" %d ", arr[i]);
    }

    free(arr);
}