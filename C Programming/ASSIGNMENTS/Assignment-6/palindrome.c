#include <stdio.h>

// //Type - 1 = no argument, no return type
// void isPalindrome();
// int main() {
//     isPalindrome();
// }

// void isPalindrome() {
//     int n = 1211;
//     int r1, r2, r3;
//     int rev;
    
//     r1 = n % 10;
//     r2 = (n / 10) % 10;
//     r3 = n / 100;

//     rev = r1 * 100 + r2 * 10 + r3;

//     if(n == rev) {
//         printf("Palindrome");
//     } else {
//         printf("Not Palindrome");
//     }
// }


// //Type - 2 = with argument, no return type
// void isPalindrome(int n);
// int main() {
//     int n = 122;

//     isPalindrome(n);
// }

// void isPalindrome(int n) {
//     int r1, r2, r3;
//     int rev;
//     r1 = n % 10;
//     r2 = (n / 10) % 10;
//     r3 = n / 100;

//     rev = r1 * 100 + r2 * 10 + r3;

//     if(n == rev) {
//         printf("Palindrome");
//     } else {
//         printf("Not Palindrome");
//     }
// }


// //Type - 3 = without argument, with return type
// int isPalindrome();
// int main() {
//     int res = isPalindrome();

//     if(res == 1) {
//         printf("Palindrome");
//     } else {
//         printf("Not Palindrome");
//     }
// }

// int isPalindrome() {
//     int n = 122;
//     int r1, r2, r3;
//     int rev;

//     r1 = n % 10;
//     r2 = (n / 10) % 10;
//     r3 = n / 100;

//     rev = r1 * 100 + r2 * 10 + r3;

//     if(n == rev) {
//         return 1;
//     } else {
//         return 0;
//     }
// }


//Type - 4 = with arguments, with return types
int isPalindrome(int n);
int main() {
    int n = 100;

    int res = isPalindrome(n);

    if(res == 1) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
}

int isPalindrome(int n) {
    int r1, r2, r3;
    int rev;

    r1 = n % 10;
    r2 = (n / 10) % 10;
    r3 = n /100;

    rev = r1 * 100 + r2 * 10 + r3;

    if(n == rev) {
        return 1;
    } else {
        return 0;
    }
}