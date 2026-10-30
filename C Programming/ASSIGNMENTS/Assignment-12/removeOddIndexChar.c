#include <stdio.h>

int main() {
    char str[20];
    int i, j=0;

    printf("Enter a string : ");
    scanf(" %19[^\n]", str);

    for(int i=0; str[i] != '\0'; i++) {
        if(i % 2 == 0) {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("Updated String : %s", str);
}