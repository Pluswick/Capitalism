#include<stdio.h>
#include<string.h>
#include"Player.h"
#include"ClearScreen.h"
#include"Event.h"
#include"TypingEffect.h"

char narration[10001];

int checkTime(int currentTime) {
    if (currentTime == 0) {
        strcpy_s(narration, sizeof(narration),
            "당신이 선택한 난이도와 직업에 따라 주어지는 초기 자본으로 7일동안\n"
            "최대한 많은 계좌 잔액을 유지하거나 증가시켜야 합니다.\n"
            "각 Day별로 랜덤한 이벤트를 겪으며 당신의 선택에 따라 자본을 얻거나 잃게 됩니다.\n"
            "계좌 잔액이 0이하가 되면 게임이 종료됩니다.");

        // 타자기 효과 출력
        typewriterEffect(narration, 25); // 50ms 딜레이
        printf("\n");

        currentTime += 1;
    }

    return currentTime;
}
