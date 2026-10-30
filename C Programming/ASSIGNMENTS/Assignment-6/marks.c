#include <stdio.h>

// //Type - 1 = without both
// void marks();
// int main() {
//     marks();
// }

// void marks() {
//     int m = 70;

//     if(m>=75) {
//         printf("Distinction");
//     } else if(m>=65) {
//         printf("First class");
//     } else if(m>=55) {
//         printf("Second class");
//     } else if(m>=40) {
//         printf("pass");
//     } else {
//         printf("Fail");
//     }
// }


// //Type - 2 = with params
// void marks(int m);
// int main() {
//     int m = 70;
//     marks(m);
// }

// void marks(int m) {

//     if(m>=75) {
//         printf("Distinction");
//     } else if(m>=65) {
//         printf("First class");
//     } else if(m>=55) {
//         printf("Second class");
//     } else if(m>=40) {
//         printf("pass");
//     } else {
//         printf("Fail");
//     }
// }


// //Type - 3 = with return type
// int marks();
// int main() {
//     int res = marks();

//     if(res == 1) {
//         printf("Distinction");
//     } else if(res == 2) {
//         printf("First class");
//     } else if(res == 3) {
//         printf("Second class");
//     } else if(res == 4) {
//         printf("Pass");
//     } else {
//         printf("Fail");
//     }
// }

// int marks() {
//     int m = 70;

//     if(m>=75) {
//         return 1;
//     } else if(m>=65) {
//         return 2;
//     } else if(m>=55) {
//         return 3;
//     } else if(m>=40) {
//         return 4;
//     } else {
//         return 5;
//     }
// }


//Type - 4 = with both
int marks(int m);
int main() {
    int m = 70;
    int res = marks(m);

    if(res == 1) {
        printf("Distinction");
    } else if(res == 2) {
        printf("First class");
    } else if(res == 3) {
        printf("Second class");
    } else if(res == 4) {
        printf("Pass");
    } else {
        printf("Fail");
    }
}

int marks(int m) {

    if(m>=75) {
        return 1;
    } else if(m>=65) {
        return 2;
    } else if(m>=55) {
        return 3;
    } else if(m>=40) {
        return 4;
    } else {
        return 5;
    }
}