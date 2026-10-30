#include <stdio.h>

int main() {
    int no = 1;

    if(no % 3 == 0 && no % 5 == 0) {
        printf("Divisible by both");
    } else if(no % 3 == 0) {
        printf("Divisible by only 3 not 5");
    } else if(no % 5 == 0) {
        printf("Divisible by only 5 not 3");
    } else {
        printf("Divisible by none");
    }
}