#include <stdio.h>

// //**********Pass by value**********

// struct employee{
//     int id;
//     char name[20];
//     int salary;
// };

// //Pass by value
// struct employee storeEmployee(struct employee e1);
// void displayEmployee(struct employee e1);

// void main() {
//     struct employee e1;
//     e1 = storeEmployee(e1);
//     displayEmployee(e1);
// }

// struct employee storeEmployee(struct employee e1) {
//     printf("*****Enter Employee Details*****\n");
//     printf("Enter ID : ");
//     scanf("%d", &e1.id);
//     printf("Enter Name : ");
//     scanf("%s", &e1.name);
//     printf("Enter Salary : ");
//     scanf("%d", &e1.salary);

//     printf("\n");

//     return e1;
// }


// void displayEmployee(struct employee e1) {
//     printf("*****Employee Details*****\n");
//     printf("ID : %d\n", e1.id);
//     printf("Name : %s\n", e1.name);
//     printf("Salary : %d\n", e1.salary);
// }





//**********pass by address(array)**********

typedef struct Employee {
    int id;
    char name[20];
    int salary;
} Employee;

void storeEmployee(Employee* ptr, int size);
void displayEmployee(Employee* ptr, int size);

int main(){
    Employee arr[3];

    storeEmployee(arr, 3);
    displayEmployee(arr, 3);
}

void storeEmployee(Employee* ptr, int size) {
    printf("**********Enter details of employee**********\n");
    for(int i=0; i<size; i++) {
        printf("Enter ID : ");
        scanf("%d", &ptr[i].id);
        printf("Enter Name : ");
        scanf("%s", &ptr[i].name);
        printf("Enter Salary : ");
        scanf("%d", &ptr[i].salary);

        printf("\n");
    }
}

void displayEmployee(Employee* ptr, int size) {
    printf("**********Employee Details**********\n");
    for(int i=0; i<size; i++) {
        printf("ID : %d\n", ptr[i].id);
        printf("Name : %s\n", ptr[i].name);
        printf("Salary : %d\n", ptr[i].salary);

        printf("\n");
    }
}