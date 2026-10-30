#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    if (n1 <= 0 || n2 <= 0)
        return 1;

    int *arr = malloc(n1 * sizeof(int));
    int *brr = malloc(n2 * sizeof(int));
    int *crr = malloc((n1 + n2) * sizeof(int));

    printf("Enter first array elements:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr[i]);

    printf("Enter second array elements:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &brr[i]);

    for (int i = 0; i < n1; i++)
        crr[i] = arr[i];

    for (int i = 0; i < n2; i++)
        crr[n1 + i] = brr[i];

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", crr[i]);

    free(arr);
    free(brr);
    free(crr);
}