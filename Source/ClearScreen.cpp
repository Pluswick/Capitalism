#include <stdio.h>
#include <stdlib.h>
#include "ClearScreen.h"
#include "Player.h"

// ȭ�� �ʱ�ȭ �Լ� (�⺻ ����)
void originalClearScreen() {
#ifdef _WIN32
    system("cls");   // Windows ���
#else
    system("clear"); // Linux/Unix ���
#endif
}

// ȭ�� �ʱ�ȭ �� Player ���� ��� �Լ�
void modifiedClearScreen(struct Player player, int balance) {
    originalClearScreen(); // ���� ȭ�� �ʱ�ȭ

    // Player ���� ���
    printf("Name: %s\t", player.name);

    // job ���ڿ� ���
    switch (player.job) {
    case 1:
        printf("Job: ����л�\t");
        break;
    case 2:
        printf("Job: ���л�\t");
        break;
    case 3:
        printf("Job: ������\t");
        break;
    case 4:
        printf("Job: �����\t");
        break;
    }

    // difficulty ���ڿ� ���
    switch (player.difficulty) {
    case 1:
        printf("Difficulty: Easy\t");
        break;
    case 2:
        printf("Difficulty: Normal\t");
        break;
    case 3:
        printf("Difficulty: Hard\t");
        break;
    }

    printf("Balance: %d\n\n", balance);

}
