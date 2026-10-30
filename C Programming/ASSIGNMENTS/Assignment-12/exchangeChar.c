#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    char temp;
    int len;

    printf("Enter a string : ");
    scanf(" %19[^\n]", str);

    len = strlen(str);

    if(len > 1) {
        temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;
    }

    printf("New String : %s", str);
}