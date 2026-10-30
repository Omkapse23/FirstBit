#include <stdio.h>

// //**********Pass by value**********

// struct Admin{
//     int id;
//     char name[20];
//     int salary;
//     int allowence;
// };

// struct Admin storeAdmin(struct Admin a1);
// void displayAdmin(struct Admin a1);

// void main() {
//     struct Admin a1;
//     a1 = storeAdmin(a1);
//     displayAdmin(a1);
// }

// struct Admin storeAdmin(struct Admin a1) {
//     printf("******Enter Admin Details******\n");
//     printf("Enter ID : ");
//     scanf("%d", &a1.id);
//     printf("Enter Name : ");
//     scanf("%s", a1.name);
//     printf("Enter Salary : ");
//     scanf("%d", &a1.salary);
//     printf("Enter Allowence : ");
//     scanf("%d", &a1.allowence);

//     printf("\n");

//     return a1;
// }

// void displayAdmin(struct Admin a1) {
//     printf("*****Admin Details*****\n");
//     printf("ID : %d\n", a1.id);
//     printf("Name : %s\n", a1.name);
//     printf("Salary : %d\n", a1.salary);
//     printf("Allowence : %d\n", a1.allowence);
// }






//**********Pass by address (Array)**********

typedef struct Admin {
    int id;
    char name[20];
    int salary;
    int allowence;
} Admin;

void storeAdmin(Admin* ptr, int size);
void displayAdmin(Admin* ptr, int size);

void main() {
    Admin arr[5];

    storeAdmin(arr, 5);
    displayAdmin(arr, 5);
}

void storeAdmin(Admin* ptr, int size) {
    printf("**********Enter Details of Admin**********\n");
    for(int i=0; i<size; i++) {
        printf("Enter Id : ");
        scanf("%d", &ptr[i].id);
        printf("Enter Name : ");
        scanf("%s", &ptr[i].name);
        printf("Enter Salary : ");
        scanf("%d", &ptr[i].salary);
        printf("Enter Allowence : ");
        scanf("%d", &ptr[i].allowence);

        printf("\n");
    }
}

void displayAdmin(Admin* ptr, int size) {
    printf("**********Admin Details Are**********\n");
    for(int i=0; i<size; i++) {
        printf("ID : %d\n", ptr[i].id);
        printf("Name : %s\n", ptr[i].name);
        printf("Salary : %d\n", ptr[i].salary);
        printf("Allowence : %d\n", ptr[i].allowence);

        printf("\n");
    }
}