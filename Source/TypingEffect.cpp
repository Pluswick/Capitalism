#include<stdio.h>
#include<windows.h> // Sleep �Լ� ���

#include"TypingEffect.h"

void typewriterEffect(const char* str) 
{
    while (*str) {
        putchar(*str++);  // �� ���ھ� ���
        fflush(stdout);   // ��� ���� ����
        Sleep(DELAY);        // �и��� ���� ����
    }
}
