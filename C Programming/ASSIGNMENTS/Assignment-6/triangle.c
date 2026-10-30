#include <stdio.h>

// //Type - 1 = without both
// void triangle();
// int main() {
//     triangle();
// }

// void triangle() {
//     int a = 10;
//     int b = 20;
//     int c = 30;

//     if(a == b && b == c && a == c) {
//         printf("Equilateral");
//     } else if(a==b || b==c) {
//         printf("Isosceles");
//     } else {
//         printf("Scalene");
//     }
// }


// //Type - 2 = with params
// void triangle(int a, int b, int c);
// int main() {
//     int a = 10;
//     int b = 20;
//     int c = 30;
//     triangle(a, b, c);
// }

// void triangle(int a, int b, int c) {

//     if(a == b && b == c && a == c) {
//         printf("Equilateral");
//     } else if(a==b || b==c) {
//         printf("Isosceles");
//     } else {
//         printf("Scalene");
//     }
// }


// //Type - 3 = with return type
// int triangle();
// int main() {
//     int res = triangle();
//     if(res == 1) {
//         printf("Equilateral");
//     } else if(res == 2) {
//         printf("Isosceles");
//     } else {
//         printf("Scalen");
//     }
// }

// int triangle() {
//     int a = 10;
//     int b = 20;
//     int c = 30;

//     if(a == b && b == c && a == c) {
//         return 1;
//     } else if(a==b || b==c) {
//         return 2;
//     } else {
//         return 3;
//     }
// }


//Type - 4 = with params & return type
int triangle(int a, int b, int c);
int main() {
    int a = 10;
    int b = 10;
    int c = 10;

    int res = triangle(a, b, c);
    if(res == 1) {
        printf("Equilateral");
    } else if(res == 2) {
        printf("Isosceles");
    } else {
        printf("Scalen");
    }
}

int triangle(int a, int b, int c) {

    if(a == b && b == c && a == c) {
        return 1;
    } else if(a==b || b==c) {
        return 2;
    } else {
        return 3;
    }
}