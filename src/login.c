#include<stdio.h>
#include<string.h>
#include "login.h"

void createAccount(char * id, char * passwd) {

    printf("CreateAccount\n");
    printf("ID: ");
    scanf("%s", id);
    printf("passwd: ");
    scanf("%s", passwd);

    printf("계정이 생성되었습니다.\n");
}

Account *login(char* id, char* passwd, User * urs) {
    // 로그인 기능의 구현 내용을 작성해주세요.
}

int logout(Account *cur) {
    if(cur == NULL){
        prinf("login first plz\n");
        return 0;
    }else{
        prinf("logout complete");
        cur = NULL;
        return 1;
    }
    return -1;
}
