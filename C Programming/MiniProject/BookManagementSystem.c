#include <stdio.h>
#include <string.h>

typedef struct Book {
    int bookid;
    char bookname[20];
    char authername[20];
    char category[20];
    int price;
    float rating;
} Book;

void addBook(Book* ptr, int size);
void removeBook(Book* ptr, int* count);
void searchBookById(Book* ptr, int size);
void searchBookByName(Book* ptr, int size);
void showBooksofAuther(Book* ptr, int size);
void showBooksOfCategory(Book* ptr, int size);
void updateBookData(Book* ptr, int size);
void displaySortedBooks(Book* ptr, int size);
void displayAllBooks(Book* ptr, int size);

int main() {
    Book arr[20];
    int count = 0;

    printf("========================================\n");
    printf("          Book Management System        \n");
    printf("========================================\n");

    
    while(1) {
        printf("\n----------Main Menu----------\n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Search Book by ID\n");
        printf("4. Search Book by Name\n");
        printf("5. Show Author's Book\n");
        printf("6. Show Category's Books\n");
        printf("7. Update Book Data\n");
        printf("8. Display Sorted Books\n");
        printf("9. Display All Books\n");
        printf("10. Exit\n");
        printf("\n");

        int choice;
        printf("Enter Your Choice : ");
        scanf("%d", &choice);
        printf("\n");

        if(choice == 1) {
            //add book
            if(count < 20) {
                addBook(&arr[count], 1);
                count++;
            } else {
                printf("All book slots are full\n");
            }
        } else if(choice == 2) {
            //remove book
            removeBook(arr, &count);
        } else if(choice == 3) {
            //search book by id
            searchBookById(arr, count);
        } else if(choice == 4) {
            //search book by name
            searchBookByName(arr, count);
        } else if(choice == 5) {
            //show authers book
            showBooksofAuther(arr, count);
        } else if(choice == 6) {
            //show perticular category book
            showBooksOfCategory(arr, count);
        } else if(choice == 7) {
            //update book data
            updateBookData(arr, count);
        } else if(choice == 8) {
            // display sorted books
            displaySortedBooks(arr, count); 
        } else if(choice == 9) {
            //display all books
            displayAllBooks(arr, count);
        } else if(choice == 10) {
            //exit
            printf("Thank You for Visiting.");
            break;
        } else {
            printf("Invalid choice try again");
        }
    }
}

//1. add book
void addBook(Book* ptr, int size) {
    printf("----------Add Book----------\n");
    for(int i=0; i<size; i++) {
        printf("Enter Book ID : ");
        scanf("%d", &ptr[i].bookid);
        printf("Enter Book Name : ");
        scanf(" %19[^\n]", ptr[i].bookname);
        printf("Enter Auther Name : ");
        scanf(" %19[^\n]", ptr[i].authername);
        printf("Enter Category : ");
        scanf(" %19[^\n]", ptr[i].category);
        printf("Enter Price : ");
        scanf("%d", &ptr[i].price);
        printf("Enter Rating : ");
        scanf("%f", &ptr[i].rating);

        printf("\n");
        printf("Book added successfully");
        printf("\n");
    }
    printf("\n");
}

//2. remove book
void removeBook(Book* ptr, int* count){
    int id, i, j;

    if (*count == 0){
        printf("No books available to remove.\n");
        return;
    }

    printf("Enter Book ID to remove: ");
    scanf("%d", &id);

    for (i = 0; i < *count; i++){
        if (ptr[i].bookid == id){
            break;
        }
    }

    if (i == *count){
        printf("Book not found.\n");
        return;
    }

    for (j = i; j < *count - 1; j++){
        ptr[j] = ptr[j + 1];
    }

    (*count)--;

    printf("Book removed successfully.\n");
}

//3. search book by id
void searchBookById(Book* ptr, int size) {
    int id, found = 0;

    printf("Enter Book ID : ");
    scanf("%d", &id);

    for(int i=0; i<size; i++) {
        if(ptr[i].bookid == id) {
            printf("-----Book Found------\n");
            printf("Book ID : %d\n", ptr[i].bookid);
            printf("Book Name : %s\n", ptr[i].bookname);
            printf("Auther Name : %s\n", ptr[i].authername);
            printf("Category : %s\n", ptr[i].category);
            printf("Price : %d\n", ptr[i].price);
            printf("Rating : %f\n", ptr[i].rating);

            found = 1;
            printf("\n");
        }
    }

    if(found == 0) {
        printf("Book Not Found");
    }
}

//4. search book by name
void searchBookByName(Book* ptr, int size) {
    char name[20];
    int found = 0;

    printf("Enter Book Name : ");
    scanf(" %19[^\n]", name);

    for(int i=0; i<size; i++) {
        if(strcmp(ptr[i].bookname, name) == 0) {
            printf("-----Book Found------\n");
            printf("Book ID : %d\n", ptr[i].bookid);
            printf("Book Name : %s\n", ptr[i].bookname);
            printf("Auther Name : %s\n", ptr[i].authername);
            printf("Category : %s\n", ptr[i].category);
            printf("Price : %d\n", ptr[i].price);
            printf("Rating : %f\n", ptr[i].rating);

            found = 1;
            printf("\n");
        }
    }

    if(found == 0) {
        printf("Book Not Found");
    }
}

