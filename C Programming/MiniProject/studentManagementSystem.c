#include <Stdio.h>

typedef struct Student {
	int rollno;
	char name[20];
	int marks;
}Student;

void storeStudents(Student* sarr,int size);
void displayStudents(Student* sarr,int size);
void searchStudentById(Student* sarr, int size);
void deleteStudentByRollNo(Student* sarr, int* size);

void main() {
	printf("============================================================================\n");
	printf("                    WELCOME TO STUDENT MANAGEMENT SYSTEM\n");
	printf("============================================================================\n");

	printf("\n");

	int size;
	printf("Enter how many student you want to add : ");
	scanf("%d",&size);

	printf("\n");
	
	Student sarr[100];
	
	storeStudents(sarr,size);
	// storeStudentHardCoded(sarr,&ci);
	
	while(1) {
		printf("**********MAIN MENU**********\n");
		printf("1. Enter 1 to display all students.\n");
		printf("2. Enter 2 to search student.\n");
		printf("3. Enter 3 to delete student.\n");
		printf("4. Enter 4 to exit.\n");

		printf("\n");

		int choice;
        printf("Enter your choice : ");
		scanf("%d",&choice);

		printf("\n");
		
		if(choice==1) {
			//display all studdents
			displayStudents(sarr,size);
		}
		else if(choice==2) {
			//search student by roll no
            searchStudentById(sarr,size);
		}
		else if(choice==3) {
			//delete student by roll no
			deleteStudentByRollNo(sarr, &size);
		}
		else if(choice==4) {
			printf("Thank You!!.");
			break;
		}
		else {
			//invalid choice
			printf("Invalid choice! Please enter correct choice.");
		}
	}	
}


//Store all students in an array
void storeStudents(Student* sarr,int size) {
	for(int i=0;i<size;i++) {
		printf("*****Enter details of student %d*****\n",i+1);
        printf("Enter Roll Number : ");
		scanf("%d",&sarr->rollno);
        printf("Enter Name : ");
		scanf("%s",sarr->name);
        printf("Enter Marks : ");
		scanf("%d",&sarr->marks);

		sarr++;

        printf("\n");
	}
}


//display all students
void displayStudents(Student* sarr, int size) {
    printf("\n");
    printf("+------------+----------------------+--------+\n");
    printf("| Roll No    | Name                 | Marks  |\n");
    printf("+------------+----------------------+--------+\n");

    for (int i = 0; i < size; i++) {
        printf("| %-10d | %-20s | %-6d |\n",
               sarr[i].rollno,
               sarr[i].name,
               sarr[i].marks);
    }

    printf("+------------+----------------------+--------+\n\n");
}


//Search student by roll no
void searchStudentById(Student* sarr, int size) {
    int roll, found = 0;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    for (int i = 0; i < size; i++) {
        if (sarr[i].rollno == roll) {
            printf("\n");
			printf("====================================\n");
            printf("              STUDENT FOUND\n");
			printf("====================================\n");
            printf("+------------+----------------------+--------+\n");
            printf("| Roll No    | Name                 | Marks  |\n");
            printf("+------------+----------------------+--------+\n");

            printf("| %-10d | %-20s | %-6d |\n",
                   sarr[i].rollno,
                   sarr[i].name,
                   sarr[i].marks);

            printf("+------------+----------------------+--------+\n\n");

            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("\n");
        printf("====================================\n");
        printf("        STUDENT NOT FOUND!\n");
        printf("====================================\n\n");
    }
}

//Delete student by roll number
void deleteStudentByRollNo(Student* sarr, int* size) {

	int roll;
	printf("Enter Roll Number to Delete : ");
	scanf("%d", &roll);

	for(int i=0; i< *size; i++) {
		if(sarr[i].rollno == roll) {
			for(int j=i; j< *size-1; j++) {
				sarr[j] = sarr[j+1];
			}
			(*size)--;

			printf("\nStudent deleted successfully!\n");
		}
	}
	printf("\nStudent not found!\n");
}


// storeStudentHardCoded(Student* sarr,int* size)
// {
// 	sarr[0].rollno=101;
// 	strcpy(sarr[0].name,"abcdef");
// 	sarr[0].marks=89;
	
// 	sarr[1].rollno=101;
// 	strcpy(sarr[1].name,"suyog");
// 	sarr[1].marks=89;
	
// 	sarr[2].rollno=101;
// 	strcpy(sarr[2].name,"sunny");
// 	sarr[2].marks=89;
	
// 	sarr[3].rollno=101;
// 	strcpy(sarr[3].name,"om");
// 	sarr[3].marks=89;
	
// 	sarr[4].rollno=101;
// 	strcpy(sarr[4].name,"jay");
// 	sarr[4].marks=89;
	
// 	sarr[5].rollno=101;
// 	strcpy(sarr[5].name,"rohit");
// 	sarr[5].marks=89;
	
// 	*size=6;
// }