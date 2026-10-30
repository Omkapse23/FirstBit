#include <stdio.h>

void search(int arr[]);
int main() {
    int arr[5];
    search(arr);
    
}

void search(int arr[]) {
    int key;

    printf("Enter array elements : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search : ");
    scanf("%d", &key);

    for(int i=0; i<5; i++) {
        if(arr[i] == key) {
            printf("Key found at index : %d", i);
        }
    }
}