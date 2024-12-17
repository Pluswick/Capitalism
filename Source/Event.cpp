#include"ClearScreen.h"
#include"Event.h"
#include"TypingEffect.h"

size_t buffer_size = MAX_BUFFER;    // ���� ũ�� �ʱ�ȭ
char* narration = NULL;      // ���ڿ� ������ �ʱ�ȭ

int dRepeat[MAX_EVENT] = { 0, };
int aRepeat[MAX_EVENT] = { 0, };
int nRepeat[MAX_EVENT] = { 0, };

int checkTimeH() 
{

    narration = (char*)malloc(buffer_size * sizeof(char));
    if (narration == NULL) {
        printf("narration ���� �޸� �Ҵ� ����\n");

        exit(1);
    }

    int choice = 5;

    switch (progress)
    {
    case 0:
    {
        // ���� ���� ����
        strcpy_s(narration, buffer_size,
            "����� ������ ������ ���� �־����� �ʱ� �ں����� 7�ϵ���\n"
            "�ִ��� ���� ���� �ܾ��� �����ϰų� �������Ѿ� �մϴ�.\n"
            "�� Day���� ������ �̺�Ʈ�� ������ ����� ���ÿ� ���� �ں��� ��ų� �Ұ� �˴ϴ�.\n"
            "���� �ܾ��� 0���ϰ� �Ǹ� ������ ����˴ϴ�.\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration); // 50ms ������
        printf("\n");
        printf("Enter Ű�� ���� �����ϼ���");

        getchar(); // ����� �Է� ���
        originalClearScreen();

        //Day1 ���� ���л� ���� ���丮
        strcpy_s(narration, buffer_size,
            "��濡 �� �������� ����.\n"
            "���������� �� ���� �Ӹ�, �Ķ� �Ӹ�, �ʷ� �Ӹ�, ���� �Ӹ��� �� �л����� ������.\n"
            "�������� �����Ÿ��� �Ҹ��� �鸰��.\n"
            "�� �Ӹ����� �����ο� �ɸ����� �ñ��� ��� �Ĵٺ��� ���� �����ƴ�.\n\n"
            "�Ƹ����...\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration); // 50ms ������
        printf("\n");

        break;
    }

    case 1:
    {
        originalClearScreen();
        //Day1 ���� ���� ���丮
        strcpy_s(narration, buffer_size,
            "� �� ������ ���� ���� �������� ��÷� �����Ƿ� ����.\n"
            "�����ǿ� ��ħ�� �ô� ���� �Ӹ�, �Ķ� �Ӹ�, �ʷ� �Ӹ�, ���� �Ӹ��� �־���.\n"
            "�˰� ���� �� �� �츮 ���� ���л����̾���.\n"
            "���Ƿ� ���� �ֵ��� �׵��� �����õ�ա��̶�� �θ��� �־��١�\n\n"
            "�̰� �ƴϾ� - !!!\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration); // 50ms ������
        printf("\n");

        break;
    }

    case 9:
    {
        originalClearScreen();
        //Day3 ���� ȣ���� �ý��� �˸�
        strcpy_s(narration, buffer_size,
            "������� ��õ���� �� �ֺ����� ���� ���δ�.\n"
            "�׳� ȣ���ϱ�?\n"
            "ȣ���ϱ�?\n"
            "�ƴϸ� �׳� �� ȥ�� �����ϴ°ɱ�...?\n\n"
            "���Ϻ��� ������ ���Ѻ���.\n"
            "(�������� �̺�Ʈ�� ȣ������ ������ ��Ĩ�ϴ�. ������ �����ؼ� ������ ��� �ḻ�� �ٰ���������!)\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration); // 50ms ������
        printf("\n");

        break;
    }

    default:
        break;
    }

    printf("Enter Ű�� ���� �����ϼ���");
    //while (getchar() != '\n'); // ���� �Է� ���� ����
    getchar(); // ����� �Է� ���

    // �޸� ����
    free(narration);
    narration = NULL;

    return 0;

}

int checkTimeU() {

    narration = (char*)malloc(buffer_size * sizeof(char));
    if (narration == NULL) {
        printf("narration ���� �޸� �Ҵ� ����\n");

        exit(1);
    }

    int choice = 5;

    switch (progress)
    {
    case 0:
    {



        // ���� ���� ����
        strcpy_s(narration, buffer_size,
            "����� ������ ���̵��� ������ ���� �־����� �ʱ� �ں����� 7�ϵ���\n"
            "�ִ��� ���� ���� �ܾ��� �����ϰų� �������Ѿ� �մϴ�.\n"
            "�� Day���� ������ �̺�Ʈ�� ������ ����� ���ÿ� ���� �ں��� ��ų� �Ұ� �˴ϴ�.\n"
            "���� �ܾ��� 0���ϰ� �Ǹ� ������ ����˴ϴ�.\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration); // 50ms ������
        printf("\n");
        printf("Enter Ű�� ���� �����ϼ���");
       
        getchar(); // ����� �Է� ���
        originalClearScreen();

        //Day1 ���� ���л� ���� ���丮
        strcpy_s(narration, buffer_size,
            "���õ� ����� ������ ������ Ÿ�� ������ ��ħ�� �����Ѵ�.\n"
            "��ҿ� ������ ���� ����.\n"
            "�����غ��� ���� ���н��� �ִٰ� ������ ����°� �����.\n\n"
            "��ư �װ� �߿��Ѱ� �ƴ϶� ���� 8�� 59�����ݾ�!!!\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration); // 50ms ������
        printf("\n");

        break;
    }

    case 1:
    {
        originalClearScreen();
        //Day1 ���� ���� ���丮
        strcpy_s(narration, buffer_size,
            "�ܿ�ܿ� �⼮�� ������������ ��� �����ϰ� �� ���� ƴ�� ���� ����������� ���Ѵ�.\n"
            "�������� ���Ի����� ���̴� ���� �Ӹ�, �Ķ� �Ӹ�, �ʷ� �Ӹ�, ���� �Ӹ��� �־���.\n"
            "������� �� ���� �� �� �� ���� ����б� ������� �����ϴٳ� ����.\n"
            "������ ��Ʃ��� ������ �ϸ鼭 �º��� �����۰Ÿ���.\n\n"
            "��𼱰� �ü��� �������µ�..?\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration); // 50ms ������
        printf("\n");

        break;
    }

    case 9:
    {
        originalClearScreen();
        //Day3 ���� ȣ���� �ý��� �˸�
        strcpy_s(narration, buffer_size,
            "������� �˷ϴ޷� �Ӹ����� �� �ֺ����� ���� ���δ�.\n"
            "�׳� ȣ���ϱ�?\n"
            "ȣ���ϱ�?\n"
            "�ƴϸ� �׳� �� ȥ�� �����ϴ°ɱ�...?\n\n"
            "���Ϻ��� ������ ���Ѻ���.\n"
            "(�������� �̺�Ʈ�� ȣ������ ������ ��Ĩ�ϴ�. ������ �����ؼ� ������ ��� �ḻ�� �ٰ���������!)\n");

        // Ÿ�ڱ� ȿ�� ���
        typewriterEffect(narration); // 50ms ������
        printf("\n");

        break;
    }

    default:
        break;
    }

    printf("Enter Ű�� ���� �����ϼ���");
    //while (getchar() != '\n'); // ���� �Է� ���� ����
    getchar(); // ����� �Է� ���

    // �޸� ����
    free(narration);
    narration = NULL;

    return 0;

}