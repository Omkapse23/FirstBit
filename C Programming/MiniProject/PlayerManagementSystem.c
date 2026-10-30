#include <stdio.h>
#include <string.h>

typedef struct Player {
    int jerseynumber;
    char name[20];
    int runs;
    int wickets;
    int matchesplayed;
} Player;

void addPlayer(Player *ptr, int size);
void removePlayer(Player *ptr, int *size);
void searchPlayerByJersey(Player *ptr, int size);
void searchPlayerByName(Player *ptr, int size);
void updatePlayerData(Player *ptr, int size);
void displaySortedPlayers(Player *ptr, int size);
void displayPlayers(Player *ptr, int size);

int main() {
    Player arr[20];
    int count = 0;

    printf("===================================================\n");
    printf("              Player Management System             \n");
    printf("===================================================\n");
    printf("\n");
    
    while(1) {
        printf("----------Main Menu----------\n");
        printf("1. Add Player.\n");
        printf("2. Remove Player.\n");
        printf("3. Search player by jersey number.\n");
        printf("4. Search player by player name.\n");
        printf("5. Update players data.\n");
        printf("6. Display sorted player.\n");
        printf("7. Display all players.\n");
        printf("8. Exit.\n");
        printf("\n");

        int choice;
        printf("Enter your choice : ");
        scanf("%d", &choice);
        printf("\n");

        if(choice == 1) {
            //add player
            if(count < 20) {
                addPlayer(&arr[count], 1);
                count++;
            } else {
                printf("All player slots are full.\n");
            }
        } else if(choice == 2) {
            //remove player
            removePlayer(arr, &count);
        } else if(choice == 3) {
            // search by jersey number
            searchPlayerByJersey(arr, count);
        } else if(choice == 4) {
            // search by player name
            searchPlayerByName(arr, count);
        } else if(choice == 5) {
            // update data
            updatePlayerData(arr, count);
        } else if(choice == 6) {
            //display sorted player
            displaySortedPlayers(arr, count);
        } else if(choice == 7) {
            //display all players
            displayPlayers(arr, count);
        } else if(choice == 8) {
            printf("Thank you for visiting.\n");
            break;
        } else {
            printf("Invalid choice.\n");
        }
        printf("\n");
    }
}

//1. add player
void addPlayer(Player *ptr, int size) {
    printf("----------Players States----------\n");
    for(int i=0; i<size; i++) {
        printf("Enter Jersey Number : ");
        scanf("%d", &ptr[i].jerseynumber);
        printf("Enter Player Name : ");
        scanf(" %19[^\n]", ptr[i].name);
        printf("Enter Runs : ");
        scanf("%d", &ptr[i].runs);
        printf("Enter Wickets : ");
        scanf("%d", &ptr[i].wickets);
        printf("Enter Matches Played : ");
        scanf("%d", &ptr[i].matchesplayed);

        printf("\n");
        printf("Player added successfully.\n");
        printf("\n");
    }
}

