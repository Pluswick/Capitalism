#include"ClearScreen.h"
#include"Event.h"
#include"TypingEffect.h"
#include"Ending.h"

const char *colors[] = {"����", "�Ķ�", "�ʷ�", "����"};

void brokeEnding(int balance)
{
    //printf("�ܰ� 0�� ���ϰ� �Ǿ����ϴ�.\n������ �� �� �����غ�����!\n");
    typewriterEffect("�ܰ� 0�� ���ϰ� �Ǿ����ϴ�.\n������ �� �� �����غ�����!\n");
}

void trueEnding(int chosenLover)
{
    printf("\n");
    typewriterEffect(colors[chosenLover]);
    typewriterEffect(" �Ӹ��� ����� �޾��־���.\n");
    typewriterEffect(colors[chosenLover]);
    typewriterEffect("�� ��Ʈ ����\n\n");
}

void badEnding_m(int chosenLover)
{
    printf("\n");
    typewriterEffect(colors[chosenLover]);
    typewriterEffect(" �Ӹ��� ���� �� ���� ����� �ȴٸ� ����� �����ߴ�.\n");
    typewriterEffect(colors[chosenLover]);
    typewriterEffect("�� ���� ����\n\n");
}

void badEnding_l(int chosenLover)
{
    printf("\n");
    typewriterEffect(colors[chosenLover]);
    typewriterEffect(" �Ӹ��� ���� �������� �ʴ´ٸ� ����� �����ߴ�.\n");
    typewriterEffect(colors[chosenLover]);
    typewriterEffect("�� ���� ��Ʈ ����\n\n");
}

int endingChoice(Player* player)
{
    int choice = -1;

    originalClearScreen();
    //������ ���� ��Ʈ
    if (player->job == 1)
    {
        narration = (char*)malloc(buffer_size * sizeof(char));
        if (narration == NULL) {
            printf("narration ���� �޸� �Ҵ� ����\n");

            exit(1);
        }

        strcpy_s(narration, buffer_size,
            "��������μ� ���θ� �ϴ� ���� ��â������\n"
            "��¼�� ������������ �𸣴� ��ũ�� ��ȸ�� ã�ƿԴ�.\n"
            "���õ���� ��� ������ �ŷ��� �ְ�\n"
            "��ΰ� ���� �����ϴ� �͸� ����.\n"
            "��¼�� ������ ���� ������ �ѹ� ��⸦ ���� �������.\n\n"
            "�������� �� ������ ����ұ�?\n"
            "(������ �÷��̾��� �ܰ�� ���±��� �̺�Ʈ���� �߻��� ȣ������ ������ ��Ĩ�ϴ�.)\n"
            "(����� ����� ��ȣ�� �������ּ���: 1.���� 2.�Ķ� 3.�ʷ� 4.����)\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration); // 50ms ������
        printf("\n");

        // �޸� ����
        free(narration);
        narration = NULL;

    }

    else if (player->job==2)
    {
        narration = (char*)malloc(buffer_size * sizeof(char));
        if (narration == NULL) {
            printf("narration ���� �޸� �Ҵ� ����\n");

            exit(1);
        }

        strcpy_s(narration, buffer_size,
            "�ƹ����� �����Ե� �αٵα� ķ�۽� �������� ���۵� �͸� ����.\n"
            "�׷��� ����̴�.\n"
            "����ü ������ �����ؾ� �ұ�?\n"
            "������ �ŷ��� �ְ� ��ΰ� ���� �����ϴ� �͸� ����.\n\n"
            "�������� �� ������ ����ұ�?\n"
            "(������ �÷��̾��� �ܰ�� ���±��� �̺�Ʈ���� �߻��� ȣ������ ������ ��Ĩ�ϴ�.)\n"
            "(����� ����� ��ȣ�� �������ּ���: 1.���� 2.�Ķ� 3.�ʷ� 4.����)\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration); // 50ms ������
        printf("\n");

        // �޸� ����
        free(narration);
        narration = NULL;

    }
    

    while (1)
    {
        narration = (char*)malloc(buffer_size * sizeof(char));
        if (narration == NULL) {
            printf("narration ���� �޸� �Ҵ� ����\n");

            exit(1);
        }

        printf("��ȣ�� �Է����ּ���(1~4): ");
        scanf_s("%d", &choice);

        switch (choice)
        {
        case '1':
            strcpy_s(narration, buffer_size,
                "�峭������ Ȱ���� ���� �Ӹ� ���� ����� ����.\n"
                "���� �Ӹ����� �� ������ �������.\n"
            );
            typewriterEffect(narration); // 25ms ������
            printf("\n");

            break;

        case '2':
            strcpy_s(narration, buffer_size,
                "�����⸸ �� �� ���� �Ķ� �Ӹ��� ���� �����ϰ� �����ϴ� ����� ��������.\n"
                "�Ķ� �Ӹ����� �� ������ �������.\n"
            );
            typewriterEffect(narration); // 50ms ������
            printf("\n");

            break;

        case '3':
            strcpy_s(narration, buffer_size,
                "�������� �ź�ο� �������� �ʷ� �Ӹ����� ���� ���������.\n"
                "�ʷ� �Ӹ����� �� ������ �������.\n"
            );
            typewriterEffect(narration); // 50ms ������
            printf("\n");

            break;

        case '4':
            strcpy_s(narration, buffer_size,
                "��п� ������ ���� �Ӹ��� ������ �ٰ����鼭 ���� �� �ñ������� ������ ���Դ�.\n"
                "���� �Ӹ����� �� ������ �������.\n"
            );
            typewriterEffect(narration); // 50ms ������
            printf("\n");

            break;

        default:
            printf("1~4 �� ��ȣ�� �������ּ���.\n");
            continue;
        }
        // �޸� ����
        free(narration);
        narration = NULL;

        break;
    }

    while (getchar() != '\n'); // ���� �Է� ���� ����
    printf("Enter Ű�� ���� �����ϼ���");

    getchar(); // ����� �Է� ���

    return choice - 1;
}

void endingResult(Account* account, int chosenLover) {
    if (account->account >= 50000)
    {
        if (account->lover[0][chosenLover] >= 4)
        {
            trueEnding(chosenLover);
        }
        else
        {
            badEnding_l(chosenLover);
        }
    }

    else
    {
        badEnding_m(chosenLover);
    }
}