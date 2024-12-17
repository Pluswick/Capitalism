#include "ClearScreen.h"

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

    printf("Balance: %d\n", balance);

    //���� �����Ȳ ���
    if (0 < progress &&progress < 21)
    {
        int day = (progress - 1) / 3 + 1;
        printf("Day%d's ", day);

        // �ð��� ����
        switch (progress % 3) {
        case 1:
            printf("day\n\n");
            break;
        case 2:
            printf("afternoon\n\n");
            break;
        case 0:
            printf("night\n\n");
            break;
        default:
            printf("Invalid time\n���α׷��� ����� ���ּ���.\n");
            exit(1); // ���α׷� ��� �ߴ�
        }
    }
    else if (progress < 0 || progress > 21)
    {
        printf("Invalid progress value\n���α׷��� ����� ���ּ���.\n");
        exit(1); // ���α׷� ��� �ߴ�
    }

}
