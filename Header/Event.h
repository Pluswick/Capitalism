#ifndef EVENT_H
#define EVENT_H
#define MAX_LENGTH 10001
#define MAX_EVENT 9
#define MAX_BUFFER 1024

extern char* text;           // 문자열 포인터 선언
extern size_t buffer_size;   // 버퍼 크기 선언
extern char* narration;

extern int dRepeat[MAX_EVENT];
extern int aRepeat[MAX_EVENT];
extern int nRepeat[MAX_EVENT];

int checkTimeH();
int checkTimeU();

int HRandomEvent(struct Player player, struct Account account);

int URandomEvent(struct Player player, struct Account account);

#endif 