//5. search book by authers
void showBooksofAuther(Book* ptr, int size) {
    int found = 0;
    char auther[20];
    printf("Enter Auther Name : ");
    scanf(" %19[^\n]", auther);

    for(int i=0; i<size; i++) {
        if(strcmp(ptr[i].authername, auther) == 0) {
            printf("-----Book Found------\n");
            printf("Book ID : %d\n", ptr[i].bookid);
            printf("Book Name : %s\n", ptr[i].bookname);
            printf("Auther Name : %s\n", ptr[i].authername);
            printf("Category : %s\n", ptr[i].category);
            printf("Price : %d\n", ptr[i].price);
            printf("Rating : %f\n", ptr[i].rating);

            found = 1;
            printf("\n");
        }
    }
    if(found == 0) {
        printf("Book Not found");
    }
}

//6. show perticular categories book
void showBooksOfCategory(Book* ptr, int size) {
    int found = 0;
    char cate[20];
    printf("Enter Category : ");
    scanf(" %19[^\n]", cate);

    for(int i=0; i<size; i++) {
        if(strcmp(ptr[i].category, cate) == 0) {
            printf("-----Book Found------\n");
            printf("Book ID : %d\n", ptr[i].bookid);
            printf("Book Name : %s\n", ptr[i].bookname);
            printf("Auther Name : %s\n", ptr[i].authername);
            printf("Category : %s\n", ptr[i].category);
            printf("Price : %d\n", ptr[i].price);
            printf("Rating : %f\n", ptr[i].rating);

            found = 1;
            printf("\n");
        }
    }
    if(found == 0) {
        printf("Book Not found");
    }
}

//7. update book data
void updateBookData(Book* ptr, int size) {
    int id;
    int found = 0;
    int newPrice;
    float newRating;

    if(size == 0) {
        printf("No books available\n");
    }

    printf("Enter Book ID : ");
    scanf("%d", &id);
    printf("\n");

    for(int i=0; i<size; i++) {
        if(ptr[i].bookid == id) {
            printf("-----Book Found-----\n");
            printf("Book Name: %s\n", ptr[i].bookname);
            printf("Current Price: %d\n", ptr[i].price);
            printf("Current Rating: %f\n", ptr[i].rating);

            printf("Enter New Price : ");
            scanf("%d", &newPrice);

            printf("Enter New Rating : ");
            scanf("%d", &newRating);

            ptr[i].price = newPrice;
            ptr[i].rating = newRating;

            printf("Book data updated successfully");
            found = 1;
        }
    }

    if(found == 0) {
        printf("Book ID not found\n");
    }
}

//8. display sorted books
void displaySortedBooks(Book* ptr, int size) {
    int choice;
    int index = 0;
    if(size == 0) {
        printf("No books available\n");
    }

    printf("\n----- Display Books -----\n");
    printf("1. Highest Priced Book\n");
    printf("2. Lowest Priced Book\n");
    printf("3. Highest Rated Book\n");
    printf("4. Lowest Rated Book\n");
    printf("\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    if(choice < 1 || choice > 4) {
        printf("Invalid Choice\n");
    }

    for (int i = 1; i < size; i++)
    {
        if (choice == 1 && ptr[i].price > ptr[index].price)
        {
            index = i;
        }
        else if (choice == 2 && ptr[i].price < ptr[index].price)
        {
            index = i;
        }
        else if (choice == 3 && ptr[i].rating > ptr[index].rating)
        {
            index = i;
        }
        else if (choice == 4 && ptr[i].rating < ptr[index].rating)
        {
            index = i;
        }
    }

    printf("\n----- Book Details -----\n");
    printf("Book ID: %d\n", ptr[index].bookid);
    printf("Book Name: %s\n", ptr[index].bookname);
    printf("Author Name: %s\n", ptr[index].authername);
    printf("Category: %s\n", ptr[index].category);
    printf("Price: %d\n", ptr[index].price);
    printf("Rating: %.1f\n", ptr[index].rating);
}

//9. display all books
void displayAllBooks(Book* ptr, int size) {
    printf("----------Books Library----------\n");
    if(size == 0) {
        printf("No Books Available.\n");
    }

    for(int i=0; i<size; i++) {
        printf("-----Book Details------\n");
            printf("Book ID : %d\n", ptr[i].bookid);
            printf("Book Name : %s\n", ptr[i].bookname);
            printf("Auther Name : %s\n", ptr[i].authername);
            printf("Category : %s\n", ptr[i].category);
            printf("Price : %d\n", ptr[i].price);
            printf("Rating : %f\n", ptr[i].rating);
            printf("\n");
    }
}