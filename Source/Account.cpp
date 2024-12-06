#include "Player.h"

Account initAccount(int playerjob) {
    // 직업에 따라 계좌 초기화
    Account account;
    int balance = 0;

    if (playerjob == 1)
        balance = 100000;
    else if (playerjob == 2)
        balance = 300000;

    account.account = balance;

    // 1행 초기화 (0으로 설정)(ASCII code 48)
    for (int i = 0; i < 5; i++) {
        strcpy_s(account.inventory[0][i], "0");
    }

    // 2행 초기화 (문자열로 설정)
    for (int i = 0; i < 5; i++) {
        sprintf_s(account.inventory[1][i], "Item%d", i);
    }

    return account;
}
