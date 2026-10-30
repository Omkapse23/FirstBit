#include <stdio.h>

// //**********Pass by value**********
// struct Complex {
//     int real;
//     int imaginary;
// };

// struct Complex storeCom(struct Complex c1);
// void displayCom(struct Complex c1);

// int main() {
//     struct Complex c1;

//     c1 = storeCom(c1);
//     displayCom(c1);

//     return 0;
// }

// struct Complex storeCom(struct Complex c1) {
//     printf("*****Enter Complex Number*****\n");

//     printf("Enter Real Part: ");
//     scanf("%d", &c1.real);

//     printf("Enter Imaginary Part: ");
//     scanf("%d", &c1.imaginary);

//     printf("\n");

//     return c1;
// }

// void displayCom(struct Complex c1) {
//     printf("*****Complex Number*****\n");
//     printf("%d + %di", c1.real, c1.imaginary);
// }






//**********Pass by address(Array)**********

typedef struct Complex {
    int real;
    int imaginary;
} Complex;

void storeComplex(Complex* ptr, int size);
void displayComplex(Complex* ptr, int size);

void main() {
    Complex arr[2];
    storeComplex(arr, 2);
    displayComplex(arr, 2);
}

void storeComplex(Complex* ptr, int size) {
    printf("**********Enter Complex Number***********\n");
    for(int i=0; i<size; i++) {
        printf("Enter real number : ");
        scanf("%d", &ptr[i].real);
        printf("Enter imaginary number : ");
        scanf("%d", &ptr[i].imaginary);

        printf("\n");
    }
}

void displayComplex(Complex* ptr, int size) {
    printf("**********Complex NUmbers**********\n");
    for(int i=0; i<size; i++) {
        printf("%d + %di\n", ptr[i].real, ptr[i].imaginary);
    }
}