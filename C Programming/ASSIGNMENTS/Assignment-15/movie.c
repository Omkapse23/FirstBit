#include <stdio.h>
#include <string.h>

typedef struct Movie {
    int movieid;
    char moviename[20];
    char directorname[20];
    int releaseYear;
    char genre[20];
} Movie;

void addMovie(Movie* ptr, int size);
void searchMovieByName(Movie* ptr, int size);
void updateMovie(Movie* ptr, int size);

int main() {
    Movie arr[20];
    int count = 0;

    printf("========================================\n");
    printf("               Movie Database           \n");
    printf("========================================\n");

    printf("\n");

    while(1) {
        printf("----------Main Menu----------\n");
        printf("1. Add a movie.\n");
        printf("2. Search a movie by name.\n");
        printf("3. Update movie record.\n");
        printf("4. Exit.\n");
        printf("\n");

        int choice;
        printf("Enter your choice : ");
        scanf("%d", &choice);
        printf("\n");

        if(choice == 1) {
            //add movie
            if(count < 20) {
                addMovie(&arr[count], 1);
                count++;
            } else {
                printf("All movie slots are full.\n");
            }
        } else if(choice == 2) {
            //search movie by name
            searchMovieByName(arr, count);
        } else if(choice == 3) {
            //update movie record
            updateMovie(arr, count);
        } else if(choice == 4) {
            printf("Thank you for visiting.\n");
            break;
        } else {
            printf("Invalid choice\n");
        }
    }
}

//add movie
void addMovie(Movie* ptr, int size) {
    printf("----------Add Movie Details----------\n");
    for(int i=0; i<size; i++) {
        printf("Enter Movie ID : ");
        scanf("%d", &ptr[i].movieid);
        printf("Enter Movie Name : ");
        scanf(" %19[^\n]", ptr[i].moviename);
        printf("Enter Director Name : ");
        scanf(" %19[^\n]", ptr[i].directorname);
        printf("Enter Release Year : ");
        scanf("%d", &ptr[i].releaseYear);
        printf("Enter Genre : ");
        scanf(" %19[^\n]", ptr[i].genre);

        printf("\n");
        printf("Movie added successfully.\n");
        printf("\n");
    }
}

//search movie
void searchMovieByName(Movie* ptr, int size) {
    char mname[20];
    int found = 0;

    printf("Enter Movie Name : ");
    scanf(" %19[^\n]", mname);
    printf("\n");

    for(int i=0; i<size; i++) {
        if(strcmp(ptr[i].moviename, mname) == 0) {
            printf("-----Movie Found-----\n");
            printf("Movie ID : %d\n", ptr[i].movieid);
            printf("Movie Name : %s\n", ptr[i].moviename);
            printf("Director : %s\n", ptr[i].directorname);
            printf("Release Year : %d\n", ptr[i].releaseYear);
            printf("Movie Genre : %s\n", ptr[i].genre);

            printf("\n");
            found = 1;
        }
    }

    if(found == 0) {
        printf("Movie Not Found!\n");
    }
}

//update movie
void updateMovie(Movie* ptr, int size) {
    int id, found = 0, newyear;
    char newname[20], newdirector[20], newgenre[20];

    printf("Enter Movie ID : ");
    scanf("%d", &id);
    printf("\n");

    for(int i=0; i<size; i++) {
        if(ptr[i].movieid == id) {
            printf("-----Movie Found-----\n");
            printf("Movie ID : %d\n", ptr[i].movieid);
            printf("Movie Name : %s\n", ptr[i].moviename);
            printf("Director : %s\n", ptr[i].directorname);
            printf("Release Year : %d\n", ptr[i].releaseYear);
            printf("Movie Genre : %s\n", ptr[i].genre);

            printf("\n");

            printf("Enter New Name : ");
            scanf(" %19[^\n]", newname);

            printf("Enter New Director : ");
            scanf(" %19[^\n]", newdirector);

            printf("Enter New Year : ");
            scanf("%d", &newyear);

            printf("Enter New Genre : ");
            scanf(" %19[^\n]", newgenre);

            strcpy(ptr[i].moviename, newname);
            strcpy(ptr[i].directorname, newdirector);
            ptr[i].releaseYear = newyear;
            strcpy(ptr[i].genre, newgenre);

            printf("Movie data updated successfully.\n");
            found = 1;
        }
    }

    if(found == 0) {
        printf("Movie Not Found!\n");
    }
}