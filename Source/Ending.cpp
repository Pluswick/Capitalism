#include"ClearScreen.h"
#include"Event.h"
#include"TypingEffect.h"
#include"Ending.h"

const char *colors[] = {"빨간", "파란", "초록", "검은"};

void brokeEnding(int balance)
{
    //printf("잔고가 0원 이하가 되었습니다.\n다음엔 좀 더 신중해보세요!\n");
    typewriterEffect("잔고가 0원 이하가 되었습니다.\n다음엔 좀 더 신중해보세요!\n");
}

void trueEnding(int chosenLover)
{
    printf("\n");
    typewriterEffect(colors[chosenLover]);
    typewriterEffect(" 머리는 고백을 받아주었다.\n");
    typewriterEffect(colors[chosenLover]);
    typewriterEffect("색 하트 엔딩\n\n");
}

void badEnding_m(int chosenLover)
{
    printf("\n");
    typewriterEffect(colors[chosenLover]);
    typewriterEffect(" 머리는 돈을 막 쓰는 사람은 싫다며 고백을 거절했다.\n");
    typewriterEffect(colors[chosenLover]);
    typewriterEffect("색 지갑 엔딩\n\n");
}

void badEnding_l(int chosenLover)
{
    printf("\n");
    typewriterEffect(colors[chosenLover]);
    typewriterEffect(" 머리는 나를 좋아하지 않는다며 고백을 거절했다.\n");
    typewriterEffect(colors[chosenLover]);
    typewriterEffect("색 깨진 하트 엔딩\n\n");
}

int endingChoice(Player* player)
{
    int choice = -1;

    originalClearScreen();
    //직업별 엔딩 멘트
    if (player->job == 1)
    {
        narration = (char*)malloc(buffer_size * sizeof(char));
        if (narration == NULL) {
            printf("narration 버퍼 메모리 할당 실패\n");

            exit(1);
        }

        strcpy_s(narration, buffer_size,
            "모범생으로서 공부만 하던 나의 학창시절에\n"
            "어쩌면 마지막일지도 모르는 핑크빛 기회가 찾아왔다.\n"
            "사대천왕은 모두 각자의 매력이 있고\n"
            "모두가 나를 좋아하는 것만 같다.\n"
            "어쩌면 오해일 수도 있지만 한번 용기를 내어 고백하자.\n\n"
            "누구에게 내 마음을 고백할까?\n"
            "(엔딩은 플레이어의 잔고와 여태까지 이벤트에서 발생한 호감도가 영향을 끼칩니다.)\n"
            "(고백할 대상을 번호로 선택해주세요: 1.빨강 2.파랑 3.초록 4.검정)\n");

        // 타자기 효과 출력
        typewriterEffect(narration); // 50ms 딜레이
        printf("\n");

        // 메모리 해제
        free(narration);
        narration = NULL;

    }

    else if (player->job==2)
    {
        narration = (char*)malloc(buffer_size * sizeof(char));
        if (narration == NULL) {
            printf("narration 버퍼 메모리 할당 실패\n");

            exit(1);
        }

        strcpy_s(narration, buffer_size,
            "아무래도 나에게도 두근두근 캠퍼스 라이프가 시작될 것만 같다.\n"
            "그런데 고민이다.\n"
            "도대체 누구를 선택해야 할까?\n"
            "각자의 매력이 있고 모두가 나를 좋아하는 것만 같다.\n\n"
            "누구에게 내 마음을 고백할까?\n"
            "(엔딩은 플레이어의 잔고와 여태까지 이벤트에서 발생한 호감도가 영향을 끼칩니다.)\n"
            "(고백할 대상을 번호로 선택해주세요: 1.빨강 2.파랑 3.초록 4.검정)\n");

        // 타자기 효과 출력
        typewriterEffect(narration); // 50ms 딜레이
        printf("\n");

        // 메모리 해제
        free(narration);
        narration = NULL;

    }
    

    while (1)
    {
        narration = (char*)malloc(buffer_size * sizeof(char));
        if (narration == NULL) {
            printf("narration 버퍼 메모리 할당 실패\n");

            exit(1);
        }

        printf("번호를 입력해주세요(1~4): ");
        scanf_s("%d", &choice);

        switch (choice)
        {
        case '1':
            strcpy_s(narration, buffer_size,
                "장난스럽고 활발한 빨간 머리 같은 사람이 좋다.\n"
                "빨간 머리에게 내 마음을 고백하자.\n"
            );
            typewriterEffect(narration); // 25ms 딜레이
            printf("\n");

            break;

        case '2':
            strcpy_s(narration, buffer_size,
                "차갑기만 할 것 같던 파란 머리가 점점 따듯하게 반응하는 모습이 좋아졌다.\n"
                "파란 머리에게 내 마음을 고백하자.\n"
            );
            typewriterEffect(narration); // 50ms 딜레이
            printf("\n");

            break;

        case '3':
            strcpy_s(narration, buffer_size,
                "요정같고 신비로운 분위기의 초록 머리에게 점점 빠져들었다.\n"
                "초록 머리에게 내 마음을 고백하자.\n"
            );
            typewriterEffect(narration); // 50ms 딜레이
            printf("\n");

            break;

        case '4':
            strcpy_s(narration, buffer_size,
                "비밀에 감싸인 검은 머리가 나에게 다가오면서 점점 더 궁금해지고 마음에 들어왔다.\n"
                "검은 머리에게 내 마음을 고백하자.\n"
            );
            typewriterEffect(narration); // 50ms 딜레이
            printf("\n");

            break;

        default:
            printf("1~4 의 번호로 선택해주세요.\n");
            continue;
        }
        // 메모리 해제
        free(narration);
        narration = NULL;

        break;
    }

    while (getchar() != '\n'); // 이전 입력 버퍼 비우기
    printf("Enter 키를 눌러 진행하세요");

    getchar(); // 사용자 입력 대기

    return choice - 1;
}

void endingResult(Account* account, int chosenLover) {
    if (account->account >= 50000)
    {
        if (account->lover[0][chosenLover] >= 4)
        {
            trueEnding(chosenLover);
        }
        else
        {
            badEnding_l(chosenLover);
        }
    }

    else
    {
        badEnding_m(chosenLover);
    }
}