#include <stdio.h>
#include <time.h>
#include <string.h>

typedef struct Date
{
    int day, month, year;
} Date;

typedef struct Student
{
    int rollno;
    char name[20];
    Date dob;
    long int mobno;
} Student;


// Function to store student information
void storeStudents(Student* sarr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &sarr[i].rollno);

        printf("Enter name: ");
        scanf("%19s", sarr[i].name);

        printf("Enter DOB (day-month-year): ");
        scanf("%d-%d-%d",
              &sarr[i].dob.day,
              &sarr[i].dob.month,
              &sarr[i].dob.year);

        printf("Enter mobile number: ");
        scanf("%ld", &sarr[i].mobno);
    }
}


// Function to display student information
void display(Student* sarr, int size)
{
    printf("\n%-10s %-20s %-15s %-15s\n",
           "Roll No", "Name", "DOB", "Mobile No");

    printf("------------------------------------------------------------\n");

    for (int i = 0; i < size; i++)
    {
        printf("%-10d %-20s %02d-%02d-%04d %-15ld\n",
               sarr[i].rollno,
               sarr[i].name,
               sarr[i].dob.day,
               sarr[i].dob.month,
               sarr[i].dob.year,
               sarr[i].mobno);
    }
}


// Function to store hard-coded student information
void storeStudentHardCoded(Student* sarr, int* size)
{
    sarr[0].rollno = 101;
    strcpy(sarr[0].name, "Suyog");
    sarr[0].dob.day = 12;
    sarr[0].dob.month = 12;
    sarr[0].dob.year = 2002;
    sarr[0].mobno = 4343432;

    sarr[1].rollno = 102;
    strcpy(sarr[1].name, "Sunny");
    sarr[1].dob.day = 1;
    sarr[1].dob.month = 1;
    sarr[1].dob.year = 2004;
    sarr[1].mobno = 76645454;

    *size = 2;
}


// Function to search students by birthday month
void searchStudentsByBdayMonth(Student* sarr, int size, int bdaymonth)
{
    int flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (sarr[i].dob.month == bdaymonth)
        {
            printf("\n%s", sarr[i].name);
            flag = 1;
        }
    }

    if (flag == 0)
    {
        printf("\nNo students found for this month.");
    }
}


// Function to simulate sending an SMS
void sendSms(char* message, long int mobno)
{
    printf("\n%s sent to mobile number %ld", message, mobno);
}


// Function to get today's date
Date getTodayDate(void)
{
    time_t t;
    struct tm *current;

    time(&t);
    current = localtime(&t);

    Date today;

    if (current == NULL)
    {
        today.day = 0;
        today.month = 0;
        today.year = 0;
        return today;
    }

    today.day = current->tm_mday;
    today.month = current->tm_mon + 1;
    today.year = current->tm_year + 1900;

    printf("\nCurrent Date: %02d-%02d-%04d\n",
           today.day, today.month, today.year);

    return today;
}


// Function to wish students on their birthdays
void wishBday(Student* sarr, int size)
{
    Date today = getTodayDate();
    int flag = 0;

    if (today.day == 0)
    {
        printf("Unable to get the current date.");
        return;
    }

    for (int i = 0; i < size; i++)
    {
        if (sarr[i].dob.day == today.day &&
            sarr[i].dob.month == today.month)
        {
            printf("\nToday is %s's birthday!", sarr[i].name);

            char message[100];

            snprintf(message, sizeof(message),
                     "Happy Birthday %s", sarr[i].name);

            sendSms(message, sarr[i].mobno);

            flag = 1;
        }
    }

    if (flag == 0)
    {
        printf("\nNo student has a birthday today.");
    }
}


// Main function
int main(void)
{
    Student sarr[100];
    int size = 0;

    // Store hard-coded student information
    storeStudentHardCoded(sarr, &size);

    // To enter student information manually, use:
    // printf("How many students do you want to add? ");
    // scanf("%d", &size);
    // if (size < 1 || size > 100)
    // {
    //     printf("Invalid number of students.");
    //     return 1;
    // }
    // storeStudents(sarr, size);

    // Display all students
    display(sarr, size);

    // Search students by birthday month
    int bdaymonth;

    printf("\nEnter birthday month (1 = January, 12 = December): ");

    if (scanf("%d", &bdaymonth) != 1 ||
        bdaymonth < 1 || bdaymonth > 12)
    {
        printf("Invalid month. Please enter a number from 1 to 12.\n");
        return 1;
    }

    searchStudentsByBdayMonth(sarr, size, bdaymonth);

    // Check birthdays today
    wishBday(sarr, size);

    return 0;
}