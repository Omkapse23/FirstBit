#include <stdio.h>

int main() {
    char ch = 'a';

    if(ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    } else {
        printf("Lowercase");
    }
}