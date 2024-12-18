#include"Event.h"
#include"Random.h"
#include"ClearScreen.h"
#include"TypingEffect.h"

int URandomEvent(struct Player player, struct Account account)
{
    size_t buffer_size = MAX_BUFFER;    // 버퍼 크기 초기화
    char* text = NULL;           // 문자열 포인터 초기화
    char answer = 'c';
    int profit = 0;

    int affect = 0;
    int color = 0;

    text = (char*)malloc(buffer_size * sizeof(char));
    if (text == NULL) {
        printf("Utext 버퍼 메모리 할당 실패!\n");

        exit(1);
    }

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
            strcpy_s(text, buffer_size,
                "전날 밤을 화려하게 장식해서 너무 피곤하다.\n\n"
                "커피를 살까?\n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "커피를 사야겠다.\n");
                    typewriterEffect(text);
                    profit = -5000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "커피를 안 사고 버티다가 교수님과 설레는 눈맞춤을 했다.\n"
                        "그게 마지막 기억이다.\n");
                    typewriterEffect(text);
                    profit = 0; //선택지에 따른 손익
                    break;
                default:
                    strcpy_s(text, buffer_size,
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
            strcpy_s(text, buffer_size,
                "학교를 가다가 설문 조사를 해달라는 부탁을 받았다.\n\n"
                "지금 빨리 안 가면 지각일 것 같은데 그냥 무시할까?\n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'N':
                case 'n':
                    strcpy_s(text, buffer_size,
                        "설문 조사를 해주었더니 유료 검사였다며 돈을 달라고 했다.\n"
                        "어이가 없다.\n");
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = -10000; //선택지에 따른 손익
                    break;

                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "그냥 무시하기로 했다.\n");
                    typewriterEffect(text); // 타자기 효과
                    profit = 0; //선택지에 따른 손익
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
            strcpy_s(text, buffer_size,
                "학교를 가다가 내 이상형이 나에게 말을 걸어온다.\n\n"
                "왜 말을 거는지 의심되는데 그냥 무시할까 말이라도 들어볼까?\n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "\"기운이 좋으신데, 같이 삼겹살 드시면서 말씀 좀 나눌 수 있을까요?\"\n"
                        "어느 샌가 식후땡까지 기다려주는 나를 발견했다.\n");
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = -35000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "뭔가 불길하다.\n"
                        "아쉽지만 그냥 가야겠다.\n");
                    typewriterEffect(text); // 타자기 효과
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
            strcpy_s(text, buffer_size,
                "어제 밤을 새서 일어나기가 너무 힘들다.\n\n"
                "아침 수업만 자체 휴강을 할까?\n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "과방 가서 더 자야겠다…\n");
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "그래도 가야할 것 같다. \n"
                        "카페인이 필요해…\n");
                    typewriterEffect(text); // 타자기 효과
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
            strcpy_s(text, buffer_size,
                "점심으로 학식을 먹으려 했는데 메뉴가 별로다.\n\n"
                "조금 비싸지만 배달을 시킬까? \n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "배달을 시키려 하는데 친한 선배를 만나 선배가 사주셨다.\n");
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "학식을 먹기로 했다.\n");
                    typewriterEffect(text); // 타자기 효과
                    profit = -7000; //선택지에 따른 손익
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
            strcpy_s(text, buffer_size,
                "학교에서 문화제를 한다. 많은 푸드 트럭이 와있다. \n"
                "학과 사람들과 어울려 청춘을 즐기며 축제를 즐길까 혼자 외롭고 쓸쓸하게 공부나 할까? \n\n"
                "축제를 즐길까?\n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "축제를 즐기기로 했다. \n");
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = -35000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "공부나 해야겠다. \n"
                        "절대로 축제에 가고 싶은 건 아니다. \n");
                    typewriterEffect(text); // 타자기 효과
                    profit = 0; //선택지에 따른 손익
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
            strcpy_s(text, buffer_size,
                "갑자기 공강이 2시간이나 생겼다. \n"
                "과방에 가서 시간을 보낼지 도서관에 가서 공부를 할 지 고민이다. \n\n"
                "과방에 갈까?\n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "사람들이 없을 시간이다. \n"
                        "과방으로 가야겠다. \n");
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "도서관에서 공부를 하려했다.\n"
                        "나는 하려고 했다.\n"
                        "그저 도서관에 가는 길에 지나칠 수 없는 고양이에게 츄르를 사주었을 뿐이다. \n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    profit = -10000; //선택지에 따른 손익
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
            strcpy_s(text, buffer_size,
                "점심을 먹으러 가는 길에 친한 후배를 발견했다.\n"
                "귀엽고 착하고 사랑스러운 후배가 밥을 사달라고 조른다.\n"
                "후배에게 밥을 사줄까 차갑게 거절하고 혼자 외롭게 먹을까? \n\n"
                "밥을 사줄까? \n"
            );
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "차마 거절할 수 없어 밥을 사주기로 했다. \n"
                        "후배는 아주 비싼 메뉴를 시켰다. \n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = -55000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "냉정하게 거절했다. \n"
                    );
                    typewriterEffect(text); // 타자기 효과
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
            strcpy_s(text, buffer_size,
                "시험이 끝나서 과에서 회식을 한다고 한다.\n\n"
                "회식에 참여할까?\n"
            );
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "회식 장소에 도착하니 왠지 익숙한 얼굴들이 많이 보인다.\n"
                        "쟤는 군대 갔다고 들었는데.\n"
                        "몇 번이고 건배를 하다 보니 기억이 없고 카톡 정산하기에 초대받은 후였다. \n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = -30000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "그냥 집이나 가야겠다. \n"
                        "요즘 들어 친구들이 몰려다니는 모습이 많이 보인다. \n"
                        "물론 나를 빼고. \n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    profit = -10000; //선택지에 따른 손익
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
            if (nRepeat[1])
            {
                goto reroll;
            }
            nRepeat[1] = 1;
            strcpy_s(text, buffer_size,
                "친구가 같이 술을 먹자고 한다.\n\n"
                "오늘 날씨도 좋은데 술을 마실까?\n"
            );
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "기분이 좋아 3차까지 가고 택시를 타고 집에 왔다.\n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = -60000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "그냥 편의점이나 가야겠다. \n\n"
                        "편의점으로 가는데 아까만 해도 좋았던 날씨가 갑자기 흐려지면서 비가 오기 시작했다! \n"
                        "앞사람한테 잠시만 우산 좀 씌워달라 해야겠다. \n\n"
                        " \"죄송한데 저기 편의점까지만 우산 좀 씌워주실 수 있나요?\" \n\n"
                        " \"???: 네\" \n\n"
                        "\"헉\"\n"
                        "매일같이 마주치던 검은 머리의 우산을 같이 쓰고 말았다… \n"
                        "우산과 먹을거리를 사는 겸 고마운 마음에 초코에몽을 하나 사주었다. \n"
                    );
                    typewriterEffect(text); // 타자기 효과
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
            strcpy_s(text, buffer_size,
                "야식을 너무 많이 먹었더니 배부르다. \n\n"
                "산책이나 할까?\n"
            );
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "기숙사 주변을 산책하다 귀여운 길고양이를 만났다. \n"
                        "주변 편의점에서 길고양이를 위한 밥과 간식을 샀다. \n"
                        "내가 준 밥을 다 먹은 길고양이를 따라가니 길에 3만원이 떨어져 있었다. \n"
                        "앞으로 고양이는 귀족이다 \n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = +30000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "그냥 침대에 누워있자. \n");
                    typewriterEffect(text); // 타자기 효과
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
            strcpy_s(text, buffer_size,
                "학교가 끝나고 공부를 하기 위해 24시 카페에 갔다. \n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");
            profit = -15000;

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
            strcpy_s(text, buffer_size,
                "학생회 일로 아침부터 행사 준비물을 사와야 한다. \n"
                "하지만 실수로 다른 것을 사 와버렸다. \n"
                "그냥 내 사비로 다시 사 와야겠다.\n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");
            profit = -10000;


        }

        else if (20 <= randomValue && randomValue < 40)
        {
            if (dRepeat[5])
            {
                goto reroll;
            }
            dRepeat[5] = 1;
            strcpy_s(text, buffer_size,
                "일찍 일어났는데 운동을 할까 공부를 할까?\n\n"
                "운동을 할까?\n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "학교 헬스장에서 운동하기 위해 학교로 갔다. \n"
                        "학교 헬스장엔 빨간 머리가 있었다.\n"
                        "운동을 좋아하는 것 같다. \n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    affect = 2;
                    color = 0;
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "집에서는 도저히 공부를 할 것 같지 않아서 학교 도서관으로 향했다. \n\n"
                        "그곳엔 검은 머리가 우아하게 다리를 꼰 채로 책을 읽고 있었다. \n"
                        "무슨 책인지 궁금해 보일 듯 말 듯한 자리에 앉아서 몰래 훔쳐보다가 갑자기 검은 머리가 다가와 한마디 한다. \n\n"
                        " \"죽고 싶지만 떡볶이는 먹고 싶어\" \n");
                    typewriterEffect(text); // 타자기 효과
                    profit = 0; //선택지에 따른 손익
                    affect = 2;
                    color = 3;
                    addAffect(&account, color, affect);
                    break;
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }

        }

        else if (40 <= randomValue && randomValue < 60) {
            if (dRepeat[6])
            {
                goto reroll;
            }
            dRepeat[6] = 1;
            strcpy_s(text, buffer_size,
                "일찍 일어나서 처음으로 아침 학식을 먹을 수 있었다. \n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");
            profit = -5000;

        }

        else if (60 <= randomValue && randomValue < 80)
        {
            if (dRepeat[7])
            {
                goto reroll;
            }
            dRepeat[7] = 1;
            strcpy_s(text, buffer_size,
                "학생회 회의가 있는데 깜빡하고 늦잠을 잤다.\n"
                "어차피 늦을 것 같은데 그냥 늦을까 지금이라도 택시를 탈까? \n\n"
                "택시를 탈까? \n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "돈은 많이 썼지만 덕분에 회의에 늦지 않았다. \n");
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = 15000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "결국 지각을 했고 과학생회장이 아주 화났다…\n"
                        "알고보니 과학생회장이 파란머리와 친해진 것 같다. \n");
                    typewriterEffect(text); // 타자기 효과
                    profit = 0; //선택지에 따른 손익
                    affect = -3; //호감도 변동 크기
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
            if (dRepeat[8])
            {
                goto reroll;
            }
            dRepeat[8] = 1;
            strcpy_s(text, buffer_size,
                "오늘 발표를 하는 날이라 더 열심히 꾸몄더니 시간이 너무 늦어졌다.\n"
                "택시를 타야겠다. \n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");
            profit = -15000;


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
            strcpy_s(text, buffer_size,
                "알록달록 머리들과 함께하는 교양시간이다.\n"
                "저 사람들의 옆에 앉을까 앞에 앉을까? \n\n"
                "앞에 앉을까? \n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "앞에 앉으니 뒤의 시선이 너무 신경 쓰여 긴장돼 공부를 할 수 없었다.\n"
                        "중간에 신경안정을 위해 마실 것을 사왔다. \n");
                    typewriterEffect(text);
                    profit = -5000; //선택지에 따른 손익
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "옆에 앉으니 그 사람들과 대화를 할 수 있었다.\n\n"
                        "빨간 머리: ”향수 뭐 뿌려요?\" \n"
                        "파란 머리 : ”좋은 향기 나요.샴푸 무슨 향 써요?\" \n"
                        "초록 머리 : ”오늘 놀러 가요 ? 평소보다 꾸미셨네용!\" \n"
                        "검은 머리 : “내일은 어디 자리 앉을거예요?\"\n\n"
                        "수업 내내 플러팅을 당했다. \n"
                    );
                    typewriterEffect(text);
                    profit = 0; //선택지에 따른 손익
                    affect = 3; //호감도 변동 크기
                    for (int i = 0; i < 4; i++)
                    {
                        color = i;
                        addAffect(&account, color, affect);
                    }
                    break;
                default:
                    strcpy_s(text, buffer_size,
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
            strcpy_s(text, buffer_size,
                "팀 프로젝트를 알록달록 머리들과 함께 하게 되었다.\n"
                "오늘 만나서 회의를 해야 하는데 입을 옷이 없다. \n\n"
                "옷을 살까?\n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'Y':
                case 'y':
                    strcpy_s(text, buffer_size,
                        "봄 아우터가 원래 이렇게 비쌌나…? \n\n"
                        "옷 한 벌에 10만원이 넘게 나와버렸다! \n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = -120000; //선택지에 따른 손익
                    affect = 5; //호감도 변동 크기
                    for (int i = 0; i < 4; i++)
                    {
                        color = i;
                        addAffect(&account, color, affect);
                    }
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "그냥 가야겠다.\n"
                        "대학생의 교복인 회색 츄리닝과 함께하면 두렵지 않다. \n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    profit = 0; //선택지에 따른 손익
                    affect = -5; //호감도 변동 크기
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

        else if (40 <= randomValue && randomValue < 60)
        {
            if (aRepeat[6])
            {
                goto reroll;
            }
            aRepeat[6] = 1;
            strcpy_s(text, buffer_size,
                "공강이 생겼는데 과방에 갈까 기숙사로 갈까? \n\n"
                "과방으로 갈까?\n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "누군가 있길 기대했지만 아무도 없었다…\n"
                        "그런 김에 과방에서 배달 음식을 시켜먹었다.\n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = -20000; //선택지에 따른 손익

                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "기숙사로 내려가는 길에 파란머리를 처음 그들을 마주친 곳에서 또다시 마주쳤다. \n"
                        "친해지고 싶어 내가 먼저 말을 걸었다.\n\n"
                        "“저희 어디서 봤죠?”\n\n"
                        "“네, 제가 계속 쳐다봤었어요.”\n\n"
                        "“왜요?”\n\n"
                        "“제 고등학교 친구랑 닮아서요.”\n"
                        "깜짝이야. 설렐 뻔했다.\n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    profit = 0; //선택지에 따른 손익
                    affect = 2;
                    color = 1;
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
            strcpy_s(text, buffer_size,
                "공부를 해야 하는데 도서관으로 갈까 카페로 갈까?\n\n"
                "도서관으로 갈까? \n"
            );
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'N':
                case 'n':
                    strcpy_s(text, buffer_size,
                        "카페에 와서 자리를 찾던 중 초록머리를 발견했다. \n"
                        "자리가 없는데 동석하자고 해야겠다. \n\n"
                        "“혹시 옆자리 앉아도 될까요?”\n\n"
                        "“너무너무 좋습니다!”\n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = -5000; //선택지에 따른 손익
                    affect = 2;
                    color = 2;
                    break;

                case 'Y':
                case 'y':
                    strcpy_s(text, buffer_size,
                        "공부는 도서관이지.\n"
                        "도서관에서 해야겠다.\n");
                    typewriterEffect(text); // 타자기 효과
                    profit = 0; //선택지에 따른 손익

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
            strcpy_s(text, buffer_size,
                "배고파서 점심을 사먹었다.\n");
            typewriterEffect(text); // 타자기 효과
            printf("\n");
            profit = -10000;


        }

    }
    break;

    // Day4-7's night
    case 12:
    case 15:
    case 18:
    {
        if (0 <= randomValue && randomValue < 25)
        {
            if (nRepeat[4])
            {
                goto reroll;
            }
            nRepeat[4] = 1;
            strcpy_s(text, buffer_size,
                "우리 집에 사는 우리 부모님 아들이 야식을 같이 먹자고 한다. \n\n"
                "야식을 먹을까? \n"
            );
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "야식을 먹고 다음날 얼굴이 부은 채로 알록달록 4인방과 마주쳤다. \n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = -20000; //선택지에 따른 손익
                    affect = -2; //호감도 변동 크기
                    for (int i = 0; i < 4; i++)
                    {
                        color = i;
                        addAffect(&account, color, affect);
                    }

                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "아침에 일어나서 거울을 보는데,\n 오늘따라 얼굴이 꽤나 괜찮은 것 같다. \n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    profit = 0; //선택지에 따른 손익
                    affect = +2; //호감도 변동 크기
                    for (int i = 0; i < 4; i++)
                    {
                        color = i;
                        addAffect(&account, color, affect);
                    }
                default:
                    printf("Y(y), N(n) 으로 선택해주세요.\n");
                    continue;
                }
                break;
            }
        }

        else if (25 <= randomValue && randomValue < 50)
        {
            if (nRepeat[5])
            {
                goto reroll;
            }
            nRepeat[5] = 1;
            strcpy_s(text, buffer_size,
                "학교에서 공부를 하다 잠깐 나왔다. \n\n"
                "바람 좀 쐴 겸 산책할까? \n"
            );
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "산책을 하면 신선한 공기를 마시니 머리가 맑아지는 기분이다. \n"
                        "산책을 하다가 빨간머리를 마주쳤다! \n"
                        "러닝을 즐겨하는 것 같다.\n"
                        "장비는 무슨 선수 같다.\n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = 0; //선택지에 따른 손익
                    affect = 2; //호감도 변동 크기
                    color = 0; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "바람 쐴 시간도 없다. 공부나 하자. \n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    profit = 0; //선택지에 따른 손익

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
            if (nRepeat[6])
            {
                goto reroll;
            }
            nRepeat[6] = 1;
            strcpy_s(text, buffer_size,
                "과동기들과 술 약속이 있다.\n"
                "미루고 미룬 약속이라 나가야만 한다.\n"
            );
            typewriterEffect(text); // 타자기 효과
            printf("\n");
            profit = -20000;

        }

        else if (75 <= randomValue && randomValue < 100)
        {
            if (nRepeat[7])
            {
                goto reroll;
            }
            nRepeat[7] = 1;
            strcpy_s(text, buffer_size,
                "어떻게 번호를 알아낸 건지 검정머리에게서 카톡이 왔다. \n\n"
                "“영화”\n\n"
                "영화 표가 심야 밖에 남아 있지 않은데… 심야 영화를 보러 갈까? \n"

            );
            typewriterEffect(text); // 타자기 효과
            printf("\n");

            while (1)
            {
                printf("Y(y) 또는 N(n)을 입력해주세요: ");
                scanf_s("%c", &answer, 1);

                switch (answer)
                {
                case 'y':
                case 'Y':
                    strcpy_s(text, buffer_size,
                        "심야 영화를 보러 갔다. \n"
                        "공포 영화는 잘 못 보는 것 같다. \n"
                        "영화 보는 내내 아르마딜로처럼 웅크리고 있었다. \n\n"
                        "“공포 영화 안 좋아하세요?“ \n\n"
                        "”조금…“ \n\n"
                        "영화 장르를 잘못고른 것 같다… \n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    printf("\n");
                    profit = -15000; //선택지에 따른 손익
                    affect = -3; //호감도 변동 크기
                    color = 3; //호감도 변동 대상
                    addAffect(&account, color, affect);
                    break;

                case 'n':
                case 'N':
                    strcpy_s(text, buffer_size,
                        "대신 술을 마시러 갔지만 검정머리는 술을 별로 안 좋아하는 것 같았다. \n\n"
                        "“술 안 좋아하시나봐요”\n\n"
                        "“좋아해요.”\n\n"
                        "“잘 안 드시는데…”\n\n"
                        "“진짜 좋아해요.”\n\n"
                        "술은 잘 안 먹었지만 설레는 술자리였다.\n"
                    );
                    typewriterEffect(text); // 타자기 효과
                    profit = -15000; //선택지에 따른 손익
                    affect = 3; //호감도 변동 크기
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

    // 메모리 해제
    free(text);
    text = NULL;

    return account.account;
}
