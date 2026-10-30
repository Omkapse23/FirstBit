#include <stdio.h>

int main() {
    int n = 500;

    for(int num=1; num<=n; num++) {
        int temp = num;
        int sum = 0;

        while(temp>0) {
            int last = temp % 10;
            
            int fact = 1;
            for(int i=1; i<=last; i++) {
                fact = fact * i;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if(sum == num) {
            printf("%d\n", num);
        }
    }
}