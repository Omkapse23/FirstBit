#include <stdio.h>

// //**********pass by value**********

// struct SalesManager {
//     int id;
//     char name[20];
//     float salary;
//     float incentive;
//     float target;
// };

// struct SalesManager storeSales(struct SalesManager s1);
// void displaySales(struct Sales s1);

// void main(){
//     struct SalesManager s1;
//     s1 = storeSales(s1);
//     displaySales(s1);
// }

// struct SalesManager storeSales(struct SalesManager s1) {
//     printf("******Enter Sales Details******\n");
//     printf("Enter ID : ");
//     scanf("%d", &s1.id);
//     printf("Enter Name : ");
//     scanf("%s", s1.name);
//     printf("Enter Salary : ");
//     scanf("%d", &s1.salary);
//     printf("Enter Incentive : ");
//     scanf("%d", &s1.incentive);
//     printf("Enter Target : ");
//     scanf("%d", &s1.target);

//     printf("\n");

//     return s1;
// }

// void displaySales(struct SalesManager s1) {
//     printf("*****Admin Details*****\n");
//     printf("ID : %d\n", s1.id);
//     printf("Name : %s\n", s1.name);
//     printf("Salary : %d\n", s1.salary);
//     printf("Incentive : %d\n", s1.incentive);
//     printf("Target : %d\n", s1.target);

//     printf("\n");
// }








//*********pass by address(array)**********

typedef struct SalesManager{
    int id;
    char name[20];
    int salary;
    int incentive;
    int target;
} SalesManager;

void storeSales(SalesManager* ptr, int size);
void displaySales(SalesManager* ptr, int size);

void main() {
    SalesManager arr[3];

    storeSales(arr, 3);
    displaySales(arr, 3);
}

void storeSales(SalesManager* ptr, int size) {
    printf("**********Enter Sales Details**********\n");
    for(int i=0; i<size; i++) {
        printf("Enter ID  : ");
        scanf("%d", &ptr[i].id);
        printf("Enter Name  : ");
        scanf("%s", &ptr[i].name);
        printf("Enter Salary  : ");
        scanf("%d", &ptr[i].salary);
        printf("Enter Incentive  : ");
        scanf("%d", &ptr[i].incentive);
        printf("Enter Target : ");
        scanf("%d", &ptr[i].target);

        printf("\n");
    }
}

void displaySales(SalesManager* ptr, int size) {
    printf("**********Salse Manager Data**********\n");
    for(int i=0; i<size; i++) {
        printf("ID : %d\n", ptr[i].id);
        printf("Name : %s\n", ptr[i].name);
        printf("Salary : %d\n", ptr[i].salary);
        printf("Incentive : %d\n", ptr[i].incentive);
        printf("Target : %d\n", ptr[i].target);
        
        printf("\n");
    }
}