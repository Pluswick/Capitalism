#include<stdio.h>
#include<string.h>
#include"Player.h"
#include"ClearScreen.h"
#include "Event.h"

char narration[10001];

int checkTime(int currentTime) {
	if (currentTime == 0)
	{	
		strcpy_s(narration, "플레이어는 선택한 난이도와 직업에 따라 주어지는 초기 자본으로 7일동안 플레이하며\n최대한 많은 계좌 잔액을 유지하거나 증가시키는 것이 목표이다.\n각 day별로 랜덤 이벤트를 겪으며 플레이어의 선택에 따라 자본을 얻거나 잃는다.\n계좌 잔액이 0이하가 되면 게임이 종료된다. ");
		printf("%s\n", narration);
		currentTime += 1;
	}

	return currentTime;
}
