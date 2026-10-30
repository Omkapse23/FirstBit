#include <stdio.h>

int main() {
    char str[20];
    int n, i;

    printf("Enter a string : ");
    scanf(" %19[^\n]", str);

    printf("Enter a index you want to remove : ");
    scanf("%d", &n);

    if(n < 0 || str[n] == '\0') {
        printf("Invalid index.\n");
    }

    for(int i=n; str[i] != '\0'; i++) {
        str[i] = str[i+1];
    }

    printf("Updated String : %s", str);
}