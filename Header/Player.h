#ifndef PLAYER_H
#define PLAYER_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//���� �����Ȳ ����
extern int time;

// �÷��̾� ���� ����ü
typedef struct Player{
    char name[10];
    int job;
    int difficulty;
} Player;

// �ں��� �κ��丮 ����ü
typedef struct {
    int account;
    char inventory[2][5][20];
}Account;

Player setPlayer(); //�÷��̾� �ʱ�ȭ
void initAccount(Account* account, int initialBalance); //�ʱ� �ں� ����

#endif