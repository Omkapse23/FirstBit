#include <stdio.h>

char* mystrrchr(char str[], char ch);

int main() {
    char str[] = "FirstBit";
    char ch = 'i';

    char *result = mystrrchr(str, ch);

    if(result != NULL) {
        printf("Last Char : %s", result);
    } else {
        printf("Character not found");
    }
    return 0;
}

char* mystrrchr(char str[], char ch) {
    int i=0;

    while(str[i] != '\0') {
        i++;
    }
    i--;

    while(i >= 0) {
        if(str[i] == ch) {
            return &str[i];
        }
        i--;
    }
    return NULL;
} 