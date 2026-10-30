#include <stdio.h>

int main() {
    int n =12345;
    int first, last;

    last = n % 10;

    while(n>=6) {
        n = n / 10;
    }
    first = n;

    int sum = first + last;
    printf("%d", sum);
}