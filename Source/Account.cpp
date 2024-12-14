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
    for (int i = 0; i < COLUMNS; i++) {
        strcpy_s(account.inventory[0][i], MAX_LENGTH, "0");
    }

    // 2행 초기화
    for (int i = 0; i < COLUMNS; i++) {
        sprintf_s(account.inventory[1][i], MAX_LENGTH, "Couple%d", i); //Couple1:Red, Couple2:Blue, Couple3:Green, Couple4:Black 
    }

    return account;
}
