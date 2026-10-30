#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    char rev[20];

    printf("Enter a string : ");
    scanf(" %19[^\n]", str);

    int i = 0, j;

    int len = strlen(str);
    j = len - 1;

    while(j >= 0) {
        rev[i] = str[j];
        i++;
        j--;
    }

    rev[i] = '\0';

    if(strcmp(str, rev) == 0) {
        printf("String is palindrome.");
    } else {
        printf("String is not palindrome.");
    }
}