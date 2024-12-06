#include <stdlib.h>
#include <time.h>

#include "Random.h"

// 난수 생성 함수 정의
int getRandomValue(const Player* player) {
    int range;

    // difficulty 값에 따라 범위 설정
    switch (player->difficulty) {
    case 1:
        range = 100;
        break;
    case 2:
        range = 80;
        break;
    case 3:
        range = 65;
        break;
    default:
        range = 50; // 기본값 (예외 처리)
        break;
    }

    // 난수 생성 (0부터 range-1까지)
    return rand() % range;
}

// 초기화 함수 (main.c에서 호출)
void initRandom() {
    srand(time(NULL)); // 난수 시드 설정
}
