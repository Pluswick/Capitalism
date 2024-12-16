#include <stdio.h>
#include <stdlib.h>

#include "Player.h"
#include "ClearScreen.h"
#include "Event.h"
#include "Random.h"
#include "TypingEffect.h"

int main() {
    Player player = setPlayer();
    // Account �ʱ�ȭ (�ʱ� ���� �ܾ�: ���������� 100000, 300000)
    Account account = initAccount(player.job);


    // ȭ�� �ʱ�ȭ �� ���� ���� ���
    modifiedClearScreen(player, account.account);
    while (1)
    {
        
        //����л��� ����� �̺�Ʈ ����
        if (player.job==1)
        {
            account.account = HRandomEvent(player, account);

            checkTimeH();

            modifiedClearScreen(player, account.account);

        }
        
        //���л��� ����� �̺�Ʈ ����
        else if (player.job==2)
        {
            account.account = URandomEvent(player, account);

            checkTimeU();
            
            modifiedClearScreen(player, account.account);
        }

        //21��° �̺�Ʈ�� ���� ���� ���� -> ���� ���� ���� �Լ� �߰��ؼ� ��Ƽ �������� ����
        if (progress == 21 || account.account <= 0)
        {
            printf("Game Over!\n"); //�Լ��� ����
            
            break;
        }
    }

    return 0;
}
