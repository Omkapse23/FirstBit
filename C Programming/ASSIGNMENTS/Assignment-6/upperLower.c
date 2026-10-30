#include <stdio.h>

// //Type - 1 = without both
// void upperLower();
// int main() {
//     upperLower();
// }

// void upperLower() {
//     char ch = 'D';
    // if(ch>='a' && ch<='z') {
    //     printf("lowercase");
    // } else if(ch>='A' && ch<='Z') {
    //     printf("Uppercase");
    // } else {
    //     printf("Not a char");
    // }
// }


//Type - 2 = with params
// void upperLower(char ch);
// int main() {
//     char ch = 'V';
//     upperLower(ch);
// }

// void upperLower(char ch) {
//     if(ch>='a' && ch<='z') {
//         printf("lowercase");
//     } else if(ch>='A' && ch<='Z') {
//         printf("Uppercase");
//     } else {
//         printf("Not a char");
//     }
// }


// //Type - 3 = with return type
// char upperLower();
// int main() {
//     int res = upperLower();
//     if(res == 1) {
//         printf("Lower");
//     } else {
//         printf("Upper");
//     }
// }

// char upperLower() {
//     char ch = 'G';
    // if(ch>='a' && ch<='z') {
    //     return 1;
    // } else if(ch>='A' && ch<='Z') {
    //     return 0;
    // } else {
    //     printf("Not a char");
    // }
// }


//Type - 4 = with both
char upperLower(char ch);
int main() {
    char ch = 'A';
    int res = upperLower(ch);

    if(res == 1) {
        printf("Lower");
    } else {
        printf("Upper");
    }
}

char upperLower(char ch) {
    if(ch>='a' && ch<='z') {
        return 1;
    } else if(ch>='A' && ch<='Z') {
        return 0;
    } else {
        printf("Not a char");
    }
}