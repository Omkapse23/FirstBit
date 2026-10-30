#include <stdio.h>

// // Type - 1 = without params and return type
// void operations();
// int main() {
//     operations();
// }

// void operations() {
//     int a;
//     int b;
//     char op;

//     printf("Enter first number : ");
//     scanf("%d", &a);

//     printf("Enter second number : ");
//     scanf("%d", &b);

//     printf("Enter a operator : ");
//     scanf(" %c", &op);

//     if(op == '+') {
//         printf("%d", a+b);
//     } else if(op == '-') {
//         printf("%d", a-b);
//     } else if(op == '/') {
//         printf("%d", a/b);
//     } else if(op == '*') {
//         printf("%d", a*b);
//     } else if(op == '%') {
//         printf("%d", a%b);
//     } else {
//         printf("Invalid operator");
//     }
// }

// //Type - 2 = with params
// void operations(int a, int b, char op);
// int main() {
//     int a;
//     int b;
//     char op;
//     operations(a, b, op);
// }

// void operations(int a, int b, char op) {
    
//     printf("Enter first number : ");
//     scanf("%d", &a);

//     printf("Enter second number : ");
//     scanf("%d", &b);

//     printf("Enter a operator : ");
//     scanf(" %c", &op);

//     if(op == '+') {
//         printf("%d", a+b);
//     } else if(op == '-') {
//         printf("%d", a-b);
//     } else if(op == '/') {
//         printf("%d", a/b);
//     } else if(op == '*') {
//         printf("%d", a*b);
//     } else if(op == '%') {
//         printf("%d", a%b);
//     } else {
//         printf("Invalid operator");
//     }
// }


// //Type - 3 = with return type
// int operations();
// int main() {
//     int res = operations();
//     printf("%d", res);
// }

// int operations() {
//     int a;
//     int b;
//     char op;
    
//     printf("Enter first number : ");
//     scanf("%d", &a);

//     printf("Enter second number : ");
//     scanf("%d", &b);

//     printf("Enter a operator : ");
//     scanf(" %c", &op);

//     if(op == '+') {
//         return a+b;
//     } else if(op == '-') {
//         return a-b;
//     } else if(op == '/') {
//         return a/b;
//     } else if(op == '*') {
//         return a*b;
//     } else if(op == '%') {
//         return a%b;
//     } else {
//         return 0;
//     }
// }


//Type - 4 = with both
int operations(int a, int b, char op);
int main() {
    int a;
    int b;
    char op;
    
    int res = operations(a, b, op);
    printf("%d", res);
}

int operations(int a, int b, char op) {
    
    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    printf("Enter a operator : ");
    scanf(" %c", &op);

    if(op == '+') {
        return a+b;
    } else if(op == '-') {
        return a-b;
    } else if(op == '/') {
        return a/b;
    } else if(op == '*') {
        return a*b;
    } else if(op == '%') {
        return a%b;
    } else {
        return 0;
    }
}