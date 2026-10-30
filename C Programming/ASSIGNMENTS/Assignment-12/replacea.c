#include <stdio.h>

int main() {
    char str[20];

    printf("Enter a String : ");
    scanf(" %19[^\n]", str);

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == 'a') {
            str[i] = '$';
        }
    }

    printf("Updated String : %s\n", str);
}