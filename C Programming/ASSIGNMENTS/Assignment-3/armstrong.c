#include <stdio.h>

int main() {
    int n = 153;
    int org = n;
    int sum = 0;
    int status = 0;

    while(n>0) {
        int a = n % 10;
        
        sum = sum + a*a*a;
        n = n / 10;
    }

    if(sum == org) {
        status = 1;
    }

    if(status == 1) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }
}