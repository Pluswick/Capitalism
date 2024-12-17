#include<stdio.h>
#include<windows.h> // Sleep 함수 사용

#include"TypingEffect.h"

void typewriterEffect(const char* str) 
{
    while (*str) {
        putchar(*str++);  // 한 글자씩 출력
        fflush(stdout);   // 출력 버퍼 비우기
        Sleep(DELAY);        // 밀리초 단위 지연
    }
}
