#include <stdio.h>

int main() {
    char str[20];

    printf("Enter a string : ");
    scanf(" %19[^\n]", str);

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = '$';
        }
    }

    printf("Updated String : %s", str);
}