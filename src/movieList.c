#include <stdio.h>
#include "movieList.h"

struct Movie movieList[MAX_MOVIES];
int numMovies = 0;

void displayMovieList() {
    printf("\n********List of Movies********\n");

    if (numMovies == 0) {
        printf("No movies found.\n");
    } else {
        for (int i = 0; i < numMovies; i++) {
            printf("%d. %s (%d)\n", i + 1, movieList[i].title, movieList[i].year);
            printf("   Director: %s\n", movieList[i].director);
            printf("   Cast: %s\n", movieList[i].cast);
            printf("   Rating: %d\n\n", movieList[i].rating);
        }
    }
}

void addMovieToList() {
    if (numMovies == MAX_MOVIES) {
        printf("Maximum number of movies reached. Cannot add more.\n");
        return;
    }

    struct Movie newMovie;

    printf("Enter movie title: ");
    scanf(" %[^\n]s", newMovie.title);

    printf("Enter movie year: ");
    scanf("%d", &newMovie.year);

    printf("Enter movie director: ");
    scanf(" %[^\n]s", newMovie.director);

    printf("Enter movie cast: ");
    scanf(" %[^\n]s", newMovie.cast);

    printf("Enter movie rating: ");
    scanf("%d", &newMovie.rating);

    movieList[numMovies] = newMovie;
    numMovies++;

    printf("Movie added successfully!\n");
}