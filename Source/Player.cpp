#include <stdio.h>
#include <string.h>
#include "Player.h"
#include "ClearScreen.h"
int time = 0;

Player setPlayer() {
    Player player;
    char confirm='n';

    while (confirm == 'n' || confirm == 'N'){
        // name 입력
        printf("Enter name: ");
        fgets(player.name, sizeof(player.name), stdin);
        player.name[strcspn(player.name, "\n")] = '\0';  // 줄바꿈 문자 제거

        originalClearScreen();
        // job 입력
        do {
            printf("직업 선택\n1.고등학생\n2.대학생\n: ");
            if (scanf_s("%d", &player.job) != 1) { // 숫자가 아닌 경우
                printf("잘못된 입력입니다. 숫자를 입력해주세요.\n");

                // 버퍼에 남아 있는 잘못된 입력 제거
                while (getchar() != '\n');

                player.job = 0; // 잘못된 값으로 설정해 반복 유지
            }
            else if (player.job < 1 || player.job > 2) { // 범위를 벗어난 경우
                printf("잘못된 선택입니다. 다시 입력해주세요.\n");
            }
        } while (player.job < 1 || player.job > 2);

        // 입력 버퍼 비우기
        while (getchar() != '\n');

        originalClearScreen();
        // difficulty 입력
        do {
            printf("난이도 선택\n1.Easy\n2.Normal\n3.Hard\n: ");
            if (scanf_s("%d", &player.difficulty) != 1) { // 숫자가 아닌 경우
                printf("잘못된 입력입니다. 숫자를 입력해주세요.\n");

                // 입력 버퍼 비우기
                while (getchar() != '\n');

                player.difficulty = 0; // 잘못된 값으로 설정하여 반복 유지
            }
            else if (player.difficulty < 1 || player.difficulty > 3) { // 범위를 벗어난 경우
                printf("잘못된 선택입니다. 다시 입력해주세요.\n");
            }
        } while (player.difficulty < 1 || player.difficulty > 3);

        // 입력 버퍼 비우기
        while (getchar() != '\n');

        originalClearScreen();
        // 입력된 정보 출력
        printf("Player Information:\n");
        printf("Name: %s\n", player.name);

        // job 문자열 출력
        switch (player.job) {
        case 1:
            printf("Job: 고등학생\n");
            break;
        case 2:
            printf("Job: 대학생\n");
            break;
        case 3:
            printf("Job: 직장인\n");
            break;
        case 4:
            printf("Job: 사업가\n");
            break;
        }

        // difficulty 문자열 출력
        switch (player.difficulty) {
        case 1:
            printf("Difficulty: Easy\n");
            break;
        case 2:
            printf("Difficulty: Normal\n");
            break;
        case 3:
            printf("Difficulty: Hard\n");
            break;
        }

        // 다시 입력 여부 확인
        while (1) { // 올바른 입력이 들어올 때까지 반복
            printf("\n입력한 정보가 맞습니까? (y/n): ");
            confirm = getchar(); // 사용자 입력 받기
            while (getchar() != '\n'); // 남아 있는 모든 문자 제거

            // 유효한 입력인지 확인
            if (confirm == 'y' || confirm == 'Y' || confirm == 'n' || confirm == 'N') {
                break; // 올바른 입력이면 반복 종료
            }

            printf("잘못된 입력입니다. 'y', 'Y', 'n', 'N' 중에서 다시 입력하세요.\n");
        }

    }

    return player;
}
