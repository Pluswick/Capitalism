#include<stdio.h>
#include <windows.h> // Sleep �Լ� ���

#include"TypingEffect.h"

void typewriterEffect(const char* text, int delay) {
    for (const char* p = text; *p != '\0'; ++p) {
        printf("%c", *p);    // �� ���ھ� ���
        fflush(stdout);      // ��� ���۸� ��� �÷���
        Sleep(delay);        // �и��� ���� ����
    }
}
