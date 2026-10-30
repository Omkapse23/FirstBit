#include <stdio.h>

// //**********pass by value**********

// struct Student{
//     int rollno;
//     char name[20];
//     int marks;
// };

// struct Student storeStudent(struct Student s1);
// void displayStudent(struct Student s1);

// void main() {
//     struct Student s1;
//     s1 = storeStudent(s1);
//     displayStudent(s1);
// }

// struct Student storeStudent(struct Student s1) {
//     printf("*****Enter student Details*****\n");
//     printf("Enter Roll Number : ");
//     scanf("%d", &s1.rollno);
//     printf("Enter Name : ");
//     scanf("%s", s1.name);
//     printf("Enter Marks : ");
//     scanf("%d", &s1.marks);

//     printf("\n");

//     return s1;
// }

// void displayStudent(struct Student s1) {
//     printf("*****Student Details*****\n");
//     printf("Roll Number : %d\n", s1.rollno);
//     printf("Name : %s\n", s1.name);
//     printf("Marks : %d\n", s1.marks);
// }








//*********pass by address(array)**********

typedef struct Student {
    int rollno;
    char name[20];
    int marks;
} Student;

void storeStudent(Student* ptr, int size);
void displayStudent(Student* ptr, int size);

void main() {
    Student arr[3];

    storeStudent(arr, 3);
    displayStudent(arr, 3);
}

void storeStudent(Student* ptr, int size) {
    printf("**********Enter Student Details**********\n");
    for(int i=0; i<size; i++) {
        printf("Enter Roll No : ");
        scanf("%d", &ptr[i].rollno);
        printf("Enter Name : ");
        scanf("%s", &ptr[i].name);
        printf("Enter Marks : ");
        scanf("%d", &ptr[i].marks);

        printf("\n");
    }
}

void displayStudent(Student* ptr, int size) {
    printf("**********Student Details**********\n");
    for(int i=0; i<size; i++) {
        printf("Roll No : %d\n", ptr[i].rollno);
        printf("Name : %s\n", ptr[i].name);
        printf("Marks : %d\n", ptr[i].marks);

        printf("\n");
    }
}