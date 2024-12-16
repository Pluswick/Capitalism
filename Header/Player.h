#ifndef PLAYER_H
#define PLAYER_H

#define ROWS 2      // �� ũ��
#define COLUMNS 4   // �� ũ��
#define MAX_LENGTH 20

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//���� �����Ȳ ����
extern int progress;

// �÷��̾� ���� ����ü
typedef struct Player{
    char name[MAX_LENGTH];
    int job;
    int difficulty;
} Player;

// �ں��� �κ��丮 ����ü
typedef struct Account {
    int account;
    int inventory[ROWS][COLUMNS];
}Account;

Player setPlayer(); //�÷��̾� �ʱ�ȭ
Account initAccount(int playerJob); //�ʱ� �ں� ����
int addAffect(Account* account, int color, int affect);

#endif