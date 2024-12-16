#ifndef EVENT_H
#define EVENT_H

extern char narration[];

extern int dRepeat[9];
extern int aRepeat[9];
extern int nRepeat[9];

int checkTimeH();
int checkTimeU();

int HRandomEvent(struct Player player, struct Account account);

int URandomEvent(struct Player player, struct Account account);

#endif 