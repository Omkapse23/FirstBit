#include <stdio.h>

int main() {
    int no = 112;
    int r1, r2, r3;
    int rev;

    r1 = no % 10;
    r2 = (no / 10) % 10;
    r3 = no / 100;

    rev = r1 * 100 + r2 * 10 + r3;

    if(no == rev) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

}