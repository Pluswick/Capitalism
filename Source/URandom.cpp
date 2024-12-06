#include<stdio.h>
#include<string.h>

#include"Event.h"
#include"Player.h"
#include"Random.h"
#include"ClearScreen.h"
#include"TypingEffect.h"



void URandomEvent(struct Player player, struct Account account, int randomValue) 
{
    char text[10001] = {};
    char answer = 'd';
    int profit = 0;

    //progress = 1, Day1's day
    if (progress == 1) {
        if (0 <= randomValue < 25)
        {
            strcpy_s(text, sizeof(text),
                "0~24 �̺�Ʈ�� �ؽ�Ʈ\n");
            typewriterEffect(text, 25); // 50ms ������
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    printf("y ������\n");
                    profit = 10000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    printf("n ������\n");
                    profit = -10000; //�������� ���� ����
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
            
        }

        else if (25 <= randomValue < 50)
        {
            strcpy_s(text, sizeof(text),
                "25~49 �̺�Ʈ�� �ؽ�Ʈ\n");
            typewriterEffect(text, 25); // 50ms ������
            printf("\n");
        }

        else if (50 <= randomValue < 75)
        {
            strcpy_s(text, sizeof(text),
                "50~74 �̺�Ʈ�� �ؽ�Ʈ\n");
            typewriterEffect(text, 25); // 50ms ������
            printf("\n");
        }

        else if (75 <= randomValue < 100)
        {
            strcpy_s(text, sizeof(text),
                "75~99 �̺�Ʈ�� �ؽ�Ʈ\n");
            typewriterEffect(text, 25); // 50ms ������
            printf("\n");
        }
    }
        /*strcpy_s(narration, sizeof(narration),
            "����� ������ ���̵��� ������ ���� �־����� �ʱ� �ں����� 7�ϵ���\n"
            "�ִ��� ���� ���� �ܾ��� �����ϰų� �������Ѿ� �մϴ�.\n"
            "�� Day���� ������ �̺�Ʈ�� ������ ����� ���ÿ� ���� �ں��� ��ų� �Ұ� �˴ϴ�.\n"
            "���� �ܾ��� 0���ϰ� �Ǹ� ������ ����˴ϴ�.\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration, 25); // 50ms ������
        printf("\n");*/

}
