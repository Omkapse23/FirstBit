#include <stdio.h>

// //**********pass by value**********

// struct Product {
//     int id;
//     char name[20];
//     int quantity;
//     int price;
// };

// struct Product storeProduct(struct Product p1);
// void displayProduct(struct Product p1);

// void main() {
//     struct Product p1;
//     p1 = storeProduct(p1);
//     displayProduct(p1);
// }

// struct Product storeProduct(struct Product p1) {
//     printf("*****Enter Product Details*****\n");
//     printf("Enter Id : ");
//     scanf("%d", &p1.id);
//     printf("Enter name : ");
//     scanf("%s", p1.name);
//     printf("Enter Quantity : ");
//     scanf("%d", &p1.quantity);
//     printf("Enter Price : ");
//     scanf("%d", &p1.price);
    
//     printf("\n");

//     return p1;
// }

// void displayProduct(struct Product p1) {
//     printf("*****Prduct Details*****\n");
//     printf("ID : %d\n", p1.id);
//     printf("Name : %s\n", p1.name);
//     printf("Quantity : %d\n", p1.quantity);
//     printf("Price : %d\n", p1.price * p1.quantity);
// }






//**********pass by address(array)**********

typedef struct Product {
    int id;
    char name[20];
    int quantity;
    int price;
} Product;

void storeProduct(Product* ptr, int size);
void displayProduct(Product* ptr, int size);

int main() {
    Product arr[3];
    storeProduct(arr, 3);
    displayProduct(arr, 3);
}

void storeProduct(Product* ptr, int size) {
    printf("**********Enter product details**********\n");
    for(int i=0; i<size; i++) {
        printf("Enter ID : ");
        scanf("%d", &ptr[i].id);
        printf("Enter Name : ");
        scanf("%s", &ptr[i].name);
        printf("Enter Quantity : ");
        scanf("%d", &ptr[i].quantity);
        printf("Enter Price : ");
        scanf("%d", &ptr[i].price);

        printf("\n");
    }
}

void displayProduct(Product* ptr, int size) {
    printf("**********Product Details**********\n");
    for(int i=0; i<size; i++) {
        printf("ID : %d\n", ptr[i].id);
        printf("Name : %s\n", ptr[i].name);
        printf("Quantity : %d\n", ptr[i].quantity);
        printf("Price : %d\n", ptr[i].price * ptr[i].quantity);

        printf("\n");
    }
}
