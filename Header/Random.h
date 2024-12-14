#ifndef RAND_H
#define RAND_H

#include "Player.h" // Player 구조체를 사용하기 위해 포함

extern int randomValue;

// 난수 생성 함수 선언
int getRandomValue(const Player* player);
void initRandom();

#endif
