#include <stdio.h>

int main() {
    int n = 12;
    int sum = 0;
    int i = 1;

while(i <= n/2) {
    if(n % i == 0) {
        sum = sum + i;
    }
    i++;
    }

    if(sum == n) {
        printf("Perfect");
    } else {
        printf("Not Perfect");
    }
    }