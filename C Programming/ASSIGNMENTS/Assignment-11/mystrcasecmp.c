#include <stdio.h>

int mystrcasecmp(char str1[], char str2[]);

int main() {
    char str1[] = "FirstBit";
    char str2[] = "firstbit";

    int result = mystrcasecmp(str1, str2);

    if(result == 1) {
        printf("String are same");
    } else {
        printf("String are different");
    }

    return 0;
}

int mystrcasecmp(char str1[], char str2[]) {
    int i=0;

    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = str1[i] + 32;
        }

        if(str2[i] >= 'A' && str2[i] <= 'Z') {
            str2[i] = str2[i] + 32;
        }

        if(str1[i] != str2[i]) {
            return 0;
        }

        i++;
    }

    return 1;
}