#include<stdio.h>
#include<string.h>

#include"Event.h"
#include"Player.h"
#include"Random.h"
#include"ClearScreen.h"
#include"TypingEffect.h"

int URandomEvent(struct Player player, struct Account account) 
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
   /* if (progress == 1) {
        if (0 <= randomValue && randomValue < 25)

        else if (25 <= randomValue && randomValue < 50)

        else if (50 <= randomValue && randomValue < 75)
        
        else if (75 <= randomValue && randomValue < 100)
        
    }
    if (profit > 0)
        printf("+%d원!\n", profit);
    else
        printf("%d원!\n", profit);
    account.account + profit;
    printf("잔고: %d원\n", account.account);
    */
    printf("Enter 키를 눌러 진행하세요");
    getchar();

    return account.account;
}
