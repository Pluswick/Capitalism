#include <stdlib.h>
#include <time.h>

#include "Random.h"

// ���� ���� �Լ� ����
int getRandomValue(const Player* player) {
    int range;

    // difficulty ���� ���� ���� ����
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
        range = 50; // �⺻�� (���� ó��)
        break;
    }

    // ���� ���� (0���� range-1����)
    return rand() % range;
}

// �ʱ�ȭ �Լ� (main.c���� ȣ��)
void initRandom() {
    srand(time(NULL)); // ���� �õ� ����
}
