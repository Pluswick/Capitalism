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

    // 1행 초기화 (0으로 설정)
    for (int i = 0; i < COLUMNS; i++) {
        account.lover[0][i] = 0;
    }

    // 2행 초기화
    for (int i = 0; i < COLUMNS; i++) {
        account.lover[1][i] = i; //0:Red, 1:Blue, 2:Green, 3:Black 
    }

    return account;
}

int addAffect(Account* account, int color, int affect) {
    account->lover[0][color] += affect; // 포인터로 접근 시 -> 사용
    return account->lover[0][color];    // 변경된 값을 반환 (예시)
}