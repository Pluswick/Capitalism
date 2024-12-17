#include "ClearScreen.h"
#include "Event.h"
#include "Random.h"
#include "TypingEffect.h"
#include "Ending.h"

int main() {
    Player player = setPlayer();
    // Account 초기화 (초기 계좌 잔액: 직업에따라 100000, 300000)
    Account account = initAccount(player.job);


    // 화면 초기화 및 고정 정보 출력
    modifiedClearScreen(player, account.account);
    while (1)
    {
        
        //고등학생인 경우의 이벤트 실행
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
        
        //대학생인 경우의 이벤트 실행
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

        //21번째 이벤트가 끝난 이후 엔딩 -> 추후 엔딩 관련 함수 추가해서 멀티 엔딩으로 수정
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
