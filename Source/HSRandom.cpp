#include"Event.h"
#include"ClearScreen.h"
#include"TypingEffect.h"
#include"Random.h"

int HRandomEvent(struct Player player, struct Account account) 
{
    size_t buffer_size = MAX_BUFFER;    // ���� ũ�� �ʱ�ȭ
    char* text = NULL;           // ���ڿ� ������ �ʱ�ȭ
    char answer = 'c';
    int profit = 0;
    
    int affect = 0;
    int color = -1;

    text = (char*)malloc(buffer_size * sizeof(char));
    if (text == NULL) {
        printf("Htext ���� �޸� �Ҵ� ����!\n");

        exit(1);
    }

reroll:
    //���� �ʱ�ȭ(NULL)
    initRandom();
    //���̵�(����)�� ���� ���� ����
    randomValue = getRandomValue(&player);
    //printf("randomValue= %d\n", randomValue); //���� Ȯ�ο� �ڵ�

    switch (progress) {
        // Day1-3's day
    case 1:
    case 4:
    case 7:

    {
        if (0 <= randomValue && randomValue < 25)
        {
            if (dRepeat[0])
            {
                goto reroll;
            }
            dRepeat[0] = 1;
            strcpy_s(text, buffer_size,
                "��濡 �б� ���� 32���� �߰��ߴ�.\n"
                "��� �ο��� �̱�� ���� ����32���ε���\n"
                "(���� ���� 103����.)\n\n"
                "������ ��û�ұ�?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "\n���� �̱� �� ���� �ú� �ɾ�����\n"
                        "�״�� ���÷����� �������١�\n"
                        "������ �����߸� �� �� ����.\n\n");
                    typewriterEffect(text);
                    profit = -40000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "\n�»��� ���� ���� ������ ���������µ�\n"
                        "�״�� ���� ����...\n\n");
                    typewriterEffect(text);
                    profit = -30000; //�������� ���� ����
                    break;
                default:
                    strcpy_s(text, buffer_size,
                        "Y(y), N(n) ���� �������ּ���.\n"
                        "\n\n");
                    typewriterEffect(text);
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
            strcpy_s(text, buffer_size,
                "��濡 ���� �ǳ����� ���� ģ�� ģ������ �߰��ߴ�.\n\n"
                "�پ�� ģ����� ���� ��ұ�?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'N':
                case 'n':
                    strcpy_s(text, buffer_size,
                        "������ ���� ���� �׳� ȥ�� ����� �ߴ�.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    break;

                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "�پ�� ���� ġ�̰� ���Ҵ١� \n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
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
            strcpy_s(text, buffer_size,
                "ó������ ���� �Ͼ�� �ų��� ��ħ�� �Ծ��µ�\n"
                "�ʹ� ���� �Ծ� ��Ż�� ����.\n\n"
                "�ýø� Ż��?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "������ �� �� ���� �ýø� ����.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -10000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "���� ���� �ýø� �� Ÿ��� �����ߴ�.\n"
                        "�����̶� �Ʋ�����...\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
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
            strcpy_s(text, buffer_size,
                "������ �����̴�!!��\n\n"
                "�׻� �����ϴ� ���� ���õ� ������ �Ѵ�.\n"
                "������ �ϴ� ������ �׻� ��ħ�� ���� ���� �谡 ������.\n"
                "�� �տ� GS25�� �ְ� �ﰢ����� �Ϻ��ϰ� ä���� �ִ�.\n\n"
                "�������� �鸦��?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "�ﰢ��丸 ���������\n"
                        "�ʹ� �谡 ���� ���� ����ȴ�...\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -10000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "��������� ���� ������ �׳� ��ϱ�� �Ѵ�.\n"
                        "��Ʋ��Ʋ �ɾ��.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
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
        break;

        // Day1-3's afternoon
    case 2:
    case 5:
    case 8:
    {
        if (0 <= randomValue && randomValue < 25)
        {
            if (aRepeat[0])
            {
                goto reroll;
            }
            aRepeat[0] = 1;
            strcpy_s(text, buffer_size,
                "ü���ð��� �ż� ü������ ã���� �繰���� �����µ�\n"
                "ü������ ������â���� ������ �ִ�.\n"
                "���� 1���� ���� �����ϴ� �ֵ��� �� �� ����.\n\n"
                "ģ������ ü������ ������?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
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
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -20000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "������ �������� �׳� ���� �ʱ�� �ߴ�.\n"
                        "ü�� ������ ������ ������� ������ �ϴµ�\n"
                        "���� �Ӹ��� ������ ���� �Ǵ�.\n\n"
                        "��ü���� ����?��\n\n"
                        "������\n\n"
                        "���� ü���� �� ����. ������ �� �־�.��\n\n"
                        "������� ���� �� ����������\n\n"
                        "���� �������� ������ �� ���ơ�\n\n"
                        "���� �Ӹ��� ������ ���� �� ����.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
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
            strcpy_s(text, buffer_size,
                "������ ������ ��� ���� ���� 3���ð� �Ǿ���.\n"
                "���� ���� ������ �ʹ� ������.\n"
                "�� �ڸ� ���� �� ����.\n\n"
                "��ø� ���� ������?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
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
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�׷��� ���� 1���� �������� ���Ѿ� �Ѵ�!\n"
                        "Ŀ�Ǹ� �� ���ð� ���� �������� ����ߴ�.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
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
            strcpy_s(text, buffer_size,
                "������ ������ ���� �ð��� ����\n"
                "�� �� ������ �� ������ ģ����\n"
                "������ �� �־� ������� �ش�.\n"
                "�ǽɽ������� �ʹ� ���־� ���δ�.\n\n"
                "������� ������?\n"
            );
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "������� �� �԰� �谡 ���� ������ �����ߴ�.\n"
                        "�ᱹ ���� ���� �濡 ������ ����.\n\n"
                        "������ ���ٰ� ���� ���� �濡 ���Ķ�ġ���� �ѱ�� �ִ� ���� �Ӹ��� ������.\n"
                        "�ǰ￡ ��� ���� �Ӹ��� �ҽ��� ��� �������.\n\n"
                        "����..��.��..��\n\n"
                        "����?��\n\n"
                        "��������\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -20000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�ʹ� �ǽɽ����� ���� �ʱ�� �ߴ�.\n"
                        "������ ������ �����ϴ� �� ģ�� ������ ����ϴ� ����\n"
                        "���� �ִ� ���� �Ӹ��� ������� ���� ���̴�.\n"
                        "���� �Ӹ��� ���� ���ú��� ������ �ʾҴ�...\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
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
            strcpy_s(text, buffer_size,
                "������ ������ ���ɽð��� �Ǿ� ������ ������ �谡 �θ���.\n"
                "�谡 �θ��� �İ����� �����´�.\n\n"
                "�ᵵ �� �� ������� ��å�� ����?\n"
            );
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "������� �����ٰ� �濡�� ������ �ֿ���!\n"
                        "������ �ݰ� ���ƿ��µ� ���� �Ӹ��� �����ƴ�.\n"
                        "���� �Ӹ��� ������ ã�� �ִ� ���ߴ�.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 10000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "������ �׳� ���ǿ��� ���� �ھ߰ڴ�.\n"
                        "�и� �����µ� ���ڱ� �߿��� ������ ��� �ῡ�� ����.\n"
                        "�������� �׳� ������ ���� ��� ���� ���� �Ӹ��� �ִ�.\n"
                        "���� �Ӹ��� ������ ǥ���� ������ �������� �� ���� �־���...\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
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
        break;

        // Day1-3's night
    case 3:
    case 6:
    case 9:

    {
        if (0 <= randomValue && randomValue < 25)
        {
            if (nRepeat[0])
            {
                goto reroll;
            }
            nRepeat[0] = 1;
            strcpy_s(text, buffer_size,
                "�б��� ������.\n"
                "���ǰ�簡 �� �� ���Ҵ�...\n"
                "�������� ���� ������ �θ�Բ� ȿ���ؾ߰ڴ�.\n\n"
                "��� �������� ���ε� �� �ǰ���? ��� �����Ƿ� ���߰ڴ�!\n"
            );
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");
            profit = -20000;
        }

        else if (25 <= randomValue && randomValue < 50)
        {
            if (nRepeat[1])
            {
                goto reroll;
            }
            nRepeat[1] = 1;
            strcpy_s(text, buffer_size,
                "ģ���� �б� ������ ������ ���شٰ� �Ѵ�.\n\n"
                "���󰥱�?\n"
            );
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "���ε� ���ϰ� �߳� ���� ������ ģ���� �� �����̾���.\n"
                        "�� ���شٴ� ģ���� ���� ���ٸ��� ����\n"
                        "�������� ���� �ѷ��մ١�\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -20000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "��¥ �����ϸ� ��Ӹ� �ȴٰ� ���� �׷���.\n"
                        "�׳� ���� ���� ���θ� �ؾ߰ڴ�.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = 0; //�������� ���� ����
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
            if (nRepeat[2])
            {
                goto reroll;
            }
            nRepeat[2] = 1;
            strcpy_s(text, buffer_size,
                "���� �ð��� �б��� Ż���ϴ� �ʷ� �Ӹ��� ���� �Ӹ��� �߰��ߴ�.\n\n"
                "�������μ� ������ �ұ�?\n"
            );
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "������ ���� �ɰ� ������ ������.\n"
                        "������ ���� ������ ���� �Դٸ�\n"
                        "������ ������ ������ Ż���ع��ȴ�.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -10000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�׳� ���ǿ��� ���γ� �ؾ߰ڴ�.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
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
            if (nRepeat[3])
            {
                goto reroll;
            }
            nRepeat[3] = 1;
            strcpy_s(text, buffer_size,
                "�ٸ� �˹ٻ��� ��Ÿ�� ��Ź�Ѵ�.\n"
                "���� ���� ������ ���θ� �ؼ� �θ�Բ� ȿ���ұ�?\n\n"
                "�˹ٸ� �ұ�?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "�˹ٸ� �ϱ�� �Ѵ�.\n"
                        "�θ�Ե� �̰� �ٶ�� �ž�.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = +20000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�׳� ���͵�ī�� ���� ���θ� �ؾ߰ڴ�.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
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
        break;

        // Day4-7's day
    case 10:
    case 13:
    case 16:
    case 19:
    {
        if (0 <= randomValue && randomValue < 20)
        {
            if (dRepeat[4])
            {
                goto reroll;
            }
            dRepeat[4] = 1;
            strcpy_s(text, buffer_size,
                "��ħ�� ���θ� �ϱ����� ���� ��� �ߴµ�\n"
                "���� �Ӹ� ���л��� �߰��ߴ�.\n"
                "���� �Ӹ��� ���� �Ҿ���� �� ����.\n\n"
                "���� ã���ٱ�?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "������ �Ҿ�������\n\n"
                        "������\n\n"
                        "���� �츮 �����ݾ�. �� ����͡�\n\n"
                        "���Ű� ����\n\n"
                        "���� �Ӹ��� ��ĥ�ϰ� ���ϰ�\n"
                        "�ָ��� ���� ����Դ�.\n"
                    );
                    typewriterEffect(text);
                    profit = 0;
                    affect = -2; //ȣ���� ���� ũ��
                    color = 3; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "���� �Ӹ��� ���� ���������� �׳� �𸣴� ô���� ������ ���� ���� �ɾ�Դ�\n\n"
                        "��������\n\n"
                        "����?��\n\n"
                        "������ �ȳ��ض�\n");
                    typewriterEffect(text);
                    profit = 0; //�������� ���� ����
                    affect = 2; //ȣ���� ���� ũ��
                    color = 3; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;
                default:
                    strcpy_s(text, buffer_size,
                        "Y(y), N(n) ���� �������ּ���.\n"
                        "\n\n");
                    typewriterEffect(text);
                    continue;
                }
                break;
            }

        }

        else if (20 <= randomValue && randomValue < 40)
        {
            if (dRepeat[5])
            {
                goto reroll;
            }
            dRepeat[5] = 1;
            strcpy_s(text, buffer_size,
                "��濡 �濡 ������ ��ǰ ������ �߰��ߴ�.\n"
                "���������� ���� ���� ������ �� ������\n\n"
                "������ �������� ���� �ٱ�?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'N':
                case 'n':
                    strcpy_s(text, buffer_size,
                        "����л��� ���� ã���� �ð��� ����.\n"
                        "���� ������ ȣ��ɿ� ������ �����\n"
                        "��ǥ�� �����ߴ�. �̰� �� ������ ���� �� ����.\n"
                        "������ �ִ� �� �ڸ��� �״�� �ΰ� �б��� ���ߴ�.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    break;

                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "�б��� ���� �� ������ ������ ������ ��߰ڴ�.\n"
                        "������ �ڼ��� ���캸�� �����迡 �� 3���ۿ� ���ٴ� ��ǰ �����̾��١�!\n"
                        "�� ���� ������ ����� �и��ϴ�.\n"
                        "���� �츮 �б� �л��� �ƴϰ���?\n\n"
                        "���װ� �� ���ߡ�\n"
                        "�Ķ� �Ӹ��� �� �ڿ��� ���ߴ�\n\n"
                        "��ã���༭ ���� ��ʺ� �ٰԡ�\n\n"
                        "���׷�! ��� ���� ã�������ϱ� �츮 ģ�ϰ� �����°Ŵ�?��\n"
                        "�Ķ� �Ӹ��� ģ�����߰ڴ�.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = +50000; //�������� ���� ����
                    affect = 3; //ȣ���� ���� ũ��
                    color = 1; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }

        }

        else if (40 <= randomValue && randomValue < 60)
        {
            if (dRepeat[6])
            {
                goto reroll;
            }
            dRepeat[6] = 1;
            strcpy_s(text, buffer_size,
                "��濡 �������� �߰��ߴ�.\n"
                "�������� �����̼� ó�� ���� �ű��ѵ�\n\n"
                "���� �����ұ�?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "������ �ֺ��� ���İŸ��ٰ�\n"
                        "���� �� ���� ������ �������� ġ�� ������ ����.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -30000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�׳� ����.\n\n"
                        "���� �¿��ٱ�?��\n"
                        "�ȿ��� ������ ���� �ɾ���. �ڼ��� ���� �ʷ� �Ӹ� ���л��̾���.\n\n"
                        "���׷���\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = 0; //�������� ���� ����
                    affect = 2; //ȣ���� ���� ũ��
                    color = 2; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
        }

        else if (60 <= randomValue && randomValue < 80)
        {
            if (dRepeat[7])
            {
                goto reroll;
            }
            dRepeat[7] = 1;
            strcpy_s(text, buffer_size,
                "�����Ÿ� Ÿ�� ��ϴٰ�\n"
                "���ڱ� ��Ÿ�� ���� �Ӹ��� �ε�����.\n"
                "���� �Ӹ����Լ� ������ ������\n"
                "�ƴϸ� �ʱ׷��� �������� �Ѿ�ٱ�?\n\n"
                "������ ������?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "���� ���� �� ������ \n"
                        "�׳� ������ �ޱ�� �ߴ�.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 50000; //�������� ���� ����
                    affect = -2; //ȣ���� ���� ũ��
                    color = 0; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�� ����ô�ϴ� �����ٰ� �ϴ�\n"
                        "���� �Ӹ��� ������ ���� �� ����.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = 0; //�������� ���� ����
                    affect = 3; //ȣ���� ���� ũ��
                    color = 0; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
        }

        else if (80 <= randomValue && randomValue < 100)
        {
            if (dRepeat[8])
            {
                goto reroll;
            }
            dRepeat[8] = 1;
            strcpy_s(text, buffer_size,
                "�� ������ ���Դµ� �̾����� �ΰ� ���Դ�.\n"
                "�ٽ� ������ ���� ì���\n"
                "�������� �׳� ����?\n\n"
                "�ٽ� ������ ����?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "������ �ٽ� ���� �̾����� ì�ܿԴ�.\n"
                    );
                    typewriterEffect(text);
                    profit = 0; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�ٽ� ���� �����Ƽ� �׳� �б��� �Դµ�\n"
                        "������ ���� �� ���� ���������� �� ���ȴ�.\n\n");
                    typewriterEffect(text);
                    profit = -10000; //�������� ���� ����
                    break;
                default:
                    strcpy_s(text, buffer_size,
                        "Y(y), N(n) ���� �������ּ���.\n"
                        "\n\n");
                    typewriterEffect(text);
                    continue;
                }
                break;
            }

        }

    }
        break;

        // Day4-7's afternoon
    case 11:
    case 14:
    case 17:
    case 20:

    {
        if (0 <= randomValue && randomValue < 20)
        {
            if (aRepeat[4])
            {
                goto reroll;
            }
            aRepeat[4] = 1;
            strcpy_s(text, buffer_size,
                "���� �߿� �ڿ��� ������ ���ƿ´�.\n"
                "������ ���� ������ �����ұ�?\n\n"
                "�о��?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "�������� ���� �����Բ� �ɷȴ�.\n"
                        "��鸮�� ������ ���� �ʷ� �Ӹ��� ������ �� �� ������\n"
                        "�׳� ���� ȥ����.\n");
                    typewriterEffect(text);
                    profit = 0; //�������� ���� ����
                    affect = 3; //ȣ���� ���� ũ��
                    color = 2; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "������ �ü��� ���������� �����ߴ�.\n");
                    typewriterEffect(text);
                    profit = 0; //�������� ���� ����
                    affect = -3; //ȣ���� ���� ũ��
                    color = 2; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;
                default:
                    strcpy_s(text, buffer_size,
                        "Y(y), N(n) ���� �������ּ���.\n"
                        "\n\n");
                    typewriterEffect(text);
                    continue;
                }
                break;
            }

        }

        else if (20 <= randomValue && randomValue < 40)
        {
            if (aRepeat[5])
            {
                goto reroll;
            }
            aRepeat[5] = 1;
            strcpy_s(text, buffer_size,
                "���������� 2�� ���� ���ϴ� ��������\n"
                "���� �Ӹ��� �Ķ� �Ӹ��� ���� ���ڰ� �����Ѵ�.\n\n"
                "������ ¦�� �ұ�? ���� �Ӹ��� �����Ѵ�.\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'N':
                case 'n':
                    strcpy_s(text, buffer_size,
                        "��������\n\n"
                        "��!��\n\n"
                        "�������� �� ��� ǥ������\n"
                        "�Ķ� �Ӹ��� ���Ҷ����� �˾Ҵ��� ���ٰ� ǥ���� �Ѵ�.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    affect = 4; //ȣ���� ���� ũ��
                    color = 1; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;

                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "������ �� �� ��¦�̾�.��\n\n"
                        "������ �ƴϾ�.��\n\n"
                        "���� ��¦�� �Ⱦ�. ����� ��������.��\n"
                        "���� �Ӹ��� �����鼭 ��� �峭�� ġ�� �� ����.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = 0; //�������� ���� ����
                    affect = 4; //ȣ���� ���� ũ��
                    color = 0; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }

        }

        else if (40 <= randomValue && randomValue < 60)
        {
            if (aRepeat[6])
            {
                goto reroll;
            }
            aRepeat[6] = 1;
            strcpy_s(text, buffer_size,
                "������ �߷�Ÿ�ε��̴�.\n"
                "�ֵ��� ��õ�տ��� �� ���ݸ��� �Ͼ����ذ���.\n\n"
                "�׵��� ������ �ϵ鵵 �־����� ���� ���ٱ�?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "�������� ��� ���ݸ� �ۿ� ���� �ʾҴ١�\n"
                        "��¿ �� ���� �︸��¥�� ���ݸ��� �缭 ���.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -30000; //�������� ���� ����
                    affect = 5; //ȣ���� ���� ũ��
                    for (int i = 0; i < 4; i++)
                    {
                        color = i;
                        addAffect(&account, color, affect);
                    }
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "���� ������ ���� ����.\n"
                        "������ �ϴ� ǥ������ ������ �ɸ���.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = 0; //�������� ���� ����
                    affect = -2;
                    for (int i = 0; i < 4; i++)
                    {
                        color = i;
                        addAffect(&account, color, affect);
                    }
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
        }

        else if (60 <= randomValue && randomValue < 80)
        {
            if (aRepeat[7])
            {
                goto reroll;
            }
            aRepeat[7] = 1;
            strcpy_s(text, buffer_size,
                "��ٸ��� ���� �ð��̴�.\n"
                "������ ������� �翬�� �޽��� �Ծ�� ������\n"
                "���õ��� �޴��� �ɻ�ġ �ʴ�.\n\n"
                "�޽��� ������?\n"
            );
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'N':
                case 'n':
                    strcpy_s(text, buffer_size,
                        "�޴��� ���ζ� �������� ����. \n"
                        "���ôٶ� ���־� ���̴°� �ʹ� ����.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -15000; //�������� ���� ����
                    break;

                case 'Y':
                case 'y':
                    strcpy_s(text, buffer_size,
                        "�޽��� �޾ƿԴµ� �󶳰ῡ ��õ�յ��̶� ���� �԰� �ƴ�.\n"
                        "��ȭ�� �ϸ鼭 �Դ� ���� �� ģ���� �� ����.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = 0; //�������� ���� ����
                    affect = 2;
                    for (int i = 0; i < 4; i++)
                    {
                        color = i;
                        addAffect(&account, color, affect);
                    }
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
        }

        else if (80 <= randomValue && randomValue < 100)
        {
            if (aRepeat[8])
            {
                goto reroll;
            }
            aRepeat[8] = 1;
            strcpy_s(text, buffer_size,
                "�����Ӹ��� ���Ϸ� ���ɽð���\n"
                "�ݴ��� �౸�� �Ѵٴ� �ҽ��� �����.\n\n"
                "�����Ϸ� ����?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "�̿� ���Ḧ �缭 �����Ϸ� ����.\n"
                    );
                    typewriterEffect(text);
                    profit = -5000; //�������� ���� ����
                    affect = 4; //ȣ���� ���� ũ��
                    color = 3; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�׳� ���ǿ� �־�߰ڴ�.\n");
                    typewriterEffect(text);
                    profit = 0; //�������� ���� ����
                    break;
                default:
                    strcpy_s(text, buffer_size,
                        "Y(y), N(n) ���� �������ּ���.\n"
                        "\n\n");
                    typewriterEffect(text);
                    continue;
                }
                break;
            }

        }

    }
        break;

        // Day4-7's night
    case 12:
    case 15:
    case 18:

    {
        if (0 <= randomValue && randomValue < 20)
        {
            if (nRepeat[4])
            {
                goto reroll;
            }
            nRepeat[4] = 1;
            strcpy_s(text, buffer_size,
                "�������� ģ������ ���ڰ� �����Ѵ�.\n"
                "��������μ� ģ�����赵 �� �����ؾ��Ѵ�!\n"
                "�б� ������ ī�並 ���� �ǽù��� ���� ����ϴ�\n"
                "������ ���� ���� Ǯ�ڽ��� ��� �� ���Ŀ���.\n"
            );
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");
            profit = -20000;
        }

        else if (20 <= randomValue && randomValue < 40)
        {
            if (nRepeat[5])
            {
                goto reroll;
            }
            nRepeat[5] = 1;
            strcpy_s(text, buffer_size,
                "�ϱ��濡 �ؾ�� ������ ���帶���� �߰��ߴ�.\n\n"
                "�� �� �� ������?(�ؾ:Y, ������:N)\n"
            );
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "�ؾ�� ����µ� �ؾ�� ����� ���� �Ӹ��� ������.\n"
                        "�츮�� ���� �ؾ�� �԰� ��Ҵ�.\n"
                        "�ϳ� ��ſ� ���̾���.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -3000; //�������� ���� ����
                    affect = 4; //ȣ���� ���� ũ��
                    color = 0; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�����̸� ����µ� �տ��� �����Ÿ��� ���� �Ӹ��� ������.\n"
                        "���� �����̸� ��Ű�µ� �߰��� ���� ������.\n\n"
                        "���̸��, ���� �����̡�\n\n"
                        "��2�κС�\n\n"
                        "��2�κ��̿�...��\n\n"
                        "���� ����� �۽ο� �����̸� �Ծ���.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = -10000; //�������� ���� ����
                    affect = 4; //ȣ���� ���� ũ��
                    color = 3; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
        }

        else if (40 <= randomValue && randomValue < 60)
        {
            if (nRepeat[6])
            {
                goto reroll;
            }
            nRepeat[6] = 1;
            strcpy_s(text, buffer_size,
                "�ϱ��� �Ϸ��µ� ���ǽǿ��� �ǾƳ� �Ҹ��� �鸰��.\n"
                "�㿡 ���ǽ� ���� ���� �ȵȴٴ� �ҹ��� ����µ���\n\n"
                "�����?"
            );
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "���ǽ� ���� ���� �� ������ �ǾƳ븦 ġ�� �־���.\n"
                        "�ʷ� �Ӹ�����.\n"
                        "�ʷ� �Ӹ��� ������ �ǾƳ븦 ������ �ְڴٸ� ���� �ǾƳ�� �̲�����.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    affect = 4; //ȣ���� ���� ũ��
                    color = 2; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�ҹ��� ������� �׳� ���߰ڴ�.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = 0; //�������� ���� ����
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
        }

        else if (60 <= randomValue && randomValue < 80)
        {
            if (nRepeat[7])
            {
                goto reroll;
            }
            nRepeat[7] = 1;
            strcpy_s(text, buffer_size,
                "���ڸ� �ϴµ� �̾����� ��������.\n"
                "�� ���ڸ��� ���� �Ӹ��� �Ķ� �Ӹ��� �ִµ�\n\n"
                "�������� �̾����� ������?(�����Ӹ�:Y, �Ķ��Ӹ�:N)\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "���� �Ӹ��� �ƹ� �� ���� ������ �̾����� �������.\n"
                        "����ó�� ������ ������ �ƴϾ���.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    affect = 3; //ȣ���� ���� ũ��
                    color = 3; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�Ķ� �Ӹ��� �� ���� �ڱⰡ ���� �� �ʸ� ������ ���.\n"
                        "���� �뷡�� ������ �����ߴ�.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = 0; //�������� ���� ����
                    affect = 4; //ȣ���� ���� ũ��
                    color = 1; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;

                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
        }

        else if (80 <= randomValue && randomValue < 100)
        {
            if (nRepeat[8])
            {
                goto reroll;
            }
            nRepeat[8] = 1;
            strcpy_s(text, buffer_size,
                "�ϱ��� �Ϸ��ϴµ� �� �´�.\n"
                "�ܿ�ܿ� �б� �� ���� ��������� �پ����\n"
                "�� ���� �� ���� ������ �����Ѵ�.\n\n"
                "�� �տ� �������� ���缱��.\n"
                "�� �ȿ��� �����Ӹ��� â���� ������.\n\n"
                "����� ����?��\n\n"
                "��������\n\n"
                "���̰ɷ� ��� �硱\n"
                "���� �Ӹ��� 5�������� �ְ� ���ٰ� ���� ƴ�� ���� �������� Ÿ�� �����ȴ�.\n"
            );
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");
            profit = 50000;
        }

    }
        break;

    case 0:
    case 21:
        break;

    default:
        printf("Invalid progress value\n���α׷��� ����� ���ּ���.\n");
        exit(1); // ���α׷� ��� �ߴ�

        break;
    }

    //Preventing events of Day1-3 showing up
    if (progress == 9)
    {
        for (int i = 0; i < 4; i++)
        {
            dRepeat[i] = 1;
            aRepeat[i] = 1;
            nRepeat[i] = 1;
        }
    }

    //���� �߻��� ���, 0�̸� �ܰ� ���
    if (0 < progress && progress < 21)
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

    // �޸� ����
    free(text);
    text = NULL;

    return account.account;
}