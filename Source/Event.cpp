#include<stdio.h>
#include<string.h>
#include"Player.h"
#include"ClearScreen.h"
#include "Event.h"

char narration[10001];

int checkTime(int currentTime) {
	if (currentTime == 0)
	{	
		strcpy_s(narration, "�÷��̾�� ������ ���̵��� ������ ���� �־����� �ʱ� �ں����� 7�ϵ��� �÷����ϸ�\n�ִ��� ���� ���� �ܾ��� �����ϰų� ������Ű�� ���� ��ǥ�̴�.\n�� day���� ���� �̺�Ʈ�� ������ �÷��̾��� ���ÿ� ���� �ں��� ��ų� �Ҵ´�.\n���� �ܾ��� 0���ϰ� �Ǹ� ������ ����ȴ�. ");
		printf("%s\n", narration);
		currentTime += 1;
	}

	return currentTime;
}
