#include<stdio.h>
#include<string.h>

#include"Event.h"
#include"Player.h"
#include"ClearScreen.h"
#include"TypingEffect.h"
#include"Random.h"

int HRandomEvent(struct Player player,struct Account account) 
{
    char text[10001] = {};
    char answer = 'c';
    int profit = 0;
    
    int affect = 0;
    int color = 0;

reroll:
    //난수 초기화(NULL)
    initRandom();
    //난이도(범위)에 따라 난수 생성
    randomValue = getRandomValue(&player);
    //printf("randomValue= %d\n", randomValue); //난수 확인용 코드

    switch (progress) {
        // Day1-3's day
    case 1:
    case 4:
    case 7:

    {
        if (0 <= randomValue && randomValue < 25)
        {
            if (dRepeat[0])
            {
                goto reroll;
            }
            dRepeat[0] = 1;
            strcpy_s(text, sizeof(text),
                "등굣길에 학교 서열 32위를 발견했다.\n"
                "얘랑 싸워서 이기면 내가 서열32위인데…\n"
                "(나는 서열 103위다.)\n\n"
                "결투를 신청할까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "\n내가 이길 것 같아 시비를 걸었지만\n"
                        "그대로 수플렉스로 꽂혀졌다…\n"
                        "병원을 가봐야만 할 것 같다.\n\n");
                    typewriterEffect(text);
                    profit = -40000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "\n승산이 없어 보여 얌전히 지나가려는데\n"
                        "그대로 삥을 뜯겼다...\n\n");
                    typewriterEffect(text);
                    profit = -30000; //선택지에 따른 손익
                    break;
                default:
                    strcpy_s(text, sizeof(text),
                        "Y(y), N(n) 으로 선택해주세요.\n"
                        "\n\n");
                    typewriterEffect(text);
                    continue;
                }
                break;
            }

        }



        else if (25 <= randomValue && randomValue < 50)
        {
            if (dRepeat[1])
            {
                goto reroll;
            }
            dRepeat[1] = 1;
            strcpy_s(text, sizeof(text),
                "등굣길에 차도 건너편에서 나와 친한 친구들을 발견했다.\n\n"
                "뛰어가서 친구들과 같이 등교할까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'N':
                case 'n':
                    strcpy_s(text, sizeof(text),
                        "차도에 차가 많아 그냥 혼자 가기로 했다.\n");
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    break;

                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "뛰어가다 차에 치이고 말았다… \n");
                    typewriterEffect(text); // 50ms 딜레이
                    profit = -30000; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }

        }

        else if (50 <= randomValue && randomValue < 75)
        {
            if (dRepeat[2])
            {
                goto reroll;
            }
            dRepeat[2] = 1;
            strcpy_s(text, sizeof(text),
                "처음으로 일찍 일어나서 신나게 아침을 먹었는데\n"
                "너무 많이 먹어 배탈이 났다.\n\n"
                "택시를 탈까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "지각을 할 것 같아 택시를 탔다.\n");
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = -10000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "돈이 없어 택시를 안 타기로 결정했다.\n"
                        "조금이라도 아껴야지...\n");
                    typewriterEffect(text); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

        else if (75 <= randomValue && randomValue < 100)
        {
            if (dRepeat[3])
            {
                goto reroll;
            }
            dRepeat[3] = 1;
            strcpy_s(text, sizeof(text),
                "“으악 지각이다!!”\n\n"
                "항상 지각하는 나는 오늘도 지각을 한다.\n"
                "지각을 하는 날에는 항상 아침을 먹지 못해 배가 고프다.\n"
                "집 앞엔 GS25가 있고 삼각김밥이 완벽하게 채워져 있다.\n\n"
                "편의점을 들를까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "삼각김밥만 사려했지만\n"
                        "너무 배가 고파 많이 사버렸다...\n");
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = -10000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "배고프지만 돈이 없으니 그냥 등교하기로 한다.\n"
                        "비틀비틀 걸어간다.\n");
                    typewriterEffect(text); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }



    }
        break;

        // Day1-3's afternoon
    case 2:
    case 5:
    case 8:
    {
        if (0 <= randomValue && randomValue < 25)
        {
            if (aRepeat[0])
            {
                goto reroll;
            }
            aRepeat[0] = 1;
            strcpy_s(text, sizeof(text),
                "체육시간이 돼서 체육복을 찾으러 사물함을 뒤지는데\n"
                "체육복이 엉망진창으로 찢어져 있다.\n"
                "전교 1등인 나를 질투하는 애들이 한 것 같다.\n\n"
                "친구에게 체육복을 빌릴까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "이 상태로는 도저히 체육수업을 들을 수 없어\n"
                        "제일 깨끗할 것 같은 전학생에게 빌리기로 했다.\n"
                        "하지만...\n"
                        "체육을 너무 열심히 한 탓에 체육복이 찢어졌다...!\n"
                        "체육 수업을 다 듣고 교실로 들어가려 하는데\n"
                        "빨간 머리가 나에게 말을 건다\n\n"
                        "“체육복 너가 찢은 거야?”\n\n"
                        "“응… 미안해. 여기 체육복 수선비…”\n\n"
                        "“와”\n"
                        "빨간 머리는 그대로 뒤돌아 가버렸다.\n");
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = -20000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "빌리긴 귀찮으니 그냥 입지 않기로 했다.\n"
                        "체육 수업을 들으러 운동장으로 나가려 하는데\n"
                        "빨간 머리가 나에게 말을 건다.\n\n"
                        "“체육복 없어?”\n\n"
                        "“응”\n\n"
                        "“나 체육복 두 개야. 빌려줄 수 있어.”\n\n"
                        "“사이즈가 작을 것 같은데…”\n\n"
                        "“내 생각엔… 괜찮을 것 같아”\n\n"
                        "빨간 머리는 솔직한 편인 것 같다.\n");
                    typewriterEffect(text); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

        else if (25 <= randomValue && randomValue < 50)
        {
            if (aRepeat[1])
            {
                goto reroll;
            }
            aRepeat[1] = 1;
            strcpy_s(text, sizeof(text),
                "수업을 열심히 듣다 보니 벌써 3교시가 되었다.\n"
                "어제 밤을 샜더니 너무 졸리다.\n"
                "안 자면 죽을 것 같다.\n\n"
                "잠시만 눈을 감을까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "눈을 떠보니 쉬는시간조차 지나 있었다.\n"
                        "배가 너무 고파 매점을 갔다.\n"
                        "매점에 가니 초록머리와 파란머리가 있었다.\n"
                        "그들은 에비앙만 샀다...\n"
                        "나는 옆에서 초코에몽을 골랐다.\n"
                        "계산을 하려던 순간 카드가 사라진 것을 깨달았다!\n"
                        "카드를 찾고 있자 옆에서 초록머리가 말을 건다.\n\n"
                        "“혹시… 카드가 없니?”\n\n"
                        "“잃어버린 것 같아...”\n\n"
                        "“이거 써!”\n\n"
                        "초록머리가 블랙카드를 주자 파란머리가 일반 체크카드로 바꿔서 줬다.\n"
                        "초록머리는 사회에 적응하지 못한 것 같다.\n"
                        "커피를 마신 탓인지 별로 졸지 않았다.\n"
                        "뿌듯함에 기분이 좋았다!\n"
                        "그런데 파란머리가 나에게 비타500을 주고 갔다.\n\n"
                        "“헤드뱅잉 심하더라...” \n"
                    );
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "그래도 전교 1등의 자존심을 지켜야 한다!\n"
                        "커피를 사 마시고 자지 않으려고 노력했다.\n"
                    );
                    typewriterEffect(text); // 50ms 딜레이
                    profit = -10000; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }
        else if (50 <= randomValue && randomValue < 75)
        {
            if (aRepeat[2])
            {
                goto reroll;
            }
            aRepeat[2] = 1;
            strcpy_s(text, sizeof(text),
                "수업이 끝나고 쉬는 시간이 되자\n"
                "내 전 애인의 전 애인의 친구가\n"
                "나에게 내 최애 음료수를 준다.\n"
                "의심스럽지만 너무 맛있어 보인다.\n\n"
                "음료수를 먹을까?\n"
            );
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "음료수를 다 먹고 배가 점점 아프기 시작했다.\n"
                        "결국 집에 가는 길에 병원을 갔다.\n\n"
                        "병원을 갔다가 집에 가는 길에 파파라치에게 쫓기고 있는 빨간 머리를 만났다.\n"
                        "피곤에 찌든 빨간 머리가 불쌍해 잠시 숨겨줬다.\n\n"
                        "“고..고….고..”\n\n"
                        "“뭐?”\n\n"
                        "“고구마”\n"
                    );
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "너무 의심스러워 먹지 않기로 했다.\n"
                        "하지만 거절을 거절하는 그 친구 때문에 곤란하던 찰나\n"
                        "옆에 있는 빨간 머리가 음료수를 뺏어 마셨다.\n"
                        "빨간 머리는 다음 교시부터 보이지 않았다...\n"
                    );
                    typewriterEffect(text); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

        else if (75 <= randomValue && randomValue < 100)
        {
            if (aRepeat[3])
            {
                goto reroll;
            }
            aRepeat[3] = 1;
            strcpy_s(text, sizeof(text),
                "수업이 끝나고 점심시간이 되어 점심을 먹으니 배가 부르다.\n"
                "배가 부르니 식곤증이 몰려온다.\n\n"
                "잠도 깰 겸 운동장으로 산책을 갈까?\n"
            );
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "운동장으로 나갔다가 길에서 만원을 주웠다!\n"
                        "만원을 줍고 돌아오는데 검은 머리와 마주쳤다.\n"
                        "검은 머리는 뭔가를 찾고 있는 듯했다.\n"
                    );
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = 10000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "졸리니 그냥 교실에서 잠을 자야겠다.\n"
                        "분명 더웠는데 갑자기 추워진 느낌이 들어 잠에서 깼다.\n"
                        "에어컨을 켰나 보려고 고개를 드니 옆에 검은 머리가 있다.\n"
                        "검은 머리는 차가운 표정과 차가운 눈빛으로 날 보고 있었다...\n"
                    );
                    typewriterEffect(text); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

    }
        break;

        // Day1-3's night
    case 3:
    case 6:
    case 9:

    {
        if (0 <= randomValue && randomValue < 25)
        {
            if (nRepeat[0])
            {
                goto reroll;
            }
            nRepeat[0] = 1;
            strcpy_s(text, sizeof(text),
                "학교가 끝났다.\n"
                "모의고사가 얼마 안 남았다...\n"
                "독서실을 가서 공부해 부모님께 효도해야겠다.\n\n"
                "비싼 독서실이 공부도 잘 되겠지? 비싼 독서실로 가야겠다!\n"
            );
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");
            profit = -20000;
        }

        else if (25 <= randomValue && randomValue < 50)
        {
            if (nRepeat[1])
            {
                goto reroll;
            }
            nRepeat[1] = 1;
            strcpy_s(text, sizeof(text),
                "친구가 학교 끝나고 저녁을 사준다고 한다.\n\n"
                "따라갈까?\n"
            );
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "공부도 잘하고 잘난 나를 질투한 친구가 판 함정이었다.\n"
                        "밥 사준다는 친구를 따라 굴다리로 들어가니\n"
                        "일진들이 나를 둘러쌌다…\n"
                    );
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = -20000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "공짜 좋아하면 대머리 된다고 누가 그랬다.\n"
                        "그냥 집에 가서 공부를 해야겠다.\n"
                    );
                    typewriterEffect(text); // 50ms 딜레이
                    profit = -10000; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

        else if (50 <= randomValue && randomValue < 75)
        {
            if (nRepeat[2])
            {
                goto reroll;
            }
            nRepeat[2] = 1;
            strcpy_s(text, sizeof(text),
                "야자 시간에 학교를 탈출하는 초록 머리와 빨간 머리를 발견했다.\n\n"
                "반장으로서 말려야 할까?\n"
            );
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "반장의 명예를 걸고 말리러 나갔다.\n"
                        "하지만 둘은 지갑을 놓고 왔다며\n"
                        "나에게 만원을 빌리고 탈출해버렸다.\n"
                    );
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = -10000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "그냥 교실에서 공부나 해야겠다.\n");
                    typewriterEffect(text); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }
        else if (75 <= randomValue && randomValue < 100)
        {
            if (nRepeat[3])
            {
                goto reroll;
            }
            nRepeat[3] = 1;
            strcpy_s(text, sizeof(text),
                "다른 알바생이 대타를 부탁한다.\n"
                "돈을 벌까 열심히 공부를 해서 부모님께 효도할까?\n\n"
                "알바를 할까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "알바를 하기로 한다.\n"
                        "부모님도 이걸 바라실 거야.\n"
                    );
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = +20000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "그냥 스터디카페 가서 공부를 해야겠다.\n");
                    typewriterEffect(text); // 50ms 딜레이
                    profit = -10000; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

    }
        break;

        // Day4-7's day
    case 10:
    case 13:
    case 16:
    case 19:
    {
        if (0 <= randomValue && randomValue < 20)
        {
            if (dRepeat[4])
            {
                goto reroll;
            }
            dRepeat[4] = 1;
            strcpy_s(text, sizeof(text),
                "아침에 공부를 하기위해 일찍 등교를 했는데\n"
                "검정 머리 전학생을 발견했다.\n"
                "검정 머리는 길을 잃어버린 것 같다.\n\n"
                "길을 찾아줄까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "“길을 잃었구나”\n\n"
                        "“…”\n\n"
                        "“너 우리 반이잖아. 나 따라와”\n\n"
                        "“신경 꺼”\n\n"
                        "검은 머리는 까칠하게 말하곤\n"
                        "멀리서 나를 따라왔다.\n"
                    );
                    typewriterEffect(text);
                    profit = 0;
                    affect = -2; //호감도 변동 크기
                    color = 3; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "검은 머리와 눈이 마주쳤지만 그냥 모르는 척하자 나에게 먼저 말을 걸어왔다\n\n"
                        "“저…”\n\n"
                        "“왜?”\n\n"
                        "“길을 안내해라”\n");
                    typewriterEffect(text);
                    profit = 0; //선택지에 따른 손익
                    affect = 2; //호감도 변동 크기
                    color = 3; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;
                default:
                    strcpy_s(text, sizeof(text),
                        "Y(y), N(n) 으로 선택해주세요.\n"
                        "\n\n");
                    typewriterEffect(text);
                    continue;
                }
                break;
            }

        }

        else if (20 <= randomValue && randomValue < 40)
        {
            if (dRepeat[5])
            {
                goto reroll;
            }
            dRepeat[5] = 1;
            strcpy_s(text, sizeof(text),
                "등굣길에 길에 떨어진 명품 지갑을 발견했다.\n"
                "경찰서까지 갔다 오면 지각할 것 같은데\n\n"
                "지갑을 경찰서에 갖다 줄까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'N':
                case 'n':
                    strcpy_s(text, sizeof(text),
                        "고등학생은 지갑 찾아줄 시간이 없다.\n"
                        "정말 순수한 호기심에 지갑을 열어보니\n"
                        "수표로 가득했다. 이건 뭐 쓰지도 못할 것 같다.\n"
                        "지갑을 있던 그 자리에 그대로 두고 학교로 향했다.\n"
                    );
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    break;

                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "학교에 늦을 것 같지만 지갑을 가져다 줘야겠다.\n"
                        "지갑을 자세히 살펴보니 전세계에 단 3개밖에 없다는 명품 지갑이었다…!\n"
                        "이 지갑 주인은 재벌이 분명하다.\n"
                        "설마 우리 학교 학생껀 아니겠지?\n\n"
                        "“그거 내 꺼야”\n"
                        "파란 머리가 등 뒤에서 말했다\n\n"
                        "“찾아줘서 고마워 사례비 줄게”\n\n"
                        "“그래! 대신 내가 찾아줬으니까 우리 친하게 지내는거다?”\n"
                        "파란 머리와 친해져야겠다.\n"
                    );
                    typewriterEffect(text); // 50ms 딜레이
                    profit = +50000; //선택지에 따른 손익
                    affect = 3; //호감도 변동 크기
                    color = 1; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }

        }

        else if (40 <= randomValue && randomValue < 60)
        {
            if (dRepeat[6])
            {
                goto reroll;
            }
            dRepeat[6] = 1;
            strcpy_s(text, sizeof(text),
                "등굣길에 리무진을 발견했다.\n"
                "리무진을 가까이서 처음 봐서 신기한데\n\n"
                "조금 구경할까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "리무진 주변을 얼쩡거리다가\n"
                        "나를 못 보고 움직인 리무진에 치여 병원에 갔다.\n"
                    );
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = -30000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "그냥 가자.\n\n"
                        "“차 태워줄까?”\n"
                        "안에서 요정이 말을 걸었다. 자세히 보니 초록 머리 전학생이었다.\n\n"
                        "“그래”\n");
                    typewriterEffect(text); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    affect = 2; //호감도 변동 크기
                    color = 2; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

        else if (60 <= randomValue && randomValue < 80)
        {
            if (dRepeat[7])
            {
                goto reroll;
            }
            dRepeat[7] = 1;
            strcpy_s(text, sizeof(text),
                "자전거를 타고 등교하다가\n"
                "갑자기 나타난 빨간 머리와 부딪혔다.\n"
                "빨간 머리에게서 병원비를 받을까\n"
                "아니면 너그러운 마음으로 넘어가줄까?\n\n"
                "병원비를 받을까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "돈도 많은 것 같으니 \n"
                        "그냥 병원비를 받기로 했다.\n");
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = 50000; //선택지에 따른 손익
                    affect = -2; //호감도 변동 크기
                    color = 0; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "좀 아픈척하다 괜찮다고 하니\n"
                        "빨간 머리가 감동을 받은 것 같다.\n");
                    typewriterEffect(text); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    affect = 3; //호감도 변동 크기
                    color = 0; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

        else if (80 <= randomValue && randomValue < 100)
        {
            if (dRepeat[8])
            {
                goto reroll;
            }
            dRepeat[8] = 1;
            strcpy_s(text, sizeof(text),
                "집 밖으로 나왔는데 이어폰을 두고 나왔다.\n"
                "다시 집으로 가서 챙길까\n"
                "귀찮으니 그냥 갈까?\n\n"
                "다시 집으로 갈까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "집으로 다시 가서 이어폰을 챙겨왔다.\n"
                    );
                    typewriterEffect(text);
                    profit = 0; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "다시 가기 귀찮아서 그냥 학교로 왔는데\n"
                        "도저히 참을 수 없어 편의점에서 사 버렸다.\n\n");
                    typewriterEffect(text);
                    profit = -10000; //선택지에 따른 손익
                    break;
                default:
                    strcpy_s(text, sizeof(text),
                        "Y(y), N(n) 으로 선택해주세요.\n"
                        "\n\n");
                    typewriterEffect(text);
                    continue;
                }
                break;
            }

        }

    }
        break;

        // Day4-7's afternoon
    case 11:
    case 14:
    case 17:
    case 20:

    {
        if (0 <= randomValue && randomValue < 20)
        {
            if (aRepeat[4])
            {
                goto reroll;
            }
            aRepeat[4] = 1;
            strcpy_s(text, sizeof(text),
                "수업 중에 뒤에서 쪽지가 날아온다.\n"
                "선생님 몰래 읽을까 무시할까?\n\n"
                "읽어볼까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "읽으려던 순간 선생님께 걸렸다.\n"
                        "흔들리는 눈빛을 보니 초록 머리가 쪽지를 쓴 것 같지만\n"
                        "그냥 내가 혼났다.\n");
                    typewriterEffect(text);
                    profit = 0; //선택지에 따른 손익
                    affect = 3; //호감도 변동 크기
                    color = 2; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "따가운 시선이 느껴졌지만 무시했다.\n");
                    typewriterEffect(text);
                    profit = 0; //선택지에 따른 손익
                    affect = -3; //호감도 변동 크기
                    color = 2; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;
                default:
                    strcpy_s(text, sizeof(text),
                        "Y(y), N(n) 으로 선택해주세요.\n"
                        "\n\n");
                    typewriterEffect(text);
                    continue;
                }
                break;
            }

        }

        else if (20 <= randomValue && randomValue < 40)
        {
            if (aRepeat[5])
            {
                goto reroll;
            }
            aRepeat[5] = 1;
            strcpy_s(text, sizeof(text),
                "자율적으로 2명씩 팀을 정하는 수업에서\n"
                "빨간 머리와 파란 머리가 같이 하자고 제안한다.\n\n"
                "누구와 짝을 할까? 빨간 머리가 재촉한다.\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'N':
                case 'n':
                    strcpy_s(text, sizeof(text),
                        "”고마워“\n\n"
                        "”!“\n\n"
                        "”…뭐야 그 놀란 표정은“\n"
                        "파란 머리는 무뚝뚝한줄 알았더니 고맙다고 표현도 한다.\n"
                    );
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    affect = 4; //호감도 변동 크기
                    color = 1; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;

                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "“역시 넌 내 단짝이야.”\n\n"
                        "“아직 아니야.”\n\n"
                        "“아 단짝은 싫어. 어색한 사이하자.”\n"
                        "빨간 머리는 좋으면서 계속 장난만 치는 것 같다.\n"
                    );
                    typewriterEffect(text); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    affect = 4; //호감도 변동 크기
                    color = 0; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }

        }

        else if (40 <= randomValue && randomValue < 60)
        {
            if (aRepeat[6])
            {
                goto reroll;
            }
            aRepeat[6] = 1;
            strcpy_s(text, sizeof(text),
                "오늘은 발런타인데이다.\n"
                "애들이 사천왕에게 줄 초콜릿을 싹쓸이해갔다.\n\n"
                "그동안 고마웠던 일들도 있었으니 나도 사줄까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "편의점에 비싼 초콜릿 밖에 남지 않았다…\n"
                        "어쩔 수 없이 삼만원짜리 초콜릿을 사서 줬다.\n"
                    );
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = -30000; //선택지에 따른 손익
                    affect = 5; //호감도 변동 크기
                    for (int i = 0; i < 4; i++)
                    {
                        color = i;
                        addAffect(&account, color, affect);
                    }
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "돈도 없으니 사지 말자.\n"
                        "서운해 하는 표정들이 마음에 걸린다.\n");
                    typewriterEffect(text); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    affect = -2;
                    for (int i = 0; i < 4; i++)
                    {
                        color = i;
                        addAffect(&account, color, affect);
                    }
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

        else if (60 <= randomValue && randomValue < 80)
        {
            if (aRepeat[7])
            {
                goto reroll;
            }
            aRepeat[7] = 1;
            strcpy_s(text, sizeof(text),
                "기다리던 점심 시간이다.\n"
                "나같은 모범생은 당연히 급식을 먹어야 하지만\n"
                "오늘따라 메뉴가 심상치 않다.\n\n"
                "급식을 먹을까?\n"
            );
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'N':
                case 'n':
                    strcpy_s(text, sizeof(text),
                        "메뉴가 별로라 매점으로 갔다. \n"
                        "오늘다라 맛있어 보이는게 너무 많다.\n");
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = -15000; //선택지에 따른 손익
                    break;

                case 'Y':
                case 'y':
                    strcpy_s(text, sizeof(text),
                        "급식을 받아왔는데 얼떨결에 사천왕들이랑 같이 먹게 됐다.\n"
                        "대화를 하면서 먹다 보니 더 친해진 것 같다.\n");
                    typewriterEffect(text); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    affect = 2;
                    for (int i = 0; i < 4; i++)
                    {
                        color = i;
                        addAffect(&account, color, affect);
                    }
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

        else if (80 <= randomValue && randomValue < 100)
        {
            if (aRepeat[8])
            {
                goto reroll;
            }
            aRepeat[8] = 1;
            strcpy_s(text, sizeof(text),
                "검정머리가 웬일로 점심시간에\n"
                "반대항 축구를 한다는 소식을 들었다.\n\n"
                "응원하러 갈까?\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "이온 음료를 사서 응원하러 갔다.\n"
                    );
                    typewriterEffect(text);
                    profit = -5000; //선택지에 따른 손익
                    affect = 4; //호감도 변동 크기
                    color = 3; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "그냥 교실에 있어야겠다.\n");
                    typewriterEffect(text);
                    profit = 0; //선택지에 따른 손익
                    break;
                default:
                    strcpy_s(text, sizeof(text),
                        "Y(y), N(n) 으로 선택해주세요.\n"
                        "\n\n");
                    typewriterEffect(text);
                    continue;
                }
                break;
            }

        }

    }
        break;

        // Day4-7's night
    case 12:
    case 15:
    case 18:

    {
        if (0 <= randomValue && randomValue < 20)
        {
            if (nRepeat[4])
            {
                goto reroll;
            }
            nRepeat[4] = 1;
            strcpy_s(text, sizeof(text),
                "오랜만에 친구들이 놀자고 제안한다.\n"
                "모범생으로서 친구관계도 잘 관리해야한다!\n"
                "학교 끝나고 카페를 갈까 피시방을 갈까 고민하다\n"
                "정신을 차려 보니 풀코스로 놀고 난 이후였다.\n"
            );
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");
            profit = -20000;
        }

        else if (20 <= randomValue && randomValue < 40)
        {
            if (nRepeat[5])
            {
                goto reroll;
            }
            nRepeat[5] = 1;
            strcpy_s(text, sizeof(text),
                "하굣길에 붕어빵과 떡볶이 포장마차를 발견했다.\n\n"
                "둘 중 뭘 먹을까?(붕어빵:Y, 떡볶이:N)\n"
            );
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "붕어빵을 사려는데 붕어빵을 사려는 빨간 머리를 만났다.\n"
                        "우리는 같이 붕어빵을 먹고 놀았다.\n"
                        "꽤나 즐거운 밤이었다.\n"
                    );
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = -3000; //선택지에 따른 손익
                    affect = 4; //호감도 변동 크기
                    color = 0; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "떡볶이를 사려는데 앞에서 서성거리는 검은 머리를 만났다.\n"
                        "내가 떡볶이를 시키는데 중간에 말을 끊었다.\n\n"
                        "”이모님, 여기 떡볶이”\n\n"
                        "”2인분”\n\n"
                        "”2인분이요...”\n\n"
                        "묘한 기류에 휩싸여 떡볶이를 먹었다.\n"
                    );
                    typewriterEffect(text); // 50ms 딜레이
                    profit = -10000; //선택지에 따른 손익
                    affect = 4; //호감도 변동 크기
                    color = 3; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

        else if (40 <= randomValue && randomValue < 60)
        {
            if (nRepeat[6])
            {
                goto reroll;
            }
            nRepeat[6] = 1;
            strcpy_s(text, sizeof(text),
                "하교를 하려는데 음악실에서 피아노 소리가 들린다.\n"
                "밤에 음악실 문을 열면 안된다는 소문을 들었는데…\n\n"
                "열어볼까?"
            );
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "음악실 문을 여니 웬 요정이 피아노를 치고 있었다.\n"
                        "초록 머리였다.\n"
                        "초록 머리는 나에게 피아노를 가르쳐 주겠다며 나를 피아노로 이끌었다.\n"
                    );
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    affect = 4; //호감도 변동 크기
                    color = 2; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "소문이 무서우니 그냥 가야겠다.\n");
                    typewriterEffect(text); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

        else if (60 <= randomValue && randomValue < 80)
        {
            if (nRepeat[7])
            {
                goto reroll;
            }
            nRepeat[7] = 1;
            strcpy_s(text, sizeof(text),
                "야자를 하는데 이어폰이 망가졌다.\n"
                "양 옆자리에 검은 머리와 파란 머리가 있는데\n\n"
                "누구에게 이어폰을 빌릴까?(검은머리:Y, 파란머리:N)\n");
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "검정 머리는 아무 말 없이 나에게 이어폰을 던져줬다.\n"
                        "예전처럼 차가운 눈빛은 아니었다.\n"
                    );
                    typewriterEffect(text); // 25ms 딜레이
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    affect = 3; //호감도 변동 크기
                    color = 3; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "파란 머리는 한 쪽은 자기가 끼고 한 쪽만 나에게 줬다.\n"
                        "같은 노래를 들으며 공부했다.\n"
                    );
                    typewriterEffect(text); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    affect = 4; //호감도 변동 크기
                    color = 1; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;

                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

        else if (80 <= randomValue && randomValue < 100)
        {
            if (nRepeat[8])
            {
                goto reroll;
            }
            nRepeat[8] = 1;
            strcpy_s(text, sizeof(text),
                "하교를 하려하는데 비가 온다.\n"
                "겨우겨우 학교 앞 버스 정류장까지 뛰어갔더니\n"
                "비가 점점 더 많이 내리기 시작한다.\n\n"
                "내 앞에 리무진이 멈춰선다.\n"
                "그 안에서 빨간머리가 창문을 내린다.\n\n"
                "“우산 없어?”\n\n"
                "“응…”\n\n"
                "“이걸로 우산 사”\n"
                "빨간 머리가 5만원권을 주곤 고맙다고 말할 틈도 없이 리무진을 타고 가버렸다.\n"
            );
            typewriterEffect(text); // 25ms 딜레이
            printf("\n");
            profit = 50000;
        }

    }
        break;

    case 0:
    case 21:
        break;

    default:
        printf("Invalid progress value\n프로그램을 재실행 해주세요.\n");
        exit(1); // 프로그램 즉시 중단

        break;
    }

    //Preventing events of Day1-3 showing up
    if (progress == 9)
    {
        for (int i = 0; i < 4; i++)
        {
            dRepeat[i] = 1;
            aRepeat[i] = 1;
            nRepeat[i] = 1;
        }
    }

    //손익 발생시 출력, 0이면 잔고 출력
    if (0 < progress && progress < 21)
    {
        if (profit > 0)
            printf("+%d원!\n", profit);

        else if (profit < 0)
            printf("%d원!\n", profit);
        else
            printf("잔고: %d원\n", account.account);

        account.account += profit;

        printf("Enter 키를 눌러 진행하세요");

        while (getchar() != '\n'); // 이전 입력 버퍼 비우기
        getchar(); // 사용자 입력 대기
    }
    return account.account;
}