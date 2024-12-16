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

reroll:
    //난수 초기화(NULL)
    initRandom();
    //난이도(범위)에 따라 난수 생성
    randomValue = getRandomValue(&player);
    printf("randomValue= %d\n", randomValue);

    //Day1-3's day
    if (progress == 1 || progress == 4 || progress == 7)
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
            typewriterEffect(text, 25); // 25ms 딜레이
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
                    typewriterEffect(text, 25);
                    profit = -40000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "\n승산이 없어 보여 얌전히 지나가려는데\n"
                        "그대로 삥을 뜯겼다...\n\n");
                    typewriterEffect(text, 25);
                    profit = -30000; //선택지에 따른 손익
                    break;
                default:
                    strcpy_s(text, sizeof(text),
                        "Y(y), N(n) 으로 선택해주세요.\n"
                        "\n\n");
                    typewriterEffect(text, 25);
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
            typewriterEffect(text, 25); // 25ms 딜레이
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
                    typewriterEffect(text, 25); // 25ms 딜레이
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    break;

                case 'y':
                case 'Y':
                    strcpy_s(text, sizeof(text),
                        "뛰어가다 차에 치이고 말았다… \n");
                    typewriterEffect(text, 25); // 50ms 딜레이
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
            typewriterEffect(text, 25); // 25ms 딜레이
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
                    typewriterEffect(text, 25); // 25ms 딜레이
                    printf("\n");
                    profit = -10000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "돈이 없어 택시를 안 타기로 결정했다.\n"
                        "조금이라도 아껴야지...\n");
                    typewriterEffect(text, 25); // 50ms 딜레이
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
                typewriterEffect(text, 25); // 25ms 딜레이
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
                        typewriterEffect(text, 25); // 25ms 딜레이
                        printf("\n");
                        profit = -10000; //선택지에 따른 손익
                        break;

                    case 'n':
                    case 'N':
                        strcpy_s(text, sizeof(text),
                            "배고프지만 돈이 없으니 그냥 등교하기로 한다.\n"
                            "비틀비틀 걸어간다.\n");
                        typewriterEffect(text, 25); // 50ms 딜레이
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
    //Day1-3's afternoon
    if (progress == 2 || progress == 5 || progress == 8)
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
            typewriterEffect(text, 25); // 25ms 딜레이
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
                    typewriterEffect(text, 25); // 25ms 딜레이
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
                    typewriterEffect(text, 25); // 50ms 딜레이
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
            typewriterEffect(text, 25); // 25ms 딜레이
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
                    typewriterEffect(text, 25); // 25ms 딜레이
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "그래도 전교 1등의 자존심을 지켜야 한다!\n"
                        "커피를 사 마시고 자지 않으려고 노력했다.\n"
                    );
                    typewriterEffect(text, 25); // 50ms 딜레이
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
            typewriterEffect(text, 25); // 25ms 딜레이
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
                    typewriterEffect(text, 25); // 25ms 딜레이
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
                    typewriterEffect(text, 25); // 50ms 딜레이
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
            typewriterEffect(text, 25); // 25ms 딜레이
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
                    typewriterEffect(text, 25); // 25ms 딜레이
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
                    typewriterEffect(text, 25); // 50ms 딜레이
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
    //Day1-3's night
    if (progress == 3 || progress == 6 || progress == 9) 
    {
        if (0 <= randomValue < 25)
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
            typewriterEffect(text, 25); // 25ms 딜레이
            printf("\n");
            profit = -20000;
        }

        else if (25 <= randomValue < 50)
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
            typewriterEffect(text, 25); // 25ms 딜레이
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
                    typewriterEffect(text, 25); // 25ms 딜레이
                    printf("\n");
                    profit = -20000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "공짜 좋아하면 대머리 된다고 누가 그랬다.\n"
                        "그냥 집에 가서 공부를 해야겠다.\n"
                    );
                    typewriterEffect(text, 25); // 50ms 딜레이
                    profit = -10000; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

        else if (50 <= randomValue < 75)
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
            typewriterEffect(text, 25); // 25ms 딜레이
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
                    typewriterEffect(text, 25); // 25ms 딜레이
                    printf("\n");
                    profit = -10000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "그냥 교실에서 공부나 해야겠다.\n");
                    typewriterEffect(text, 25); // 50ms 딜레이
                    profit = 0; //선택지에 따른 손익
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }
        else if (75 <= randomValue < 100)
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
            typewriterEffect(text, 25); // 25ms 딜레이
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
                    typewriterEffect(text, 25); // 25ms 딜레이
                    printf("\n");
                    profit = +20000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, sizeof(text),
                        "그냥 스터디카페 가서 공부를 해야겠다.\n");
                    typewriterEffect(text, 25); // 50ms 딜레이
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
    //Preventing events of Day1-3 showing up
    if (progress==9)
    {
        for (int i = 0; i < 4; i++)
        {
            dRepeat[i] = 1;
            aRepeat[i] = 1;
            nRepeat[i] = 1;
        }
    }
    //손익 발생시 출력, 0이면 잔고 출력
    if (0<progress && progress<21)
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