#include <stdio.h>

int main() {
    char str1[20], str2[20];
    int i=0, j=0;

    printf("Enter a first string : ");
    scanf(" %19[^\n]", str1);

    printf("Enter a second string : ");
    scanf(" %19[^\n]", str2);

    while(str1[i] != '\0') {
        i++;
    }

    while(str2[j] != '\0') {
        j++;
    }

    if(i > j) {
        printf("Larger String : %s\n", str1);
    } else if(j > i) {
        printf("Larger String : %s\n", str2);
    } else {
        printf("Both string have equal length.");
    }
}