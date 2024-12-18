#include"Event.h"
#include"Random.h"
#include"ClearScreen.h"
#include"TypingEffect.h"

int URandomEvent(struct Player player, struct Account account)
{
    size_t buffer_size = MAX_BUFFER;    // ���� ũ�� �ʱ�ȭ
    char* text = NULL;           // ���ڿ� ������ �ʱ�ȭ
    char answer = 'c';
    int profit = 0;

    int affect = 0;
    int color = 0;

    text = (char*)malloc(buffer_size * sizeof(char));
    if (text == NULL) {
        printf("Utext ���� �޸� �Ҵ� ����!\n");

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
                "���� ���� ȭ���ϰ� ����ؼ� �ʹ� �ǰ��ϴ�.\n\n"
                "Ŀ�Ǹ� ���?\n");
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
                        "Ŀ�Ǹ� ��߰ڴ�.\n");
                    typewriterEffect(text);
                    profit = -5000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "Ŀ�Ǹ� �� ��� ��Ƽ�ٰ� �����԰� ������ �������� �ߴ�.\n"
                        "�װ� ������ ����̴�.\n");
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

        else if (25 <= randomValue && randomValue < 50)
        {
            if (dRepeat[1])
            {
                goto reroll;
            }
            dRepeat[1] = 1;
            strcpy_s(text, buffer_size,
                "�б��� ���ٰ� ���� ���縦 �ش޶�� ��Ź�� �޾Ҵ�.\n\n"
                "���� ���� �� ���� ������ �� ������ �׳� �����ұ�?\n");
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
                        "���� ���縦 ���־����� ���� �˻翴�ٸ� ���� �޶�� �ߴ�.\n"
                        "���̰� ����.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -10000; //�������� ���� ����
                    break;

                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "�׳� �����ϱ�� �ߴ�.\n");
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
            if (dRepeat[2])
            {
                goto reroll;
            }
            dRepeat[2] = 1;
            strcpy_s(text, buffer_size,
                "�б��� ���ٰ� �� �̻����� ������ ���� �ɾ�´�.\n\n"
                "�� ���� �Ŵ��� �ǽɵǴµ� �׳� �����ұ� ���̶� ����?\n");
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
                        "\"����� �����ŵ�, ���� ���� ��ø鼭 ���� �� ���� �� �������?\"\n"
                        "��� ���� ���Ķ����� ��ٷ��ִ� ���� �߰��ߴ�.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -35000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "���� �ұ��ϴ�.\n"
                        "�ƽ����� �׳� ���߰ڴ�.\n");
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
                "���� ���� ���� �Ͼ�Ⱑ �ʹ� �����.\n\n"
                "��ħ ������ ��ü �ް��� �ұ�?\n");
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
                        "���� ���� �� �ھ߰ڴ١�\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�׷��� ������ �� ����. \n"
                        "ī������ �ʿ��ء�\n");
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
                "�������� �н��� ������ �ߴµ� �޴��� ���δ�.\n\n"
                "���� ������� ����� ��ų��? \n");
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
                        "����� ��Ű�� �ϴµ� ģ�� ���踦 ���� ���谡 ���̴ּ�.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�н��� �Ա�� �ߴ�.\n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = -7000; //�������� ���� ����
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
                "�б����� ��ȭ���� �Ѵ�. ���� Ǫ�� Ʈ���� ���ִ�. \n"
                "�а� ������ ���� û���� ���� ������ ���� ȥ�� �ܷӰ� �����ϰ� ���γ� �ұ�? \n\n"
                "������ ����?\n");
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
                        "������ ����� �ߴ�. \n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -35000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "���γ� �ؾ߰ڴ�. \n"
                        "����� ������ ���� ���� �� �ƴϴ�. \n");
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
            if (aRepeat[2])
            {
                goto reroll;
            }
            aRepeat[2] = 1;
            strcpy_s(text, buffer_size,
                "���ڱ� ������ 2�ð��̳� �����. \n"
                "���濡 ���� �ð��� ������ �������� ���� ���θ� �� �� ����̴�. \n\n"
                "���濡 ����?\n");
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
                        "������� ���� �ð��̴�. \n"
                        "�������� ���߰ڴ�. \n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "���������� ���θ� �Ϸ��ߴ�.\n"
                        "���� �Ϸ��� �ߴ�.\n"
                        "���� �������� ���� �濡 ����ĥ �� ���� ����̿��� �򸣸� ���־��� ���̴�. \n"
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

        else if (75 <= randomValue && randomValue < 100)
        {
            if (aRepeat[3])
            {
                goto reroll;
            }
            aRepeat[3] = 1;
            strcpy_s(text, buffer_size,
                "������ ������ ���� �濡 ģ�� �Ĺ踦 �߰��ߴ�.\n"
                "�Ϳ��� ���ϰ� ��������� �Ĺ谡 ���� ��޶�� ������.\n"
                "�Ĺ迡�� ���� ���ٱ� ������ �����ϰ� ȥ�� �ܷӰ� ������? \n\n"
                "���� ���ٱ�? \n"
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
                        "���� ������ �� ���� ���� ���ֱ�� �ߴ�. \n"
                        "�Ĺ�� ���� ��� �޴��� ���״�. \n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -55000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�����ϰ� �����ߴ�. \n"
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
                "������ ������ ������ ȸ���� �Ѵٰ� �Ѵ�.\n\n"
                "ȸ�Ŀ� �����ұ�?\n"
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
                        "ȸ�� ��ҿ� �����ϴ� ���� �ͼ��� �󱼵��� ���� ���δ�.\n"
                        "���� ���� ���ٰ� ����µ�.\n"
                        "�� ���̰� �ǹ踦 �ϴ� ���� ����� ���� ī�� �����ϱ⿡ �ʴ���� �Ŀ���. \n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -30000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�׳� ���̳� ���߰ڴ�. \n"
                        "���� ��� ģ������ �����ٴϴ� ����� ���� ���δ�. \n"
                        "���� ���� ����. \n"
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

        else if (25 <= randomValue && randomValue < 50)
        {
            if (nRepeat[1])
            {
                goto reroll;
            }
            nRepeat[1] = 1;
            strcpy_s(text, buffer_size,
                "ģ���� ���� ���� ���ڰ� �Ѵ�.\n\n"
                "���� ������ ������ ���� ���Ǳ�?\n"
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
                        "����� ���� 3������ ���� �ýø� Ÿ�� ���� �Դ�.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -60000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�׳� �������̳� ���߰ڴ�. \n\n"
                        "���������� ���µ� �Ʊ �ص� ���Ҵ� ������ ���ڱ� ������鼭 �� ���� �����ߴ�! \n"
                        "�ջ������ ��ø� ��� �� �����޶� �ؾ߰ڴ�. \n\n"
                        " \"�˼��ѵ� ���� ������������ ��� �� �����ֽ� �� �ֳ���?\" \n\n"
                        " \"???: ��\" \n\n"
                        "\"��\"\n"
                        "���ϰ��� ����ġ�� ���� �Ӹ��� ����� ���� ���� ���Ҵ١� \n"
                        "���� �����Ÿ��� ��� �� ���� ������ ���ڿ����� �ϳ� ���־���. \n"
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
            if (nRepeat[2])
            {
                goto reroll;
            }
            nRepeat[2] = 1;
            strcpy_s(text, buffer_size,
                "�߽��� �ʹ� ���� �Ծ����� ��θ���. \n\n"
                "��å�̳� �ұ�?\n"
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
                        "����� �ֺ��� ��å�ϴ� �Ϳ��� �����̸� ������. \n"
                        "�ֺ� ���������� �����̸� ���� ��� ������ ���. \n"
                        "���� �� ���� �� ���� �����̸� ���󰡴� �濡 3������ ������ �־���. \n"
                        "������ ����̴� �����̴� \n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = +30000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�׳� ħ�뿡 ��������. \n");
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
                "�б��� ������ ���θ� �ϱ� ���� 24�� ī�信 ����. \n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");
            profit = -15000;

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
                "�л�ȸ �Ϸ� ��ħ���� ��� �غ��� ��;� �Ѵ�. \n"
                "������ �Ǽ��� �ٸ� ���� �� �͹��ȴ�. \n"
                "�׳� �� ���� �ٽ� �� �;߰ڴ�.\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");
            profit = -10000;


        }

        else if (20 <= randomValue && randomValue < 40)
        {
            if (dRepeat[5])
            {
                goto reroll;
            }
            dRepeat[5] = 1;
            strcpy_s(text, buffer_size,
                "���� �Ͼ�µ� ��� �ұ� ���θ� �ұ�?\n\n"
                "��� �ұ�?\n");
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
                        "�б� �ｺ�忡�� ��ϱ� ���� �б��� ����. \n"
                        "�б� �ｺ�忣 ���� �Ӹ��� �־���.\n"
                        "��� �����ϴ� �� ����. \n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    affect = 2;
                    color = 0;
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�������� ������ ���θ� �� �� ���� �ʾƼ� �б� ���������� ���ߴ�. \n\n"
                        "�װ��� ���� �Ӹ��� ����ϰ� �ٸ��� �� ä�� å�� �а� �־���. \n"
                        "���� å���� �ñ��� ���� �� �� ���� �ڸ��� �ɾƼ� ���� ���ĺ��ٰ� ���ڱ� ���� �Ӹ��� �ٰ��� �Ѹ��� �Ѵ�. \n\n"
                        " \"�װ� ������ �����̴� �԰� �;�\" \n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = 0; //�������� ���� ����
                    affect = 2;
                    color = 3;
                    addAffect(&account, color, affect);
                    break;
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }

        }

        else if (40 <= randomValue && randomValue < 60) {
            if (dRepeat[6])
            {
                goto reroll;
            }
            dRepeat[6] = 1;
            strcpy_s(text, buffer_size,
                "���� �Ͼ�� ó������ ��ħ �н��� ���� �� �־���. \n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");
            profit = -5000;

        }

        else if (60 <= randomValue && randomValue < 80)
        {
            if (dRepeat[7])
            {
                goto reroll;
            }
            dRepeat[7] = 1;
            strcpy_s(text, buffer_size,
                "�л�ȸ ȸ�ǰ� �ִµ� �����ϰ� ������ ���.\n"
                "������ ���� �� ������ �׳� ������ �����̶� �ýø� Ż��? \n\n"
                "�ýø� Ż��? \n");
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
                        "���� ���� ������ ���п� ȸ�ǿ� ���� �ʾҴ�. \n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 15000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�ᱹ ������ �߰� ���л�ȸ���� ���� ȭ���١�\n"
                        "�˰��� ���л�ȸ���� �Ķ��Ӹ��� ģ���� �� ����. \n");
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = 0; //�������� ���� ����
                    affect = -3; //ȣ���� ���� ũ��
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
            if (dRepeat[8])
            {
                goto reroll;
            }
            dRepeat[8] = 1;
            strcpy_s(text, buffer_size,
                "���� ��ǥ�� �ϴ� ���̶� �� ������ �ٸ���� �ð��� �ʹ� �ʾ�����.\n"
                "�ýø� Ÿ�߰ڴ�. \n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");
            profit = -15000;


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
                "�˷ϴ޷� �Ӹ���� �Բ��ϴ� ����ð��̴�.\n"
                "�� ������� ���� ������ �տ� ������? \n\n"
                "�տ� ������? \n");
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
                        "�տ� ������ ���� �ü��� �ʹ� �Ű� ���� ����� ���θ� �� �� ������.\n"
                        "�߰��� �Ű������ ���� ���� ���� ��Դ�. \n");
                    typewriterEffect(text);
                    profit = -5000; //�������� ���� ����
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "���� ������ �� ������ ��ȭ�� �� �� �־���.\n\n"
                        "���� �Ӹ�: ����� �� �ѷ���?\" \n"
                        "�Ķ� �Ӹ� : ������ ��� ����.��Ǫ ���� �� ���?\" \n"
                        "�ʷ� �Ӹ� : ������ � ���� ? ��Һ��� �ٹ̼̳׿�!\" \n"
                        "���� �Ӹ� : �������� ��� �ڸ� �����ſ���?\"\n\n"
                        "���� ���� �÷����� ���ߴ�. \n"
                    );
                    typewriterEffect(text);
                    profit = 0; //�������� ���� ����
                    affect = 3; //ȣ���� ���� ũ��
                    for (int i = 0; i < 4; i++)
                    {
                        color = i;
                        addAffect(&account, color, affect);
                    }
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
                "�� ������Ʈ�� �˷ϴ޷� �Ӹ���� �Բ� �ϰ� �Ǿ���.\n"
                "���� ������ ȸ�Ǹ� �ؾ� �ϴµ� ���� ���� ����. \n\n"
                "���� ���?\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");

            while (1)
            {
                printf("Y(y) �Ǵ� N(n)�� �Է����ּ���: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'Y':
                case 'y':
                    strcpy_s(text, buffer_size,
                        "�� �ƿ��Ͱ� ���� �̷��� ��ճ���? \n\n"
                        "�� �� ���� 10������ �Ѱ� ���͹��ȴ�! \n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -120000; //�������� ���� ����
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
                        "�׳� ���߰ڴ�.\n"
                        "���л��� ������ ȸ�� �򸮴װ� �Բ��ϸ� �η��� �ʴ�. \n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = 0; //�������� ���� ����
                    affect = -5; //ȣ���� ���� ũ��
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

        else if (40 <= randomValue && randomValue < 60)
        {
            if (aRepeat[6])
            {
                goto reroll;
            }
            aRepeat[6] = 1;
            strcpy_s(text, buffer_size,
                "������ ����µ� ���濡 ���� ������ ����? \n\n"
                "�������� ����?\n");
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
                        "������ �ֱ� ��������� �ƹ��� �����١�\n"
                        "�׷� �迡 ���濡�� ��� ������ ���ѸԾ���.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -20000; //�������� ���� ����

                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "������ �������� �濡 �Ķ��Ӹ��� ó�� �׵��� ����ģ ������ �Ǵٽ� �����ƴ�. \n"
                        "ģ������ �;� ���� ���� ���� �ɾ���.\n\n"
                        "������ ��� ����?��\n\n"
                        "����, ���� ��� �Ĵٺþ����.��\n\n"
                        "���ֿ�?��\n\n"
                        "���� ����б� ģ���� ��Ƽ���.��\n"
                        "��¦�̾�. ���� ���ߴ�.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = 0; //�������� ���� ����
                    affect = 2;
                    color = 1;
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
                "���θ� �ؾ� �ϴµ� ���������� ���� ī��� ����?\n\n"
                "���������� ����? \n"
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
                        "ī�信 �ͼ� �ڸ��� ã�� �� �ʷϸӸ��� �߰��ߴ�. \n"
                        "�ڸ��� ���µ� �������ڰ� �ؾ߰ڴ�. \n\n"
                        "��Ȥ�� ���ڸ� �ɾƵ� �ɱ��?��\n\n"
                        "���ʹ��ʹ� �����ϴ�!��\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -5000; //�������� ���� ����
                    affect = 2;
                    color = 2;
                    break;

                case 'Y':
                case 'y':
                    strcpy_s(text, buffer_size,
                        "���δ� ����������.\n"
                        "���������� �ؾ߰ڴ�.\n");
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

        else if (80 <= randomValue && randomValue < 100)
        {
            if (aRepeat[8])
            {
                goto reroll;
            }
            aRepeat[8] = 1;
            strcpy_s(text, buffer_size,
                "����ļ� ������ ��Ծ���.\n");
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");
            profit = -10000;


        }

    }
    break;

    // Day4-7's night
    case 12:
    case 15:
    case 18:
    {
        if (0 <= randomValue && randomValue < 25)
        {
            if (nRepeat[4])
            {
                goto reroll;
            }
            nRepeat[4] = 1;
            strcpy_s(text, buffer_size,
                "�츮 ���� ��� �츮 �θ�� �Ƶ��� �߽��� ���� ���ڰ� �Ѵ�. \n\n"
                "�߽��� ������? \n"
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
                        "�߽��� �԰� ������ ���� ���� ä�� �˷ϴ޷� 4�ι�� �����ƴ�. \n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -20000; //�������� ���� ����
                    affect = -2; //ȣ���� ���� ũ��
                    for (int i = 0; i < 4; i++)
                    {
                        color = i;
                        addAffect(&account, color, affect);
                    }

                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "��ħ�� �Ͼ�� �ſ��� ���µ�,\n ���õ��� ���� �ϳ� ������ �� ����. \n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = 0; //�������� ���� ����
                    affect = +2; //ȣ���� ���� ũ��
                    for (int i = 0; i < 4; i++)
                    {
                        color = i;
                        addAffect(&account, color, affect);
                    }
                default:
                    printf("Y(y), N(n) ���� �������ּ���.\n");
                    continue;
                }
                break;
            }
        }

        else if (25 <= randomValue && randomValue < 50)
        {
            if (nRepeat[5])
            {
                goto reroll;
            }
            nRepeat[5] = 1;
            strcpy_s(text, buffer_size,
                "�б����� ���θ� �ϴ� ��� ���Դ�. \n\n"
                "�ٶ� �� �� �� ��å�ұ�? \n"
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
                        "��å�� �ϸ� �ż��� ���⸦ ���ô� �Ӹ��� �������� ����̴�. \n"
                        "��å�� �ϴٰ� �����Ӹ��� �����ƴ�! \n"
                        "������ ����ϴ� �� ����.\n"
                        "���� ���� ���� ����.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = 0; //�������� ���� ����
                    affect = 2; //ȣ���� ���� ũ��
                    color = 0; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "�ٶ� �� �ð��� ����. ���γ� ����. \n"
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
            if (nRepeat[6])
            {
                goto reroll;
            }
            nRepeat[6] = 1;
            strcpy_s(text, buffer_size,
                "�������� �� ����� �ִ�.\n"
                "�̷�� �̷� ����̶� �����߸� �Ѵ�.\n"
            );
            typewriterEffect(text); // Ÿ�ڱ� ȿ��
            printf("\n");
            profit = -20000;

        }

        else if (75 <= randomValue && randomValue < 100)
        {
            if (nRepeat[7])
            {
                goto reroll;
            }
            nRepeat[7] = 1;
            strcpy_s(text, buffer_size,
                "��� ��ȣ�� �˾Ƴ� ���� �����Ӹ����Լ� ī���� �Դ�. \n\n"
                "����ȭ��\n\n"
                "��ȭ ǥ�� �ɾ� �ۿ� ���� ���� �������� �ɾ� ��ȭ�� ���� ����? \n"

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
                        "�ɾ� ��ȭ�� ���� ����. \n"
                        "���� ��ȭ�� �� �� ���� �� ����. \n"
                        "��ȭ ���� ���� �Ƹ�������ó�� ��ũ���� �־���. \n\n"
                        "������ ��ȭ �� �����ϼ���?�� \n\n"
                        "�����ݡ��� \n\n"
                        "��ȭ �帣�� �߸��� �� ���١� \n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    printf("\n");
                    profit = -15000; //�������� ���� ����
                    affect = -3; //ȣ���� ���� ũ��
                    color = 3; //ȣ���� ���� ���
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "��� ���� ���÷� ������ �����Ӹ��� ���� ���� �� �����ϴ� �� ���Ҵ�. \n\n"
                        "���� �� �����Ͻó����䡱\n\n"
                        "�������ؿ�.��\n\n"
                        "���� �� ��ôµ�����\n\n"
                        "����¥ �����ؿ�.��\n\n"
                        "���� �� �� �Ծ����� ������ ���ڸ�����.\n"
                    );
                    typewriterEffect(text); // Ÿ�ڱ� ȿ��
                    profit = -15000; //�������� ���� ����
                    affect = 3; //ȣ���� ���� ũ��
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
