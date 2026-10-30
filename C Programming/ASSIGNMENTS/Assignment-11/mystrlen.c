#include <stdio.h>

int mystrlen(char str[]);
int main() {
    char str[] = "FirstBit";
    int length = mystrlen(str);
    printf("Length : %d", length);
}

int mystrlen(char str[]) {
    int i=0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}