#include <stdio.h>
#include "Player.h"
#include "ClearScreen.h"
#include "Event.h"

int main() {
    Player player = setPlayer();
    
    

    Account account;

    // Account 초기화 (초기 계좌 잔액: 1000)
    initAccount(&account, player.job);

    // 화면 초기화 및 고정 정보 출력
    modifiedClearScreen(player, account.account);

    checkTime(time);

    getchar();
    return 0;
}
