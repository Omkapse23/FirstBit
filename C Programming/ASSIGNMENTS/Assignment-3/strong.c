#include <stdio.h>

int main() {
    int n = 145;
    int org = n;
    int sum = 0;

    while(n > 0) {
        int last = n%10;
        int fact=1;
        int i = 1;

        while(i <= last) {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        n = n/10;
    }

    if(sum == org) {
        printf("Strong Number");
    } else {
        printf("Not strong number");
    }
}