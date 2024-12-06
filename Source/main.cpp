#include <stdio.h>
#include "Player.h"
#include "ClearScreen.h"
#include "Event.h"
#include "Random.h"

int main() {
    Player player = setPlayer();
    // Account 초기화 (초기 계좌 잔액: 직업에따라 100000, 300000)
    Account account = initAccount(player.job);

    int randomValue = 0;

    // 화면 초기화 및 고정 정보 출력
    modifiedClearScreen(player, account.account);
    while (1)
    {
        //난수 초기화(NULL)
        initRandom();
        //난이도(범위)에 따라 난수 생성
        randomValue = getRandomValue(&player);
        printf("randomValue= %d\n", randomValue);
        //고등학생인 경우의 이벤트 실행
        if (player.job==1)
        {
            checkTime();
            HRandomEvent(player, account, randomValue);
            getchar();
            modifiedClearScreen(player, account.account);
        }
        if (player.job==2)
        {
            checkTime();
            URandomEvent(player, account, randomValue);
            getchar();
            modifiedClearScreen(player, account.account);
        }
        
    }

    return 0;
}
