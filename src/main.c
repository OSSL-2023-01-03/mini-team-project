#include<stdio.h>
#include<stdlib.h>

#include "crud.h"
#include "login.h"
#include "movieList.h"

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
    printf("8. resgister\n");
    printf("9. login\n");
    printf("10. logout\n");
    printf("0. exit\n\n");

    printf("your selection: ");
    scanf("%d", &num);
    return num;
}

int main(){

    int menu, cnt = 0, id = 0;
    User *userArr = (User*)malloc(sizeof(User));
    userArr->data = (Account*)malloc(sizeof(Account));
    userArr->next = NULL;
    Account *cur = NULL;
    

    while(1){
        menu = menuSelection();
        if(menu == 1){
            displayMovieList();
        }
        else if(menu == 2){
            addMovieToList();
        }
        else if(menu == 3){
            updateMovieInfo();
        }
        else if(menu == 4){
            deleteMovieInfo();
        }
        else if(menu == 5){
            storeData();
        }
        else if(menu == 6){
            rate();
        }
        else if(menu == 7){
            if(cur == NULL){
                printf("login first plz\n");
            }else{
                bookTicket();
            }
        }
        else if(menu == 8){
            User * temp = userArr;
            while(temp != NULL){
                temp = temp->next;
            }
            temp = (User*)malloc(sizeof(User));
            temp->data = (Account*)malloc(sizeof(Account));
            createAccount(temp->data);
        }
        else if(menu == 9){
            char uid[30], passwd[30];
            printf("id: ");
            scanf("%s", uid);
            printf("passwd: ");
            scanf("%s", passwd);
            
            login(uid, passwd, userArr);
        }
        else if(menu == 10){
            logout(cur);
        }
        else if(menu == 0){
            printf("Have a good time!\n");
            break;
        }else{
            printf("Fail to fine such menu id please try again\n");
        }
    }
    return 0;
}