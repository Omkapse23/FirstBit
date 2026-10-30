#include <stdio.h>

int mystrncmp(char str1[], char str2[], int n);

int main() {
    char str1[] = "FirstBit";
    char str2[] = "FirstCode";

    int result = mystrncmp(str1, str2, 5);

    if(result == 1) {
        printf("First %d chars are same", 5);
    } else {
        printf("First %d chars are different", 5);
    }
}

int mystrncmp(char str1[], char str2[], int n) {
    int i=0;

    while(i < n) {
        if(str1[i] != str2[i]) {
            return 0;
        }
        if(str1[i] == '\0') {
            break;
        }
        i++;
    }
    return 1;
}