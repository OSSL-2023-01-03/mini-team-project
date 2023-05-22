#include<stdio.h>
#include "crud.h"
#include "movieList.h"

void read() {
    // 데이터 읽기 기능의 구현 내용을 작성해주세요.
}
void deleteObj() {
    // 객체 삭제 기능의 구현 내용을 작성해주세요.
}

void updateObj() {
    // 객체 업데이트 기능의 구현 내용을 작성해주세요.
}

void loadData() {
    // 데이터 로드 기능의 구현 내용을 작성해주세요.
}

void storeData() {
    FILE* file = fopen("movieList.txt", "w");
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

void rate() {
    // 영화 평점 매기기 기능의 구현 내용을 작성해주세요.
}

void bookTicket() {
    // 영화 티켓 예매 기능의 구현 내용을 작성해주세요.
}
