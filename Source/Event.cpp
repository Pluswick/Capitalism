#include<stdio.h>
#include<string.h>
#include"Player.h"
#include"ClearScreen.h"
#include"Event.h"
#include"TypingEffect.h"


char narration[10001];

int dRepeat[9] = { 0, };
int aRepeat[9] = { 0, };
int nRepeat[9] = { 0, };

int checkTimeH() {
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
        printf("Enter Ű�� ���� �����ϼ���");
        getchar();
        originalClearScreen();


        originalClearScreen();
        //Day1 ���� ����л� ���� ���丮
        strcpy_s(narration, sizeof(narration),
            "��濡 �� �������� ����.\n"
            "���������� �� ���� �Ӹ�, �Ķ� �Ӹ�, �ʷ� �Ӹ�, ���� �Ӹ��� �� ��(��)�л����� ������.\n"
            "��(��)�л����� �����Ÿ��� �Ҹ��� �鸰��.\n�� �Ӹ����� �����ο� �ɸ����� �ñ��� ��� �Ĵٺ��� ���� �����ƴ�.\n\n"
            "�߻����(���ڴ�)...\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration, 25); // 50ms ������
        printf("\n");
        printf("Enter Ű�� ���� �����ϼ���");
        getchar();
    }
    

    else if (progress == 1) 
    {
        originalClearScreen();
        //Day1 ���� ����л� ���� ���丮
        strcpy_s(narration, sizeof(narration),
            "� �� ������ ���� ���� �������� ��÷� �����Ƿ� ����.\n"
            "�����ǿ� ��ħ�� �ô� ���� �Ӹ�, �Ķ� �Ӹ�, �ʷ� �Ӹ�, ���� �Ӹ��� �־���.\n"
            "�˰� ���� �� �� �츮 ���� ���л����̾���.\n"
            "���Ƿ� ���� �ֵ��� �׵��� �����õ�ա��̶�� �θ��� �־��١�\n\n"
            "�̰� �ƴϾ� - !!!\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration, 25); // 50ms ������
        printf("\n");
        printf("Enter Ű�� ���� �����ϼ���");
        getchar();

    }
    progress += 1;
    return 0;
}

int checkTimeU() {
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
        printf("Enter Ű�� ���� �����ϼ���");
        getchar();
        originalClearScreen();
        
        //Day1 ���� ���л� ���� ���丮
        strcpy_s(narration, sizeof(narration),
            "���õ� ����� ������ ������ Ÿ�� ������ ��ħ�� �����Ѵ�.\n"
            "��ҿ� ������ ���� ����.\n"
            "�����غ��� ���� ���н��� �ִٰ� ������ ����°� �����.\n\n"
            "��ư �װ� �߿��Ѱ� �ƴ϶� ���� 8�� 59�����ݾ�!!!\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration, 25); // 50ms ������
        printf("\n");
        printf("Enter Ű�� ���� �����ϼ���");
        getchar();

    }

    else if (progress == 1)
    {
        originalClearScreen();
        //Day1 ���� ���� ���丮
        strcpy_s(narration, sizeof(narration),
            "�ܿ�ܿ� �⼮�� ������������ ��� �����ϰ� �� ���� ƴ�� ���� ����������� ���Ѵ�.\n"
            "�������� ���Ի����� ���̴� ���� �Ӹ�, �Ķ� �Ӹ�, �ʷ� �Ӹ�, ���� �Ӹ��� �־���.\n"
            "������� �� ���� �� �� �� ���� ����б� ������� �����ϴٳ� ����.\n"
            "������ ��Ʃ��� ������ �ϸ鼭 �º��� �����۰Ÿ���.\n\n"
            "��𼱰� �ü��� �������µ�..?\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration, 25); // 50ms ������
        printf("\n");
        printf("Enter Ű�� ���� �����ϼ���");
        getchar();

    }
    progress += 1;
    return 0;
}