#ifndef MOVIELIST_H
#define MOVIELIST_H

#define MAX_MOVIES 100

struct Movie {
    int isBooked;
    char title[100];
    int year;
    char director[100];
    char cast[100];
    int rating;
};

extern struct Movie movieList[MAX_MOVIES];
extern int numMovies;

void displayMovieList();
void addMovieToList();
void updateMovieInfo();
void deleteMovieInfo();
void printMovieList();

#endif  /* MOVIELIST_H */
