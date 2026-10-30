#include <stdio.h>

int main() {
    int n = 5000;

    for(int num=1; num<=n; num++) {
        int temp = num;
        int sum = 0;
        int a;

        while(temp > 0) {
            a = temp % 10;
            sum = sum + (a*a*a);
            temp = temp / 10;
        }

        if(sum == num) {
            printf("%d\n", num);
        }
    }
}