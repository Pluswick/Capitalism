#include<stdio.h>
#include<string.h>

#include"Event.h"
#include"Player.h"
#include"Random.h"
#include"ClearScreen.h"
#include"TypingEffect.h"



void URandomEvent(struct Player player, struct Account account, int randomValue) 
{
    char text[10001] = {};
    char answer = 'd';
    int profit = 0;

    //progress = 1, Day1's day
    if (progress == 1) {
        if (0 <= randomValue < 25)
        {
            strcpy_s(text, sizeof(text),
                "0~24 이벤트의 텍스트\n");
            typewriterEffect(text, 25); // 50ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    printf("y 선택지\n");
                    profit = 10000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    printf("n 선택지\n");
                    profit = -10000; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
            
        }

        else if (25 <= randomValue < 50)
        {
            strcpy_s(text, sizeof(text),
                "25~49 이벤트의 텍스트\n");
            typewriterEffect(text, 25); // 50ms 딜레이
            printf("\n");
        }

        else if (50 <= randomValue < 75)
        {
            strcpy_s(text, sizeof(text),
                "50~74 이벤트의 텍스트\n");
            typewriterEffect(text, 25); // 50ms 딜레이
            printf("\n");
        }

        else if (75 <= randomValue < 100)
        {
            strcpy_s(text, sizeof(text),
                "75~99 이벤트의 텍스트\n");
            typewriterEffect(text, 25); // 50ms 딜레이
            printf("\n");
        }
    }
        /*strcpy_s(narration, sizeof(narration),
            "당신은 선택한 난이도와 직업에 따라 주어지는 초기 자본으로 7일동안\n"
            "최대한 많은 계좌 잔액을 유지하거나 증가시켜야 합니다.\n"
            "각 Day별로 랜덤한 이벤트를 겪으며 당신의 선택에 따라 자본을 얻거나 잃게 됩니다.\n"
            "계좌 잔액이 0이하가 되면 게임이 종료됩니다.\n");

        // 타자기 효과 출력
        typewriterEffect(narration, 25); // 50ms 딜레이
        printf("\n");*/

}
