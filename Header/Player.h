#ifndef PLAYER_H
#define PLAYER_H

#define ROWS 2      // 행 크기
#define COLUMNS 4   // 열 크기
#define MAX_LENGTH 20

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//게임 진행상황 변수
extern int progress;

// 플레이어 정보 구조체
typedef struct Player{
    char name[MAX_LENGTH];
    int job;
    int difficulty;
} Player;

// 자본과 인벤토리 구조체
typedef struct Account {
    int account;
    int inventory[ROWS][COLUMNS];
}Account;

Player setPlayer(); //플레이어 초기화
Account initAccount(int playerJob); //초기 자본 설정
int addAffect(Account* account, int color, int affect);

#endif