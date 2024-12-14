#ifndef EVENT_H
#define EVENT_H

extern char narration[];

int checkTimeH();
int checkTimeU();

int HRandomEvent(struct Player player, struct Account account);

int URandomEvent(struct Player player, struct Account account);

#endif 