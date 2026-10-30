#include <stdio.h>

typedef struct Sales {
    int id;
    char name[20];
    int price;
    int quantity;
} Sales;

void displayProducts(Sales* ptr, int size);
void addToCart(Sales* products, Sales* cart, int productCount, int* cartCount);
void displayBill(Sales* cart, int cartCount);

void main() {
    Sales products[5] = {
        {101, "Pen", 10, 50},
        {102, "Notebook", 50, 30},
        {103, "Pencil", 5, 100},
        {104, "Eraser", 8, 48},
        {105, "Scale", 15, 25},
    };

    Sales cart[100];
    int cartCount = 0;
    int choice;

    while(1) {
        printf("\n==========POINT OF SALE SYSTEM==========\n");
        printf("1. Display all products\n");
        printf("2. Add Product to Cart\n");
        printf("3. Display Bill\n");
        printf("4. Exit\n");
        printf("\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        if (choice == 1) {
            //display all products
            displayProducts(products, 5);
        } else if(choice == 2) {
            //add product to cart
            addToCart(products, cart, 5, &cartCount);
        } else if(choice == 3) {
            //display bill
            displayBill(cart, cartCount);
        } else if(choice == 4) {
            printf("Thank you for shopping");
            break;
        } else {
            printf("Invalid Choice!");
        }
    }
}

//display products
void displayProducts(Sales* ptr, int size) {
    printf("----------Available Products----------\n");
    printf("%-10s %-15s %-10s %-10s\n", "ID", "Name", "Price", "Stock");

    for(int i=0; i<size; i++){
        printf("%-10d %-15s Rs.%-10d %-10d\n", ptr[i].id, ptr[i].name, ptr[i].price, ptr[i].quantity);
    }
}

//add to cart
void addToCart(Sales* products, Sales* cart, int productCount, int* cartCount) {
    int id, qty, found = 0;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    for (int i = 0; i < productCount; i++) {
        if (products[i].id == id) {
            found = 1;

            printf("Product: %s\n", products[i].name);
            printf("Available stock: %d\n", products[i].quantity);
            printf("Enter quantity: ");
            scanf("%d", &qty);

            if (qty <= 0) {
                printf("Quantity must be greater than zero.\n");
                return;
            }

            if (qty > products[i].quantity) {
                printf("Insufficient stock!\n");
                return;
            }

            if (*cartCount >= 100) {
                printf("Cart is full!\n");
                return;
            }

            cart[*cartCount].id = products[i].id;
            snprintf(cart[*cartCount].name,
                     sizeof(cart[*cartCount].name),
                     "%s", products[i].name);
            cart[*cartCount].price = products[i].price;
            cart[*cartCount].quantity = qty;

            (*cartCount)++;
            products[i].quantity -= qty;

            printf("Product added to cart successfully!\n");
            break;
        }
    }

    if (found == 0) {
        printf("Product ID not found!\n");
    }
}

//add item to cart
void displayBill(Sales* cart, int cartCount) {
    int total = 0;

    if(cartCount == 0) {
        printf("\nYour cart is empty\n");
        return;
    }

    printf("\n===============Your Bill===============\n");
    printf("%-15s %-10s %-10s %-10s\n", "Product", "Price", "Quantity", "Amount");

    for(int i=0; i<cartCount; i++) {
        int amount = cart[i].price * cart[i].quantity;

        printf("%-15s Rs.%-10d %10d Rs.%-10d\n", cart[i].name, cart[i].price, cart[i].quantity, amount);

        total += amount;
    }

    printf("--------------------------------------------\n");
    printf("Total Amount: Rs. %.2d\n", total);
    printf("============================================\n");

}