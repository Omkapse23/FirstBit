#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 11;

    if(a>b) {
        if(a>c) {
            printf("%d", a);
        } else {
            printf("%d", c);
        }
    } else {
        if(b>c) {
            printf("%d", b);
        } else {
            printf("%d", c);
        }
    }
}