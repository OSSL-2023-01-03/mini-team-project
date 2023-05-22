#include<stdio.h>
#include<string.h>
#include "crud.h"
#include "movieList.h"

void storeData() {
    FILE* file = fopen("movieList.txt", "wt");
    if (file == NULL) {
        printf("Failed to open file for writing.\n");
        return;
    }

    if (numMovies == 0) {
        fprintf(file, "No movies found.\n");
    } else {
        for (int i = 0; i < numMovies; i++) {
            fprintf(file, "%d. %s (%d)\n", i + 1, movieList[i].title, movieList[i].year);
            fprintf(file, "   Director: %s\n", movieList[i].director);
            fprintf(file, "   Cast: %s\n", movieList[i].cast);
            fprintf(file, "   Rating: %d\n\n", movieList[i].rating);
        }
    }

    fclose(file);
    printf("Movie data stored successfully.\n");
}

int rate() {
    int index;
    printf("Enter the index of the movie you want to rate: ");
    scanf("%d", &index);

    if (index <= 0 || index > numMovies) {
        printf("Invalid movie index.\n");
        return 0;
    }

    int r;
    printf("rate movie plz(0 - 10):");
    scanf("%d", r);
    movieList[index].rating *= r;
    movieList[index].rating /= 10;
    return r;
}

void bookTicket() {
    // 영화 티켓 예매 기능의 구현 내용을 작성해주세요.
    int movieIndex;
    printf("Enter the index of the movie you want to book a ticket for: ");
    scanf("%d", &movieIndex);

    // Check if the movie index is valid
    if (movieIndex < 1 || movieIndex > numMovies) {
        printf("Invalid movie index.\n");
        return;
    }

    // Subtract 1 to match the array index
    movieIndex--;

    // Check if the movie is available for booking
    if (movieList[movieIndex].isBooked) {
        printf("This movie is already booked.\n");
        return;
    }

    // Book the ticket for the selected movie
    movieList[movieIndex].isBooked = 1;

    printf("Ticket booked successfully for the movie: %s\n", movieList[movieIndex].title);
}
