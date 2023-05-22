#include<stdio.h>
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
    int numGood = 0;
    int numTotal = 0;
    char rating[10];

    printf("Rate the movie (good/bad): ");
    scanf("%s", rating);

    // 입력된 평가를 기반으로 긍정적인 평가인지 판별하고 개수를 증가시킴
    if (strcmp(rating, "good") == 0) {
        numGood++;
    }

    numTotal++;

    // 긍정 비율 계산
    int positivityRatio = (int)(((double)numGood / (double)numTotal) * 100);

    return positivityRatio;
}

void bookTicket() {
    // 영화 티켓 예매 기능의 구현 내용을 작성해주세요.
}
