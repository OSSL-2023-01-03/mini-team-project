#include "people.h"

int addPeople(){
        int member;
        while(1){
                printf("구매인원(8명까지 구매 가능) ");
                scanf("%d", &member);
                if(member <= 8 && member > 0 )
                        break;
                else
                        printf("구매 인원을 확인해 주세요. \n");
        }

        return member;
}

void displayPeople(int member){
        printf("%d명선택\n", member);


}
