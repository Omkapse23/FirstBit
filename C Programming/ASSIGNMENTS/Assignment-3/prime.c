#include <stdio.h>

int main() {
    int n = 6;
    int i = 2;
    int status = 0;

    while(i < n) {
        if(n % i == 0) {
            status = 1;
            break;
        }
        i++;
    }
    if(status == 1) {
        printf("Not Prime");
    } else {
        printf("Prime");
    }
}