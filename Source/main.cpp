#include <stdio.h>
#include "Player.h"
#include "ClearScreen.h"
#include "Event.h"
#include "Random.h"

int main() {
    Player player = setPlayer();
    // Account �ʱ�ȭ (�ʱ� ���� �ܾ�: ���������� 100000, 300000)
    Account account = initAccount(player.job);

    int randomValue = 0;

    // ȭ�� �ʱ�ȭ �� ���� ���� ���
    modifiedClearScreen(player, account.account);
    while (1)
    {
        //���� �ʱ�ȭ(NULL)
        initRandom();
        //���̵�(����)�� ���� ���� ����
        randomValue = getRandomValue(&player);
        printf("randomValue= %d\n", randomValue);
        //����л��� ����� �̺�Ʈ ����
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
