#include <stdio.h>

// //Type - 1 = without both
// void divisible();
// int main() {
//     divisible();
// }

// void divisible() {
//     int n = 13;

//     if(n % 3 == 0 && n % 5 == 0) {
//         printf("Divisible by both");
//     } else if(n % 3 == 0) {
//         printf("Divisible by 3 but not by 5");
//     } else if(n % 5 == 0) {
//         printf("Divisible by 5 but not by 3");
//     } else {
//         printf("Divisible by none");
//     }
// }


// //Type - 2 = with params
// void divisible(int n);
// int main() {
//     int n = 13;
//     divisible(n);
// }

// void divisible(int n) {

//     if(n % 3 == 0 && n % 5 == 0) {
//         printf("Divisible by both");
//     } else if(n % 3 == 0) {
//         printf("Divisible by 3 but not by 5");
//     } else if(n % 5 == 0) {
//         printf("Divisible by 5 but not by 3");
//     } else {
//         printf("Divisible by none");
//     }
// }


// //Type - 3 = with return type
// int divisible();
// int main() {
//     int res = divisible();

//     if(res == 1) {
//         printf("Divisible by both");
//     } else if(res == 2) {
//         printf("Divisible by 3 but not by 5");
//     } else if(res == 3) {
//         printf("Divisible by 5 but not by 3");
//     } else {
//         printf("Divisible by none");
//     }
// }

// int divisible() {
//     int n = 13;

//     if(n % 3 == 0 && n % 5 == 0) {
//         return 1;
//     } else if(n % 3 == 0) {
//         return 2;
//     } else if(n % 5 == 0) {
//         return 3;
//     } else {
//         return 4;
//     }
// }


//Type - 4 = with both
int divisible(int n);
int main() {
    int n = 13;
    int res = divisible(n);

    if(res == 1) {
        printf("Divisible by both");
    } else if(res == 2) {
        printf("Divisible by 3 but not by 5");
    } else if(res == 3) {
        printf("Divisible by 5 but not by 3");
    } else {
        printf("Divisible by none");
    }
}

int divisible(int n) {

    if(n % 3 == 0 && n % 5 == 0) {
        return 1;
    } else if(n % 3 == 0) {
        return 2;
    } else if(n % 5 == 0) {
        return 3;
    } else {
        return 4;
    }
}