//2. remove player
void removePlayer(Player *ptr, int *size) {

    int jNum;
    int found = 0;

    printf("Enter Jersey Number to Remove: ");
    scanf("%d", &jNum);

    for(int i = 0; i < *size; i++) {

        if(ptr[i].jerseynumber == jNum) {

            for(int j = i; j < *size - 1; j++) {
                ptr[j] = ptr[j + 1];
            }

            (*size)--;

            printf("Player removed successfully.\n");

            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Player not found.\n");
    }
}

//3. search by jersey number
void searchPlayerByJersey(Player *ptr, int size) {
    int jNum;
    int found = 0;

    printf("Enter Jersey Number : ");
    scanf("%d", &jNum);

    for(int i=0; i<size; i++) {
        if(ptr[i].jerseynumber == jNum) {
            printf("----------Player Found----------.\n");
            printf("\n");
            printf("Jersey Number : %d\n", ptr[i].jerseynumber);
            printf("Player Name : %s\n", ptr[i].name);
            printf("Runs : %d\n", ptr[i].runs);
            printf("Wickets : %d\n", ptr[i].wickets);
            printf("Matches Played : %d\n", ptr[i].matchesplayed);
            found = 1;
        }
    }

    if(found == 0) {
        printf("Player not found.\n");
    }
}

//4. search by player name
void searchPlayerByName(Player *ptr, int size) {
    char pName[20];
    int found = 0;

    printf("Enter Player Name : ");
    scanf(" %19[^\n]", pName);

    for(int i=0; i<size; i++) {
        if(strcmp(ptr[i].name, pName) == 0) {
            printf("----------Player Found----------.\n");
            printf("\n");
            printf("Jersey Number : %d\n", ptr[i].jerseynumber);
            printf("Player Name : %s\n", ptr[i].name);
            printf("Runs : %d\n", ptr[i].runs);
            printf("Wickets : %d\n", ptr[i].wickets);
            printf("Matches Played : %d\n", ptr[i].matchesplayed);
            found = 1;
        }
    }

    if(found == 0) {
        printf("Player not found.\n");
    }
}

//5. Update data
void updatePlayerData(Player *ptr, int size) {
    int newRuns, newWickets, newMatches;
    int found = 0;
    int jnum;

    printf("Enter Jersey Number : ");
    scanf("%d", &jnum);

    for(int i=0; i<size; i++) {
        if(ptr[i].jerseynumber == jnum) {
            printf("----------Player States----------\n");
            printf("\n");
            printf("Jersey Number : %d\n", ptr[i].jerseynumber);
            printf("Player Name : %s\n", ptr[i].name);
            printf("Runs : %d\n", ptr[i].runs);
            printf("Wickets : %d\n", ptr[i].wickets);
            printf("Matches Played : %d\n", ptr[i].matchesplayed);
            printf("\n");

            printf("Enter updated runs : ");
            scanf("%d", &newRuns);

            printf("Enter updated Wickets : ");
            scanf("%d", &newWickets);

            printf("Enter updated matches played : ");
            scanf("%d", &newMatches);

            ptr[i].runs = newRuns;
            ptr[i].wickets = newWickets;
            ptr[i].matchesplayed = newMatches;

            printf("Playes data updated successfully.\n");
            found = 1;
        }
    }

    if(found == 0) {
        printf("Player not found.\n");
    }
}

//6. display sorted players
void displaySortedPlayers(Player *ptr, int size) {

    int choice;
    int index = 0;

    if(size == 0) {
        printf("No players available.\n");
        return;
    }

    printf("----------Player Performance----------\n");
    printf("1. Minimum Runs\n");
    printf("2. Maximum Runs\n");
    printf("3. Minimum Wickets\n");
    printf("4. Maximum Wickets\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice < 1 || choice > 4) {
        printf("Invalid choice.\n");
        return;
    }

    for(int i = 1; i < size; i++) {

        if(choice == 1) {
            if(ptr[i].runs < ptr[index].runs) {
                index = i;
            }
        }
        else if(choice == 2) {
            if(ptr[i].runs > ptr[index].runs) {
                index = i;
            }
        }
        else if(choice == 3) {
            if(ptr[i].wickets < ptr[index].wickets) {
                index = i;
            }
        }
        else if(choice == 4) {
            if(ptr[i].wickets > ptr[index].wickets) {
                index = i;
            }
        }
    }

    printf("\n----------Player Details----------\n");
    printf("Jersey Number : %d\n", ptr[index].jerseynumber);
    printf("Player Name : %s\n", ptr[index].name);
    printf("Runs : %d\n", ptr[index].runs);
    printf("Wickets : %d\n", ptr[index].wickets);
    printf("Matches Played : %d\n", ptr[index].matchesplayed);
}

//7. display all players
void displayPlayers(Player *ptr, int size) {
    for(int i=0; i<size; i++) {
        printf("----------Players Details----------\n");
        printf("\n");
        printf("Jersey Number : %d\n", ptr[i].jerseynumber);
        printf("Player Name : %s\n", ptr[i].name);
        printf("Runs : %d\n", ptr[i].runs);
        printf("Wickets : %d\n", ptr[i].wickets);
        printf("Matches Played : %d\n", ptr[i].matchesplayed);
        printf("\n");
    }
}