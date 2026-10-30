#include <stdio.h>

int main() {
    int start = 1;
    int end = 6;
    int sum = 0;

    while(start <= end) {
        sum = sum + start;
        start++;
    }

    printf("%d", sum);
}