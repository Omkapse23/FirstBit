#include <stdio.h>

int main() {
    char str[20];
    int i = 0, count = 0;

    printf("Enter String : ");
    scanf(" %19[^\n]", str);
    
    while(str[i] != '\0') {
        if(str[i] != ' ' &&(i == 0 || str[i-1] == ' ')) {
            count++;
        }
        i++;
    }

    printf("Number of words : %d\n", count);
}