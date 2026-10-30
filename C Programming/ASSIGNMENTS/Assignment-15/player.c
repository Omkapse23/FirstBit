#include <stdio.h>

typedef struct Player {
    char name[20];
    int noOfMatches;
    int runs;
    int wickets;
} Player;

void storePlayer(Player* ptr, int size);
void displayPlayer(Player* ptr, int size);
void maxRuns(Player* ptr, int size);
void maxWickets(Player* ptr, int size);

void main() {
    printf("============================================================================\n");
	printf("                    WELCOME TO STUDENT MANAGEMENT SYSTEM\n");
	printf("============================================================================\n");

    printf("\n");

    int size;
    printf("Enter how many players you want to add : ");
    scanf("%d", &size);

    printf("\n");

    Player arr[100];

    storePlayer(arr, size);

    // displayPlayer(arr, 11);
    // maxRuns(arr, 11);
    // maxWickets(arr, 11);

    while(1) {
        printf("**********Welcome To Main Menu**********\n");
        printf("1. Enter 1 to display all players.\n");
        printf("2. Enter 2 to find the maximun run getter.\n");
        printf("3. Enter 3 to find the maximum wicket taker.\n");
        printf("4. Exit\n");

        printf("\n");

        int choice;
        printf("Enter your choice : ");
        scanf("%d", &choice);

        printf("\n");

        if(choice == 1) {
            displayPlayer(arr, size);
        } else if(choice == 2) {
            maxRuns(arr, size);
        } else if(choice == 3) {
            maxWickets(arr, size);
        } else if(choice == 4) {
            printf("Thank you!");
            break;
        } else  {
            printf("Invalid Choice");
        }
    }
}

void storePlayer(Player* ptr, int size) {
    printf("**********Enter Players Details**********\n");
    for(int i=0; i<size; i++) {
        printf("Enter Name : ");
        scanf("%s", ptr[i].name);
        printf("Enter No of Matches Played : ");
        scanf("%d", &ptr[i].noOfMatches);
        printf("Enter Runs : ");
        scanf("%d", &ptr[i].runs);
        printf("Enter Wickets : ");
        scanf("%d", &ptr[i].wickets);

        printf("\n");
    }
}

void displayPlayer(Player* ptr, int size) {
    printf("**********Players States**********\n");
    for(int i=0; i<size; i++) {
        printf("Name : %s\n", ptr[i].name);
        printf("No of Matches Plyed : %d\n", ptr[i].noOfMatches);
        printf("Runs : %d\n", ptr[i].runs);
        printf("Wickets : %d\n", ptr[i].wickets);

        printf("\n");
    }
}

void maxRuns(Player* ptr, int size) {
    printf("**********Highest Run Scorer**********\n");
    int max=0;
    for(int i=1; i<size; i++) {
        if(ptr[i].runs > ptr[max].runs) {
            max = i;
        }
    }

    printf("Name          : %s\n", ptr[max].name);
    printf("Matches Played: %d\n", ptr[max].noOfMatches);
    printf("Runs          : %d\n", ptr[max].runs);
    printf("Wickets       : %d\n", ptr[max].wickets);

    printf("\n");
}

void maxWickets(Player* ptr, int size) {
    printf("**********Highest Wicket Taker**********\n");
    int max = 0;
    for(int i=1; i<size; i++) {
        if(ptr[i].wickets > ptr[max].wickets) {
            max = i;
        }
    }

    printf("Name          : %s\n", ptr[max].name);
    printf("Matches Played: %d\n", ptr[max].noOfMatches);
    printf("Runs          : %d\n", ptr[max].runs);
    printf("Wickets       : %d\n", ptr[max].wickets);
}