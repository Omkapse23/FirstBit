#include <stdio.h>

// //Type - 1 = witout params and return type
// void chars();
// int main() {
//     chars();
// }

// void chars() {
//     char ch = 'b';
//     if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//         printf("Its a charatcter");
//     } else {
//         printf("Its a consonant");
//     }
// }


// //Type - 2 = with params without return type
// void chars(char ch);
// int main() {
//     char ch = 'b';
//     chars(ch);
// } 

// void chars(char ch) {
//     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//         printf("Character");
//     } else {
//         printf("Consonant");
//     }
// }


// //Type - 3 = without params with return type
// char chars();
// int main() {
//     int res = chars();

//     if(res == 1) {
//         printf("Character");
//     } else {
//         printf("Consonant");
//     }
// }

// char chars() {
//     char ch = 'z';
//     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//         return 1;
//     } else {
//         return 0;
//     }
// }


//Type - 4 = with params and return type
char chars(char ch);
int main() {
    char ch = 'b';
    int res = chars(ch);

    if(res == 1) {
        printf("Character");
    } else {
        printf("Consonant");
    }
}

char chars(char ch) {
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1;
    } else {
        return 2;
    }
}