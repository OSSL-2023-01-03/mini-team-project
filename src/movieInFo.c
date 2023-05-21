#include <stdio.h>
#include "movieInfo.h"
#include "movieList.h"

void updateMovieInfo() {
    int index;

    printf("Enter the index of the movie you want to update: ");
    scanf("%d", &index);

    if (index <= 0 || index > numMovies) {
        printf("Invalid movie index.\n");
        return;
    }

    struct Movie* movie = &movieList[index - 1];

    printf("Enter new movie title: ");
    scanf(" %[^\n]s", movie->title);

    printf("Enter new movie year: ");
    scanf("%d", &movie->year);

    printf("Enter new movie director: ");
    scanf(" %[^\n]s", movie->director);

    printf("Enter new movie cast: ");
    scanf(" %[^\n]s", movie->cast);

    printf("Enter new movie rating: ");
    scanf("%d", &movie->rating);

    printf("Movie information updated successfully!\n");
}

void deleteMovieInfo() {
    int index;

    printf("Enter the index of the movie you want to delete: ");
    scanf("%d", &index);

    if (index <= 0 || index > numMovies) {
        printf("Invalid movie index.\n");
        return;
    }

    // Shift elements to fill the gap
    for (int i = index - 1; i < numMovies - 1; i++) {
        movieList[i] = movieList[i + 1];
    }

    numMovies--;

    printf("Movie information deleted successfully!\n");
}
