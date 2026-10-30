#include <stdio.h>

int main() {
    int n = 10000;

    for(int num=1; num<=n; num++) {
        int sum = 0;

        for(int i=1; i<=num/2; i++) {
            if(num % i == 0) {
                sum = sum + i;
            }
        }

        if(sum == num) {
            printf("%d\n", num);
        }
    }
}