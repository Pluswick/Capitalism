#include <stdio.h>
#include "Player.h"
#include "ClearScreen.h"
#include "Event.h"

int main() {
    Player player = setPlayer();
    
    

    Account account;

    // Account �ʱ�ȭ (�ʱ� ���� �ܾ�: 1000)
    initAccount(&account, player.job);

    // ȭ�� �ʱ�ȭ �� ���� ���� ���
    modifiedClearScreen(player, account.account);

    checkTime(time);

    getchar();
    return 0;
}
