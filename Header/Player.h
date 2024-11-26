#ifndef PLAYER_H
#define PLAYER_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//게임 진행상황 변수
extern int time;

// 플레이어 정보 구조체
typedef struct Player{
    char name[10];
    int job;
    int difficulty;
} Player;

// 자본과 인벤토리 구조체
typedef struct {
    int account;
    char inventory[2][5][20];
}Account;

Player setPlayer(); //플레이어 초기화
void initAccount(Account* account, int initialBalance); //초기 자본 설정

#endif