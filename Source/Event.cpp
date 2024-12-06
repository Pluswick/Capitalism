#include<stdio.h>
#include<string.h>
#include"Player.h"
#include"ClearScreen.h"
#include"Event.h"
#include"TypingEffect.h"


char narration[10001];

int checkTime() {
    if (progress == 0) {
        // ���� ���� ����
        strcpy_s(narration, sizeof(narration),
            "����� ������ ���̵��� ������ ���� �־����� �ʱ� �ں����� 7�ϵ���\n"
            "�ִ��� ���� ���� �ܾ��� �����ϰų� �������Ѿ� �մϴ�.\n"
            "�� Day���� ������ �̺�Ʈ�� ������ ����� ���ÿ� ���� �ں��� ��ų� �Ұ� �˴ϴ�.\n"
            "���� �ܾ��� 0���ϰ� �Ǹ� ������ ����˴ϴ�.\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration, 25); // 50ms ������
        printf("\n");
        getchar();
        originalClearScreen();
    }

    else if (progress == 1)
    {
        //Day1 ���� ���� ���丮
        strcpy_s(narration, sizeof(narration),
            "��濡 �� �������� ����.\n"
            "���������� �� ���� �Ӹ�, �Ķ� �Ӹ�, �ʷ� �Ӹ�, ���� �Ӹ��� �� ��(��)�л����� ������.\n"
            "��(��)�л����� �����Ÿ��� �Ҹ��� �鸰��.\n�� �Ӹ����� �����ο� �ɸ����� �ñ��� ��� �Ĵٺ��� ���� �����ƴ�.\n\n"
            "�߻����(���ڴ�)...\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration, 25); // 50ms ������
        printf("\n");
    }

    else if (progress == 2) 
    {
        //Day1 ���� ���� ���丮
        strcpy_s(narration, sizeof(narration),
            "� �� ������ ���� ���� �������� ��÷� �����Ƿ� ����.\n"
            "�����ǿ� ��ħ�� �ô� ���� �Ӹ�, �Ķ� �Ӹ�, �ʷ� �Ӹ�, ���� �Ӹ��� �־���.\n"
            "�˰� ���� �� �� �츮 ���� ���л����̾���.\n"
            "���Ƿ� ���� �ֵ��� �׵��� �����õ�ա��̶�� �θ��� �־��١�\n\n"
            "�̰� �ƴϾ� - !!!\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration, 25); // 50ms ������
        printf("\n");
    }
    progress += 1;
    return 0;
}