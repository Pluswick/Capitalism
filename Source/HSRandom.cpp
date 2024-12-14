#include<stdio.h>
#include<string.h>

#include"Event.h"
#include"Player.h"
#include"ClearScreen.h"
#include"TypingEffect.h"
#include"Random.h"

int HRandomEvent(struct Player player,struct Account account) 
{
    //난수 초기화(NULL)
    initRandom();
    //난이도(범위)에 따라 난수 생성
    randomValue = getRandomValue(&player);
    printf("randomValue= %d\n", randomValue);

    char text[10001] = {};
    char answer = 'd';
    int profit = 0;

    //progress = 1, Day1's day
    if (progress == 1)
    {
        if (0 <= randomValue && randomValue < 25)
        {
            strcpy_s(text, sizeof(text),
                "등굣길에 학교 서열 32위를 발견했다.\n"
                "얘랑 싸워서 이기면 내가 서열32위인데…\n"
                "(나는 서열 103위다.)\n\n"
                "결투를 신청할까?\n");
            typewriterEffect(text, 25); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "\n내가 이길 것 같아 시비를 걸었지만\n"
                        "그대로 수플렉스로 꽂혀졌다…\n"
                        "병원을 가봐야만 할 것 같다.\n\n");
                    typewriterEffect(text, 25);
                    profit = -40000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "\n승산이 없어 보여 얌전히 지나가려는데\n"
                        "그대로 삥을 뜯겼다...\n\n");
                    typewriterEffect(text, 25);
                    profit = -30000; //선택지에 따른 손익
                    break;
                default:
                    strcpy_s(text, sizeof(text),
                        "Y(y), N(n) 으로 선택해주세요.\n"
                        "\n\n");
                    typewriterEffect(text, 25);
                    continue;
                }
                break;
            }
            
        }



        else if (25 <= randomValue && randomValue < 50)
        {
            strcpy_s(text, sizeof(text),
                "등굣길에 차도 건너편에서 나와 친한 친구들을 발견했다.\n"
                "뛰어가서 친구들과 같이 등교할까?\n\n");
            typewriterEffect(text, 25); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "y 선택지\n");
                    typewriterEffect(text, 25); // 25ms 딜레이
                    printf("\n");
                    profit = 10000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "y 선택지\n");
                    typewriterEffect(text, 25); // 50ms 딜레이
                    profit = -10000; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
            
        }

        else if (50 <= randomValue && randomValue < 75)
        {
            strcpy_s(text, sizeof(text),
                "50~74 이벤트의 텍스트\n");
            typewriterEffect(text, 25); // 25ms 딜레이
            printf("\n");
        }

        else if (75 <= randomValue && randomValue < 100)
        {
            strcpy_s(text, sizeof(text),
                "75~99 이벤트의 텍스트\n");
            typewriterEffect(text, 25); // 25ms 딜레이
            printf("\n");
        }
        

        
    }
    if (0<progress && progress<21)
    {
        if (profit > 0)
            printf("+%d원!\n", profit);

        else if (profit < 0)
            printf("%d원!\n", profit);

        account.account += profit;

        printf("Enter 키를 눌러 진행하세요");

        while (getchar() != '\n'); // 이전 입력 버퍼 비우기
        getchar(); // 사용자 입력 대기
    }
    return account.account;
}