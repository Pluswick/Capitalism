#ifndef RAND_H
#define RAND_H

#include "Player.h" // Player ����ü�� ����ϱ� ���� ����

extern int randomValue;

// ���� ���� �Լ� ����
int getRandomValue(const Player* player);
void initRandom();

#endif
