#include <stdio.h>

// //**********pass by value**********

// struct HR{
//     int id;
//     char name[20];
//     int salary;
//     int commission;
// };

// struct HR storeHr(struct HR h1);
// void displayHr(struct HR h1);

// void main() {
//     struct HR h1;
//     h1 = storeHr(h1);
//     displayHr(h1);
// }

// struct HR storeHr(struct HR h1) {
//     printf("******Enter HR Details******\n");
//     printf("Enter ID : ");
//     scanf("%d", &h1.id);
//     printf("Enter Name : ");
//     scanf("%s", h1.name);
//     printf("Enter Salary : ");
//     scanf("%d", &h1.salary);
//     printf("Enter Commission : ");
//     scanf("%d", &h1.commission);

//     printf("\n");

//     return h1;
// }

// void displayHr(struct HR h1) {
//     printf("*****Admin Details*****\n");
//     printf("ID : %d\n", h1.id);
//     printf("Name : %s\n", h1.name);
//     printf("Salary : %d\n", h1.salary);
//     printf("Commission : %d\n", h1.commission);
// }






//**********pass by address(array)**********

typedef struct HR {
    int id;
    char name[20];
    int salary;
    int commission;
} HR;

void storeHr(HR* ptr, int size);
void displayHr(HR* ptr, int size);

int main() {
    HR arr[2];

    storeHr(arr, 2);
    displayHr(arr, 2);
}

void storeHr(HR* ptr, int size) {
    printf("**********Enter HR Details**********\n");
    for(int i=0; i<size; i++) {
        printf("Enter ID : ");
        scanf("%d", &ptr[i].id);
        printf("Enter Name : ");
        scanf("%s", &ptr[i].name);
        printf("Enter Salary : ");
        scanf("%d", &ptr[i].salary);
        printf("Enter Commission : ");
        scanf("%d", &ptr[i].commission);

        printf("\n");
    }
}

void displayHr(HR* ptr, int size) {
    printf("**********HR Details**********\n");
    for(int i=0; i<size; i++) {
        printf("Id : %d\n", ptr[i].id);
        printf("Name : %s\n", ptr[i].name);
        printf("Salary : %d\n", ptr[i].salary);
        printf("Commission : %d\n", ptr[i].commission);

        printf("\n");
    }
}