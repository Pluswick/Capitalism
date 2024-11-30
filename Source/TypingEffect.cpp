#include<stdio.h>
#include <windows.h> // Sleep 함수 사용

#include"TypingEffect.h"

void typewriterEffect(const char* text, int delay) {
    for (const char* p = text; *p != '\0'; ++p) {
        printf("%c", *p);    // 한 글자씩 출력
        fflush(stdout);      // 출력 버퍼를 즉시 플러시
        Sleep(delay);        // 밀리초 단위 지연
    }
}
