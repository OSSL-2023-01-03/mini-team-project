#include "check.h"
#include <string.h>


void displayCheck(int member){
        char s1[10];
        char st[10];
        for(int i = 0; i < member; i++){
                printf("좌석을 선택하세요.");
                scanf("%s", st);
                printf("%s확인\n", st);
        }
        printf("예약되었습니다.\n");

}
