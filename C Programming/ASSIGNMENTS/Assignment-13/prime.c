#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter a size of array : ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for(int i=0; i<n; i++) {
        printf("Enter elements %d : ", i+1);
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

    free(arr);
}