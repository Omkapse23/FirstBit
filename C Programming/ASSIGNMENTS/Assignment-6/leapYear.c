#include <stdio.h>

// //Type - 1 = witout params , without return type
// void leapYear();
// int main() {
//     leapYear();
// }

// void leapYear() {
//     int year = 2004;

//     if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
//         printf("Leap year");
//     } else {
//         printf("Not leap year");
//     }
// }


// //Type - 2 = with param, without returntype
// void leapYear(int year);
// int main() {
//     int year = 2004;
//     leapYear(year);
// }

// void leapYear(year) {
//     if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
//         printf("Leap year");
//     } else {
//         printf("Not leap year");
//     }
// }


// //Type - 3 = witout params, with return type
// int leapYear();
// int main() {
//     int res = leapYear();

//     if(res == 1) {
//         printf("Leap year");
//     } else {
//         printf("Not leap year");
//     }
// }

// int leapYear() {
//     int year = 2005;
//     if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
//         return 1;
//     } else {
//         return 0;
//     }
// }


//Type - 4 = with params , with return type
int leapYear(int year);
int main() {
    int year = 2007;
    int res = leapYear(year);

    if(res == 1) {
        printf("Leap year");
    } else {
        printf("Not leap year");
    }
}

int leapYear(int year) {
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return 1;
    } else {
        return 0;
    }
}