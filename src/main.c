#include<stdio.h>

int menuSelection(){
    int num;
    printf("\n********Welcom to HGU movie theater********\n");
    printf("select option please\n\n");

    printf("1. view list of movies\n");
    printf("2. add movie to list\n");
    printf("3. update movie's information\n");
    printf("4. delete movie's information\n");
    printf("5. save info to file\n");
    printf("6. rate movie score\n");
    printf("7. book movie ticket\n");
    printf("0. exit\n\n");

    printf("your selection: ");
    scanf("%d", &num);
    return num;
}

int main(){

    int menu;

    while(1){
        menu = menuSelection();
        if(menu == 1){

        }
        else if(menu == 2){

        }
        else if(menu == 3){

        }
        else if(menu == 4){

        }
        else if(menu == 5){

        }
        else if(menu == 6){

        }
        else if(menu == 7){

        }
        else if(menu == 0){
            pritnf("Have a good time!\n");
            break;
        }else{
            printf("Fail to fine such menu id please try again\n");
        }
    }
    return 0;
}