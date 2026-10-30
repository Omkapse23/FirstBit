#include <stdio.h>

//Type - 1 = without both
// void greatest();
// int main() {
//     greatest();
// }

// void greatest() {
//     int a=10, b=15, c=12;

//     if(a>b) {
//         if(a>c) {
//             printf("%d", a);
//         } else {
//             printf("%d", c);
//         }
//     } else {
//         if(b>c) {
//             printf("%d", b);
//         } else {
//             printf("%d", c);
//         }
//     }
// }


// //Type - 2 = with params
// void greatest(int a, int b, int c);
// int main() {
//     int a=10, b=15, c=12;
//     greatest(a, b, c);
// }

// void greatest(int a, int b, int c) {

//     if(a>b) {
//         if(a>c) {
//             printf("%d", a);
//         } else {
//             printf("%d", c);
//         }
//     } else {
//         if(b>c) {
//             printf("%d", b);
//         } else {
//             printf("%d", c);
//         }
//     }
// }


// //Type - 3 = with return type
// int greatest();
// int main() {
//     int res = greatest();
    
//     printf("Greatest =  %d", res);
// }

// int greatest() {
//     int a=10, b=15, c=12;

//     if(a>b) {
//         if(a>c) {
//             return a;
//         } else {
//             return c;
//         }
//     } else {
//         if(b>c) {
//             return b;
//         } else {
//             return c;
//         }
//     }
// }


//Type - 4 = with both
int greatest(int a, int b, int c);
int main() {
    int a=10, b=15, c=22;
    int res = greatest(a, b, c);
    
    printf("Greatest =  %d", res);
}

int greatest(int a, int b, int c) {

    if(a>b) {
        if(a>c) {
            return a;
        } else {
            return c;
        }
    } else {
        if(b>c) {
            return b;
        } else {
            return c;
        }
    }
}