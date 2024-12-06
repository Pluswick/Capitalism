#include<stdio.h>
#include<string.h>
#include"Player.h"
#include"ClearScreen.h"
#include"Event.h"
#include"TypingEffect.h"


char narration[10001];

int checkTime() {
    if (progress == 0) {
        // 최초 게임 설명
        strcpy_s(narration, sizeof(narration),
            "당신은 선택한 난이도와 직업에 따라 주어지는 초기 자본으로 7일동안\n"
            "최대한 많은 계좌 잔액을 유지하거나 증가시켜야 합니다.\n"
            "각 Day별로 랜덤한 이벤트를 겪으며 당신의 선택에 따라 자본을 얻거나 잃게 됩니다.\n"
            "계좌 잔액이 0이하가 되면 게임이 종료됩니다.\n");

        // 타자기 효과 출력
        typewriterEffect(narration, 25); // 50ms 딜레이
        printf("\n");
        getchar();
        originalClearScreen();
    }

    else if (progress == 1)
    {
        //Day1 오전 고정 스토리
        strcpy_s(narration, sizeof(narration),
            "등굣길에 웬 리무진이 선다.\n"
            "리무진에서 웬 빨간 머리, 파란 머리, 초록 머리, 검은 머리를 한 남(여)학생들이 내린다.\n"
            "여(남)학생들의 수군거리는 소리가 들린다.\n저 머리들이 선도부에 걸리는지 궁금해 계속 쳐다보다 눈이 마주쳤다.\n\n"
            "잘생겼다(예쁘다)...\n");

        // 타자기 효과 출력
        typewriterEffect(narration, 25); // 50ms 딜레이
        printf("\n");
    }

    else if (progress == 2) 
    {
        //Day1 오후 고정 스토리
        strcpy_s(narration, sizeof(narration),
            "등교 후 반장인 나는 담임 선생님을 모시러 교무실로 갔다.\n"
            "교무실엔 아침에 봤던 빨간 머리, 파란 머리, 초록 머리, 검은 머리가 있었다.\n"
            "알고 보니 넷 다 우리 반인 전학생들이었다.\n"
            "교실로 들어가니 애들은 그들은 “사대천왕”이라고 부르고 있었다…\n\n"
            "이건 아니야 - !!!\n");

        // 타자기 효과 출력
        typewriterEffect(narration, 25); // 50ms 딜레이
        printf("\n");
    }
    progress += 1;
    return 0;
}