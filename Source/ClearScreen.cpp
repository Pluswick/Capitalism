#include <stdio.h>
#include <stdlib.h>
#include "ClearScreen.h"
#include "Player.h"

// 화면 초기화 함수 (기본 버전)
void originalClearScreen() {
#ifdef _WIN32
    system("cls");   // Windows 명령
#else
    system("clear"); // Linux/Unix 명령
#endif
}

// 화면 초기화 및 Player 정보 출력 함수
void modifiedClearScreen(struct Player player, int balance) {
    originalClearScreen(); // 먼저 화면 초기화

    // Player 정보 출력
    printf("Name: %s\t", player.name);

    // job 문자열 출력
    switch (player.job) {
    case 1:
        printf("Job: 고등학생\t");
        break;
    case 2:
        printf("Job: 대학생\t");
        break;
    case 3:
        printf("Job: 직장인\t");
        break;
    case 4:
        printf("Job: 사업가\t");
        break;
    }

    // difficulty 문자열 출력
    switch (player.difficulty) {
    case 1:
        printf("Difficulty: Easy\t");
        break;
    case 2:
        printf("Difficulty: Normal\t");
        break;
    case 3:
        printf("Difficulty: Hard\t");
        break;
    }

    printf("Balance: %d\n\n", balance);

}
