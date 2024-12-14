#ifndef PLAYER_H
#define PLAYER_H

#define ROWS 2      // 첫 번째 차원 크기
#define COLUMNS 4   // 두 번째 차원 크기
#define MAX_LENGTH 20 // 문자열 최대 길이

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
    char inventory[ROWS][COLUMNS][MAX_LENGTH];
}Account;

Player setPlayer(); //플레이어 초기화
Account initAccount(int playerJob); //초기 자본 설정

#endif