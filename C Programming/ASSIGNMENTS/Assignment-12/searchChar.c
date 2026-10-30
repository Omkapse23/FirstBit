#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int found = 0;

    printf("Enter a String : ");
    scanf(" %99[^\n]", str);

    printf("Enter a character to search : ");
    scanf(" %c", &ch);

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            found = 1;
            break;
        }
    }

    if(found == 1) {
        printf("Character '%c' found in the string\n", ch);
    } else {
        printf("Character '%c' found in the string\n", ch);
    }
}