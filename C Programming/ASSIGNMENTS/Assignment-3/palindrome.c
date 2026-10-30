#include <stdio.h>

int main() {
    int n =123;
    int org = n;
    int rev = 0;

    while(n>0) {
        int last = n % 10;
        rev = rev * 10 + last;
        n = n / 10;
    }

    if(org == rev) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
}