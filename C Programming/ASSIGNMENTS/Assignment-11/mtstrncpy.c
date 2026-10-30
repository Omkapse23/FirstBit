#include <stdio.h>

void mystrncpy(char str1[], char str2[], int n);
int main() {
    char str1[50];
    char str2[] = "FirstBit";

    mystrncpy(str1, str2, 5);
    printf("Copied String : %s", str1);
}

void mystrncpy(char str1[], char str2[], int n) {
    int i;
    for(i=0; i<n; i++) {
        str1[i] = str2[i];
    }

    str1[i] = '\0';
}

