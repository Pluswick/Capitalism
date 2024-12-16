#include "Player.h"

Account initAccount(int playerjob) {
    // ������ ���� ���� �ʱ�ȭ
    Account account;
    int balance = 0;

    if (playerjob == 1)
        balance = 100000;
    else if (playerjob == 2)
        balance = 300000;

    account.account = balance;

    // 1�� �ʱ�ȭ (0���� ����)
    for (int i = 0; i < COLUMNS; i++) {
        account.inventory[0][i] = 0;
    }

    // 2�� �ʱ�ȭ
    for (int i = 0; i < COLUMNS; i++) {
        account.inventory[1][i] = i; //0:Red, 1:Blue, 2:Green, 3:Black 
    }

    return account;
}

int addAffect(Account* account, int color, int affect) {
    account->inventory[0][color] += affect; // �����ͷ� ���� �� -> ���
    return account->inventory[0][color];    // ����� ���� ��ȯ (����)
}