#include "ClearScreen.h"
#include "Event.h"
#include "Random.h"
#include "TypingEffect.h"
#include "Ending.h"

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

            switch (progress)
            {
            case 0:
            case 1:
            case 9:
                checkTimeH();
                break;
            default:
                break;
            }
        }
        
        //���л��� ����� �̺�Ʈ ����
        else if (player.job==2)
        {
            account.account = URandomEvent(player, account);

            switch (progress)
            {
            case 0:
            case 1:
            case 9:
                checkTimeU();
                break;
            default:
                break;
            }
        }

        if (account.account <= 0)
        {
            originalClearScreen();
            brokeEnding(account.account);

            break;
        }

        //21��° �̺�Ʈ�� ���� ���� ���� -> ���� ���� ���� �Լ� �߰��ؼ� ��Ƽ �������� ����
        if (progress == 21)
        {
            originalClearScreen();

            int lover = endingChoice(&player);
            endingResult(&account, lover);
            
            break;
        }

        progress++;
        modifiedClearScreen(player, account.account);
    }
    printf("Game Over!\n");

    return 0;
}
