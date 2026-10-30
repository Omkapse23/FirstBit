#include <stdio.h>

// //Type - 1 = witout both
// void voter();
// int main() {
//     voter();
// }

// void voter() {
//     int age = 15;
//     if(age >= 18) {
//         printf("Eligible");
//     } else {
//         printf("Not eligible");
//     }
// }


// //Type - 2 = with params
// void voter(int age);
// int main() {
//     int age = 10;
//     voter(age);
// } 

// void voter(int age) {
//     if(age >= 18) {
//         printf("Eligible");
//     } else {
//         printf("Not eligible");
//     }
// }


// //Type - 3 = with return type
// int voter();
// int main() {
//     int res = voter();
//     if(res == 1) {
//         printf("Eligible");
//     } else {
//         printf("Not eligible");
//     }
// }

// int voter() {
//     int age = 10;
//     if(age >= 18) {
//         return 1;
//     } else {
//         return 0;
//     }
// }


//Type - 4 = with both
int voter(int age);
int main() {
    int age = 10;
    int res = voter(age);
    if(res == 1) {
        printf("Eligible");
    } else {
        printf("Not eligible");
    }
}

int voter(int age) {
    if(age >= 18) {
        return 1;
    } else {
        return 0;
    }
}

