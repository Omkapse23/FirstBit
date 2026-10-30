#include <stdio.h>

// // Type - 1 = no arg, no return type
// void evenOdd();
// int main() {
//     evenOdd();
// }

// void evenOdd() {
//     int n = 4;
//     if(n % 2 == 0) {
//         printf("Even");
//     } else {
//         printf("Odd");
//     }
// }


// //Type - 2 = with argument, no return type
// void evenOdd(int n);
// int main() {
//     int n = 33;
//     evenOdd(n);
// }

// void evenOdd(int n) {
//     if(n % 2 == 0) {
//         printf("Even");
//     } else {
//         printf("Odd");
//     }
// }


//Type - 3 = without argument, with return type
// int evenOdd();
// int main() {
//     int res = evenOdd();
//     if(res == 1) {
//         printf("Even");
//     } else {
//         printf("Odd");
//     }
// }

// int evenOdd() {
//     int n = 12;
//     if(n % 2 == 0) {
//         return 1;
//     } else {
//         return 0;
//     }
// }


//Type - 4 = with argument, with return type
int evenOdd(int n);
int main() {
    int n = 51;

    int res = evenOdd(n);
    if(res == 1) {
        printf("Even");
    } else {
        printf("Odd");
    }
}

int evenOdd(int n) {
    if(n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}