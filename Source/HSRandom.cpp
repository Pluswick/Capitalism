#include<stdio.h>
#include<string.h>

#include"Event.h"
#include"Player.h"
#include"ClearScreen.h"
#include"TypingEffect.h"
#include"Random.h"

int HRandomEvent(struct Player player,struct Account account) 
{
    char text[10001] = {};
    char answer = 'c';
    int profit = 0;

reroll:
    //���� �ʱ�ȭ(NULL)
    initRandom();
    //���̵�(����)�� ���� ���� ����
    randomValue = getRandomValue(&player);
    printf("randomValue= %d\n", randomValue);

    //Day1-3's day
    if (progress == 1 || progress == 4 || progress == 7)
    {
        if (0 <= randomValue && randomValue < 25)
        {
            if (dRepeat[0])
            {
                goto reroll;
            }
            dRepeat[0] = 1;
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
            if (dRepeat[1])
            {
                goto reroll;
            }
            dRepeat[1] = 1;
            strcpy_s(text, sizeof(text),
                "��濡 ���� �ǳ����� ���� ģ�� ģ������ �߰��ߴ�.\n\n"
                "�پ�� ģ����� ���� ��ұ�?\n");
            typewriterEffect(text, 25); // 25ms ������
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'N':
                case 'n':
                    strcpy_s(text, sizeof(text),
                        "������ ���� ���� �׳� ȥ�� ����� �ߴ�.\n");
                    typewriterEffect(text, 25); // 25ms ������
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    break;

                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "�پ�� ���� ġ�̰� ���Ҵ١� \n");
                    typewriterEffect(text, 25); // 50ms ������
                    profit = -30000; //�������� ���� ����
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
            if (dRepeat[2])
            {
                goto reroll;
            }
            dRepeat[2] = 1;
            strcpy_s(text, sizeof(text),
                "ó������ ���� �Ͼ�� �ų��� ��ħ�� �Ծ��µ�\n"
                "�ʹ� ���� �Ծ� ��Ż�� ����.\n\n"
                "�ýø� Ż��?\n");
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
                        "������ �� �� ���� �ýø� ����.\n");
                    typewriterEffect(text, 25); // 25ms ������
                    printf("\n");
                    profit = -10000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "���� ���� �ýø� �� Ÿ��� �����ߴ�.\n"
                        "�����̶� �Ʋ�����...\n");
                    typewriterEffect(text, 25); // 50ms ������
                    profit = 0; //�������� ���� ����
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
        }

        else if (75 <= randomValue && randomValue < 100)
            {
                if (dRepeat[3])
                {
                    goto reroll;
                }
                dRepeat[3] = 1;
                strcpy_s(text, sizeof(text),
                    "������ �����̴�!!��\n\n"
                    "�׻� �����ϴ� ���� ���õ� ������ �Ѵ�.\n"
                    "������ �ϴ� ������ �׻� ��ħ�� ���� ���� �谡 ������.\n"
                    "�� �տ� GS25�� �ְ� �ﰢ����� �Ϻ��ϰ� ä���� �ִ�.\n\n"
                    "�������� �鸦��?\n");
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
                            "�ﰢ��丸 ���������\n"
                            "�ʹ� �谡 ���� ���� ����ȴ�...\n");
                        typewriterEffect(text, 25); // 25ms ������
                        printf("\n");
                        profit = -10000; //�������� ���� ����
                        break;

                    case 'n':
                    case 'N':
                        strcpy_s(text, sizeof(text),
                            "��������� ���� ������ �׳� ��ϱ�� �Ѵ�.\n"
                            "��Ʋ��Ʋ �ɾ��.\n");
                        typewriterEffect(text, 25); // 50ms ������
                        profit = 0; //�������� ���� ����
                        break;
                    default:
                        printf("Y(y), N(n) ���� �������ּ���.\n");
                        continue;
                    }
                    break;
                }
            }
        

        
    }
    //Day1-3's afternoon
    if (progress == 2 || progress == 5 || progress == 8)
    {
        if (0 <= randomValue && randomValue < 25)
        {
            if (aRepeat[0])
            {
                goto reroll;
            }
            aRepeat[0] = 1;
            strcpy_s(text, sizeof(text),
                "ü���ð��� �ż� ü������ ã���� �繰���� �����µ�\n"
                "ü������ ������â���� ������ �ִ�.\n"
                "���� 1���� ���� �����ϴ� �ֵ��� �� �� ����.\n\n"
                "ģ������ ü������ ������?\n");
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
                        "�� ���·δ� ������ ü�������� ���� �� ����\n"
                        "���� ������ �� ���� ���л����� ������� �ߴ�.\n"
                        "������...\n"
                        "ü���� �ʹ� ������ �� ſ�� ü������ ��������...!\n"
                        "ü�� ������ �� ��� ���Ƿ� ���� �ϴµ�\n"
                        "���� �Ӹ��� ������ ���� �Ǵ�\n\n"
                        "��ü���� �ʰ� ���� �ž�?��\n\n"
                        "������ �̾���. ���� ü���� �����񡦡�\n\n"
                        "���͡�\n"
                        "���� �Ӹ��� �״�� �ڵ��� �����ȴ�.\n");
                    typewriterEffect(text, 25); // 25ms ������
                    printf("\n");
                    profit = -20000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "������ �������� �׳� ���� �ʱ�� �ߴ�.\n"
                        "ü�� ������ ������ ������� ������ �ϴµ�\n"
                        "���� �Ӹ��� ������ ���� �Ǵ�.\n\n"
                        "��ü���� ����?��\n\n"
                        "������\n\n"
                        "���� ü���� �� ����. ������ �� �־�.��\n\n"
                        "������� ���� �� ����������\n\n"
                        "���� �������� ������ �� ���ơ�\n\n"
                        "���� �Ӹ��� ������ ���� �� ����.\n");
                    typewriterEffect(text, 25); // 50ms ������
                    profit = 0; //�������� ���� ����
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
        }

        else if (25 <= randomValue && randomValue < 50)
        {
            if (aRepeat[1])
            {
                goto reroll;
            }
            aRepeat[1] = 1;
            strcpy_s(text, sizeof(text),
                "������ ������ ��� ���� ���� 3���ð� �Ǿ���.\n"
                "���� ���� ������ �ʹ� ������.\n"
                "�� �ڸ� ���� �� ����.\n\n"
                "��ø� ���� ������?\n");
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
                        "���� ������ ���½ð����� ���� �־���.\n"
                        "�谡 �ʹ� ���� ������ ����.\n"
                        "������ ���� �ʷϸӸ��� �Ķ��Ӹ��� �־���.\n"
                        "�׵��� ����Ӹ� ���...\n"
                        "���� ������ ���ڿ����� �����.\n"
                        "����� �Ϸ��� ���� ī�尡 ����� ���� ���޾Ҵ�!\n"
                        "ī�带 ã�� ���� ������ �ʷϸӸ��� ���� �Ǵ�.\n\n"
                        "��Ȥ�á� ī�尡 ����?��\n\n"
                        "���Ҿ���� �� ����...��\n\n"
                        "���̰� ��!��\n\n"
                        "�ʷϸӸ��� ��ī�带 ���� �Ķ��Ӹ��� �Ϲ� üũī��� �ٲ㼭 ���.\n"
                        "�ʷϸӸ��� ��ȸ�� �������� ���� �� ����.\n"
                        "Ŀ�Ǹ� ���� ſ���� ���� ���� �ʾҴ�.\n"
                        "�ѵ��Կ� ����� ���Ҵ�!\n"
                        "�׷��� �Ķ��Ӹ��� ������ ��Ÿ500�� �ְ� ����.\n\n"
                        "�������� ���ϴ���...�� \n"
                    );
                    typewriterEffect(text, 25); // 25ms ������
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "�׷��� ���� 1���� �������� ���Ѿ� �Ѵ�!\n"
                        "Ŀ�Ǹ� �� ���ð� ���� �������� ����ߴ�.\n"
                    );
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
            if (aRepeat[2])
            {
                goto reroll;
            }
            aRepeat[2] = 1;
            strcpy_s(text, sizeof(text),
                "������ ������ ���� �ð��� ����\n"
                "�� �� ������ �� ������ ģ����\n"
                "������ �� �־� ������� �ش�.\n"
                "�ǽɽ������� �ʹ� ���־� ���δ�.\n\n"
                "������� ������?\n"
            );
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
                        "������� �� �԰� �谡 ���� ������ �����ߴ�.\n"
                        "�ᱹ ���� ���� �濡 ������ ����.\n\n"
                        "������ ���ٰ� ���� ���� �濡 ���Ķ�ġ���� �ѱ�� �ִ� ���� �Ӹ��� ������.\n"
                        "�ǰ￡ ��� ���� �Ӹ��� �ҽ��� ��� �������.\n\n"
                        "����..��.��..��\n\n"
                        "����?��\n\n"
                        "��������\n"
                    );
                    typewriterEffect(text, 25); // 25ms ������
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "�ʹ� �ǽɽ����� ���� �ʱ�� �ߴ�.\n"
                        "������ ������ �����ϴ� �� ģ�� ������ ����ϴ� ����\n"
                        "���� �ִ� ���� �Ӹ��� ������� ���� ���̴�.\n"
                        "���� �Ӹ��� ���� ���ú��� ������ �ʾҴ�...\n"
                    );
                    typewriterEffect(text, 25); // 50ms ������
                    profit = 0; //�������� ���� ����
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
            }
       
        else if (75 <= randomValue && randomValue < 100) 
        {
            if (aRepeat[3])
            {
                goto reroll;
            }
            aRepeat[3] = 1;
            strcpy_s(text, sizeof(text),
                "������ ������ ���ɽð��� �Ǿ� ������ ������ �谡 �θ���.\n"
                "�谡 �θ��� �İ����� �����´�.\n\n"
                "�ᵵ �� �� ������� ��å�� ����?\n"
            );
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
                        "������� �����ٰ� �濡�� ������ �ֿ���!\n"
                        "������ �ݰ� ���ƿ��µ� ���� �Ӹ��� �����ƴ�.\n"
                        "���� �Ӹ��� ������ ã�� �ִ� ���ߴ�.\n"
                    );
                    typewriterEffect(text, 25); // 25ms ������
                    printf("\n");
                    profit = 10000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "������ �׳� ���ǿ��� ���� �ھ߰ڴ�.\n"
                        "�и� �����µ� ���ڱ� �߿��� ������ ��� �ῡ�� ����.\n"
                        "�������� �׳� ������ ���� ��� ���� ���� �Ӹ��� �ִ�.\n"
                        "���� �Ӹ��� ������ ǥ���� ������ �������� �� ���� �־���...\n"
                    );
                    typewriterEffect(text, 25); // 50ms ������
                    profit = 0; //�������� ���� ����
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
        }

    }
    //Day1-3's night
    if (progress == 3 || progress == 6 || progress == 9) 
    {
        if (0 <= randomValue < 25)
        {
            if (nRepeat[0])
            {
                goto reroll;
            }
            nRepeat[0] = 1;
            strcpy_s(text, sizeof(text),
                "�б��� ������.\n"
                "���ǰ�簡 �� �� ���Ҵ�...\n"
                "�������� ���� ������ �θ�Բ� ȿ���ؾ߰ڴ�.\n\n"
                "��� �������� ���ε� �� �ǰ���? ��� �����Ƿ� ���߰ڴ�!\n"
            );
            typewriterEffect(text, 25); // 25ms ������
            printf("\n");
            profit = -20000;
        }

        else if (25 <= randomValue < 50)
        {
            if (nRepeat[1])
            {
                goto reroll;
            }
            nRepeat[1] = 1;
            strcpy_s(text, sizeof(text),
                "ģ���� �б� ������ ������ ���شٰ� �Ѵ�.\n\n"
                "���󰥱�?\n"
            );
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
                        "���ε� ���ϰ� �߳� ���� ������ ģ���� �� �����̾���.\n"
                        "�� ���شٴ� ģ���� ���� ���ٸ��� ����\n"
                        "�������� ���� �ѷ��մ١�\n"
                    );
                    typewriterEffect(text, 25); // 25ms ������
                    printf("\n");
                    profit = -20000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "��¥ �����ϸ� ��Ӹ� �ȴٰ� ���� �׷���.\n"
                        "�׳� ���� ���� ���θ� �ؾ߰ڴ�.\n"
                    );
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

        else if (50 <= randomValue < 75)
        {
            if (nRepeat[2])
            {
                goto reroll;
            }
            nRepeat[2] = 1;
            strcpy_s(text, sizeof(text),
                "���� �ð��� �б��� Ż���ϴ� �ʷ� �Ӹ��� ���� �Ӹ��� �߰��ߴ�.\n\n"
                "�������μ� ������ �ұ�?\n"
            );
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
                        "������ ���� �ɰ� ������ ������.\n"
                        "������ ���� ������ ���� �Դٸ�\n"
                        "������ ������ ������ Ż���ع��ȴ�.\n"
                    );
                    typewriterEffect(text, 25); // 25ms ������
                    printf("\n");
                    profit = -10000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "�׳� ���ǿ��� ���γ� �ؾ߰ڴ�.\n");
                    typewriterEffect(text, 25); // 50ms ������
                    profit = 0; //�������� ���� ����
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
        }
        else if (75 <= randomValue < 100)
        {
            if (nRepeat[3])
            {
                goto reroll;
            }
            nRepeat[3] = 1;
            strcpy_s(text, sizeof(text),
                "�ٸ� �˹ٻ��� ��Ÿ�� ��Ź�Ѵ�.\n"
                "���� ���� ������ ���θ� �ؼ� �θ�Բ� ȿ���ұ�?\n\n"
                "�˹ٸ� �ұ�?\n");
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
                        "�˹ٸ� �ϱ�� �Ѵ�.\n"
                        "�θ�Ե� �̰� �ٶ�� �ž�.\n"
                    );
                    typewriterEffect(text, 25); // 25ms ������
                    printf("\n");
                    profit = +20000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "�׳� ���͵�ī�� ���� ���θ� �ؾ߰ڴ�.\n");
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
        
    }
    //Preventing events of Day1-3 showing up
    if (progress==9)
    {
        for (int i = 0; i < 4; i++)
        {
            dRepeat[i] = 1;
            aRepeat[i] = 1;
            nRepeat[i] = 1;
        }
    }
    //���� �߻��� ���, 0�̸� �ܰ� ���
    if (0<progress && progress<21)
    {
        if (profit > 0)
            printf("+%d��!\n", profit);

        else if (profit < 0)
            printf("%d��!\n", profit);
        else
            printf("�ܰ�: %d��\n", account.account);

        account.account += profit;

        printf("Enter Ű�� ���� �����ϼ���");

        while (getchar() != '\n'); // ���� �Է� ���� ����
        getchar(); // ����� �Է� ���
    }
    return account.account;
}