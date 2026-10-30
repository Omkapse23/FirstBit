#include <stdio.h>

// //Type - 1 = without both
// void ageCheck();
// int main() {
//     ageCheck();
// }

// void ageCheck() {
//     int age = 66;

//     if(age<12) {
//         printf("Child");
//     } else if(age>12 && age<19) {
//         printf("Teenager");
//     } else if(age>20 && age<59) {
//         printf("Adult");
//     } else {
//         printf("Senior");
//     }
// }


// //Type - 2 = with param
// void ageCheck(int age);
// int main() {
//     int age = 66;
//     ageCheck(age);
// }

// void ageCheck(int age) {

//     if(age<12) {
//         printf("Child");
//     } else if(age>12 && age<19) {
//         printf("Teenager");
//     } else if(age>20 && age<59) {
//         printf("Adult");
//     } else {
//         printf("Senior");
//     }
// }


// //Type - 3 = with return type
// int ageCheck();
// int main() {
//     int res = ageCheck();

//     if(res == 1) {
//         printf("Child");
//     } else if(res == 2) {
//         printf("Teenager");
//     } else if(res == 3) {
//         printf("Adult");
//     } else {
//         printf("Senior");
//     }
// }

// int ageCheck() {
//     int age = 66;

//     if(age<12) {
//         return 1;
//     } else if(age>12 && age<19) {
//         return 2;
//     } else if(age>20 && age<59) {
//         return 3;
//     } else {
//         return 4;
//     }
// }


//Type - 4 = with both
int ageCheck(int age);
int main() {
    int age = 55;
    int res = ageCheck(age);

    if(res == 1) {
        printf("Child");
    } else if(res == 2) {
        printf("Teenager");
    } else if(res == 3) {
        printf("Adult");
    } else {
        printf("Senior");
    }
}

int ageCheck(int age) {

    if(age<12) {
        return 1;
    } else if(age>12 && age<19) {
        return 2;
    } else if(age>20 && age<59) {
        return 3;
    } else {
        return 4;
    }
}