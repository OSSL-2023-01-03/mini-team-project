#ifndef LOGIN_H
#define LOGIN_H

#include <stdio.h>

typedef struct ac{
    char id[30];
    char pw[30];
}Account;

typedef struct users{
    Account data;
    struct users * next;
}User;


int createAccount();
int login(char* id, char* passwd, User*);
int logout(Account *cur);

#endif
