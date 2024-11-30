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
            "����� ������ ���̵��� ������ ���� �־����� �ʱ� �ں����� 7�ϵ���\n"
            "�ִ��� ���� ���� �ܾ��� �����ϰų� �������Ѿ� �մϴ�.\n"
            "�� Day���� ������ �̺�Ʈ�� ������ ����� ���ÿ� ���� �ں��� ��ų� �Ұ� �˴ϴ�.\n"
            "���� �ܾ��� 0���ϰ� �Ǹ� ������ ����˴ϴ�.");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration, 25); // 50ms ������
        printf("\n");

        currentTime += 1;
    }

    return currentTime;
}
