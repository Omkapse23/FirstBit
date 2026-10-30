#include <stdio.h>

int main() {
    int n = 20;

    for(int num=2; num<=n; num++) {
        int status = 1;

        for(int i=2; i<num; i++) {
            if(num % i == 0) {
                status = 0;
                break;
            }
        }

        if(status == 1) {
            printf("%d\n", num);
        }
    }
    
}