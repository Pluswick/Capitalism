#ifndef EVENT_H
#define EVENT_H

extern char narration[];

int checkTime();

void HRandomEvent(struct Player player, struct Account account, int randomValue);

void URandomEvent(struct Player player, struct Account account, int randomValue);

#endif 