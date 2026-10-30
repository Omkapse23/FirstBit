#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter array size : ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for(int i=0; i<n; i++) {
        printf("Enter elements %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    int key, found = 0;

    printf("Enter a number to search : ");
    scanf("%d", &key);

    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            printf("Number found at index : %d\n", i);
            found = 1;
        }
    }

    if(found == 0) {
        printf("Number not found.");
    }

    free(arr);
}