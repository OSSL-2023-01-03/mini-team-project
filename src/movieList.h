#ifndef MOVIELIST_H
#define MOVIELIST_H

#define MAX_MOVIES 100

struct Movie {
    char title[100];
    int year;
    char director[100];
    char cast[100];
    int rating;
};

void displayMovieList();
void addMovieToList();

#endif
