#include <stdio.h>

int main() {
    int a = 10, b = 10, c = 20;

    if(a == b && b == c && c==a) {
        printf("Equilateral");
    } else if(a == b || b == c) {
        printf("Isosceles");
    } else {
        printf("Scalen");
    }
}