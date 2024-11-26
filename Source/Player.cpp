#include <stdio.h>
#include <string.h>
#include "Player.h"
#include "ClearScreen.h"
int time = 0;

Player setPlayer() {
    Player player;
    char confirm='n';

    while (confirm == 'n' || confirm == 'N'){
        // name �Է�
        printf("Enter name: ");
        fgets(player.name, sizeof(player.name), stdin);
        player.name[strcspn(player.name, "\n")] = '\0';  // �ٹٲ� ���� ����

        originalClearScreen();
        // job �Է�
        do {
            printf("���� ����\n1.����л�\n2.���л�\n: ");
            if (scanf_s("%d", &player.job) != 1) { // ���ڰ� �ƴ� ���
                printf("�߸��� �Է��Դϴ�. ���ڸ� �Է����ּ���.\n");

                // ���ۿ� ���� �ִ� �߸��� �Է� ����
                while (getchar() != '\n');

                player.job = 0; // �߸��� ������ ������ �ݺ� ����
            }
            else if (player.job < 1 || player.job > 2) { // ������ ��� ���
                printf("�߸��� �����Դϴ�. �ٽ� �Է����ּ���.\n");
            }
        } while (player.job < 1 || player.job > 2);

        // �Է� ���� ����
        while (getchar() != '\n');

        originalClearScreen();
        // difficulty �Է�
        do {
            printf("���̵� ����\n1.Easy\n2.Normal\n3.Hard\n: ");
            if (scanf_s("%d", &player.difficulty) != 1) { // ���ڰ� �ƴ� ���
                printf("�߸��� �Է��Դϴ�. ���ڸ� �Է����ּ���.\n");

                // �Է� ���� ����
                while (getchar() != '\n');

                player.difficulty = 0; // �߸��� ������ �����Ͽ� �ݺ� ����
            }
            else if (player.difficulty < 1 || player.difficulty > 3) { // ������ ��� ���
                printf("�߸��� �����Դϴ�. �ٽ� �Է����ּ���.\n");
            }
        } while (player.difficulty < 1 || player.difficulty > 3);

        // �Է� ���� ����
        while (getchar() != '\n');

        originalClearScreen();
        // �Էµ� ���� ���
        printf("Player Information:\n");
        printf("Name: %s\n", player.name);

        // job ���ڿ� ���
        switch (player.job) {
        case 1:
            printf("Job: ����л�\n");
            break;
        case 2:
            printf("Job: ���л�\n");
            break;
        case 3:
            printf("Job: ������\n");
            break;
        case 4:
            printf("Job: �����\n");
            break;
        }

        // difficulty ���ڿ� ���
        switch (player.difficulty) {
        case 1:
            printf("Difficulty: Easy\n");
            break;
        case 2:
            printf("Difficulty: Normal\n");
            break;
        case 3:
            printf("Difficulty: Hard\n");
            break;
        }

        // �ٽ� �Է� ���� Ȯ��
        while (1) { // �ùٸ� �Է��� ���� ������ �ݺ�
            printf("\n�Է��� ������ �½��ϱ�? (y/n): ");
            confirm = getchar(); // ����� �Է� �ޱ�
            while (getchar() != '\n'); // ���� �ִ� ��� ���� ����

            // ��ȿ�� �Է����� Ȯ��
            if (confirm == 'y' || confirm == 'Y' || confirm == 'n' || confirm == 'N') {
                break; // �ùٸ� �Է��̸� �ݺ� ����
            }

            printf("�߸��� �Է��Դϴ�. 'y', 'Y', 'n', 'N' �߿��� �ٽ� �Է��ϼ���.\n");
        }

    }

    return player;
}
