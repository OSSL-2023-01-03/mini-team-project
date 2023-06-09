#include<stdio.h>
#include<string.h>
#include "movieList.h"
#include "login.h"

void createAccount(Account * urs) {

    char temp_id[30], temp_pw[30];
    printf("CreateAccount\n");
    printf("ID: ");
    scanf("%s", temp_id);
    printf("passwd: ");
    scanf("%s", temp_pw);
    strcpy(urs->id, temp_id);
    strcpy(urs->pw, temp_pw);
    
    printf("계정이 생성되었습니다.\n");
}

Account* login(char* id, char* passwd, User * urs) {
    User * temp = urs;
    while(temp != NULL){
        if (strcmp(id, temp->data->id) == 0 && strcmp(passwd, temp->data->pw) == 0) {
            printf("로그인 성공\n");
            return temp->data;
        } 
        temp = temp->next;
    }
    printf("로그인 실패\n");
    return NULL;
}

int logout(Account *cur) {
    if(cur == NULL){
        printf("login first plz\n");
        return 0;
    }else{
        printf("logout complete\n");
        cur = NULL;
        return 1;
    }
    return -1;
}
