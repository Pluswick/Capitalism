#include<stdio.h>
#include<string.h>

#include"Event.h"
#include"Player.h"
#include"ClearScreen.h"
#include"TypingEffect.h"
#include"Random.h"

int HRandomEvent(struct Player player,struct Account account) 
{
    //���� �ʱ�ȭ(NULL)
    initRandom();
    //���̵�(����)�� ���� ���� ����
    randomValue = getRandomValue(&player);
    printf("randomValue= %d\n", randomValue);

    char text[10001] = {};
    char answer = 'd';
    int profit = 0;

    //progress = 1, Day1's day
    if (progress == 1)
    {
        if (0 <= randomValue && randomValue < 25)
        {
            strcpy_s(text, sizeof(text),
                "��濡 �б� ���� 32���� �߰��ߴ�.\n"
                "��� �ο��� �̱�� ���� ����32���ε���\n"
                "(���� ���� 103����.)\n\n"
                "������ ��û�ұ�?\n");
            typewriterEffect(text, 25); // 25ms ������
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "\n���� �̱� �� ���� �ú� �ɾ�����\n"
                        "�״�� ���÷����� �������١�\n"
                        "������ �����߸� �� �� ����.\n\n");
                    typewriterEffect(text, 25);
                    profit = -40000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "\n�»��� ���� ���� ������ ���������µ�\n"
                        "�״�� ���� ����...\n\n");
                    typewriterEffect(text, 25);
                    profit = -30000; //�������� ���� ����
                    break;
                default:
                    strcpy_s(text, sizeof(text),
                        "Y(y), N(n) ���� �������ּ���.\n"
                        "\n\n");
                    typewriterEffect(text, 25);
                    continue;
                }
                break;
            }
            
        }



        else if (25 <= randomValue && randomValue < 50)
        {
            strcpy_s(text, sizeof(text),
                "��濡 ���� �ǳ����� ���� ģ�� ģ������ �߰��ߴ�.\n"
                "�پ�� ģ����� ���� ��ұ�?\n\n");
            typewriterEffect(text, 25); // 25ms ������
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "y ������\n");
                    typewriterEffect(text, 25); // 25ms ������
                    printf("\n");
                    profit = 10000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "y ������\n");
                    typewriterEffect(text, 25); // 50ms ������
                    profit = -10000; //�������� ���� ����
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
            
        }

        else if (50 <= randomValue && randomValue < 75)
        {
            strcpy_s(text, sizeof(text),
                "50~74 �̺�Ʈ�� �ؽ�Ʈ\n");
            typewriterEffect(text, 25); // 25ms ������
            printf("\n");
        }

        else if (75 <= randomValue && randomValue < 100)
        {
            strcpy_s(text, sizeof(text),
                "75~99 �̺�Ʈ�� �ؽ�Ʈ\n");
            typewriterEffect(text, 25); // 25ms ������
            printf("\n");
        }
        

        
    }
    if (0<progress && progress<21)
    {
        if (profit > 0)
            printf("+%d��!\n", profit);

        else if (profit < 0)
            printf("%d��!\n", profit);

        account.account += profit;

        printf("Enter Ű�� ���� �����ϼ���");

        while (getchar() != '\n'); // ���� �Է� ���� ����
        getchar(); // ����� �Է� ���
    }
    return account.account;
}