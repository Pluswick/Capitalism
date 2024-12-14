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

    // 1�� �ʱ�ȭ (0���� ����)(ASCII code 48)
    for (int i = 0; i < COLUMNS; i++) {
        strcpy_s(account.inventory[0][i], MAX_LENGTH, "0");
    }

    // 2�� �ʱ�ȭ
    for (int i = 0; i < COLUMNS; i++) {
        sprintf_s(account.inventory[1][i], MAX_LENGTH, "Couple%d", i); //Couple1:Red, Couple2:Blue, Couple3:Green, Couple4:Black 
    }

    return account;
}
