#include<stdio.h>
#include<string.h>

#include"Event.h"
#include"Player.h"
#include"Random.h"
#include"ClearScreen.h"
#include"TypingEffect.h"

int URandomEvent(struct Player player, struct Account account) 
{
    //���� �ʱ�ȭ(NULL)
    initRandom();
    //���̵�(����)�� ���� ���� ����
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
        printf("+%d��!\n", profit);
    else
        printf("%d��!\n", profit);
    account.account + profit;
    printf("�ܰ�: %d��\n", account.account);
    */
    printf("Enter Ű�� ���� �����ϼ���");
    getchar();

    return account.account;
}
