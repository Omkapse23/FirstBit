#include <stdio.h>

int main() {
    int a;
    int b;
    char op;

    printf("Enter a number : ");
    scanf("%d", &a);

    printf("Enter a number : ");
    scanf("%d", &b);

    printf("Enter a operator : ");
    scanf(" %c", &op);

    if(op == '+') {
        printf("%d", a + b);
    } else if(op == '-') {
        printf("%d", a - b);
    } else if(op == '*') {
        printf("%d", a * b);
    } else if(op == '/') {
        printf("%d", a / b);
    } else {
        printf("Invalid choice");
    }
}