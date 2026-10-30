#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for(int i=0; i<n; i++) {
        printf("Enter element %d : ", i+1);
        scanf(" %d", &arr[i]);
    }

    printf("Even Numbers : ");

    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {
            printf(" %d", arr[i]);
        }
    }

    
    printf("Odd Numbers : ");

    for(int i=0; i<n; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d", arr[i]);
        }
    }

    free(arr);
}