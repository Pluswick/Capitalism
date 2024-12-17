#ifndef ENDING_H
#define ENDING_H

extern int choice;

int endingChoice(Player* player);

void endingResult(Account* account, int chosenlover);

void trueEnding(int chosenLover);

void badEnding_m(int chosenLover);
void badEnding_l(int chosenLover);

void brokeEnding(int balance);

#endif // ENDING_H