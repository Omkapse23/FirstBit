#include <stdio.h>

int main() {
    int arr[5];
    int key;

    printf("Enter an array element : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter a number you want to search : ");
    scanf("%d", & key);

    for(int i=0; i<5; i++) {
        if(arr[i] == key) {
            printf("Element found at : %d", i);
        }
    }
}