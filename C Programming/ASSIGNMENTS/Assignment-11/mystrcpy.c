#include <stdio.h>

void mystrcpy(char str1[], char str2[]);
int main() {
    char str1[50];
    char str2[] = "FirstBit";

    mystrcpy(str1, str2);
    printf("Copied String : %s", str1);
}

void mystrcpy(char str1[], char str2[]) {
    int i = 0;
    while(str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
} 