#include <stdio.h>

typedef struct Book {
    char bname[20];
    int id;
    char auther[20];
    int price;
} Book;

Book storeBook(Book b1);
void displayBook(Book b1);

void main() {
    Book b1;

    b1 = storeBook(b1);
    displayBook(b1);
}

Book storeBook(Book b1) {
    printf("**********Book Details**********\n");
    printf("Enter Book Name : ");
    scanf("%s", b1.bname);
    printf("Enter Book Id : ");
    scanf("%d", &b1.id);
    printf("Enter Book Auther : ");
    scanf("%s", b1.auther);
    printf("Enter Book Price : ");
    scanf("%d", &b1.price);

    return b1;
}

void displayBook(Book b1) {
    printf("**********Book Details**********\n");
    printf("Book Name : %s\n", b1.bname);
    printf("Book Id : %d\n", b1.id);
    printf("Book Auther : %s\n", b1.auther);
    printf("Book Price : %d\n", b1.price);
}