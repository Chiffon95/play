#include <iostream>
#include <string.h>
#include "card.h"
#include "card_shape.h"
#include "score.h"
#include "compare.h"
#include <Windows.h>

using namespace std;

//배팅 결과를 위한 변수
int RESULT = 0;

//insurance를 위한 변수
int ins = 0;
int d_bj = 0;

int player_money;
int player_betting;

void compare_card() {

    int dealer[10];  //딜러 카드숫자 배열
    int player[10];  //플레이어 카드숫자 배열
    int len = sizeof(dealer) / sizeof(dealer[0]);

    //카드 모양 저장 배열 -> 구조체 배열 사용으로 필요없음
    /*char *dealer_shape[10];
    char *player_shape[10];*/

    //카드 합 저장 변수
    int sum_d = 0;
    int sum_p = 0;

    //카드 배열, 순서 인덱스
    int count_d = 0;
    int count_p = 0;
    int count = 0;

    int num = 0; //게임 계속 할지 설정
    int ace;  //에이스 확인용 변수

    bool BLACK_JACK = false;

    //카드 구조체 선언
    CardData cd[52];
    CardData dealer_st[10];  //딜러 카드 저장용 구조체 배열
    CardData player_st[10];  //플레이어 카드 저장용 구조체 배열

    setCard(cd);  //카드 생성
    suffle(cd);   //카드 섞기


    //딜러 카드, 최초 2장
    for (int i = 0; i < 2; i++) {

        //숫자, 모양 전달
        dealer[i] = cd[i].num;
        //dealer_shape[i] = cd[i].shape;
        dealer_st[i] = cd[i];

        //딜러 블랙잭 테스트 용      
        //dealer[0] = 1;
        //dealer[1] = 10;

        //j,q,k는 10으로 계산
        if (dealer[i] > 10) {
            dealer[i] = 10;
        }


        //딜러 ace는 11으로 설정
        if (dealer[0] == 1 || dealer[1] == 1) {

            if (dealer[0] == 1) {
                dealer[0] = 11;
            }
            else if (dealer[1] == 1)
            {
                dealer[1] = 11;
            }

        }


        count_d++; //합이 16이하 시 추가로 뽑기 위한 딜러 배열 인덱스
        count++;  //추가로 카드를 뽑기 위한 전체 카드 인덱스

    }

    //플레이어 카드, 최초 2장
    for (int i = 0; i < 2; i++) {

        //딜러 다음 카드 2장 받음
        player[i] = cd[i + 2].num;
        player_st[i] = cd[i + 2];

        //플레이어 블랙잭 테스트 용
        //player[0] = 10; 
        //player[1] = 1;

        //j,q,k는 10으로 설정
        if (player[i] > 10) {
            player[i] = 10;
        }

        count_p++;  //추가로 뽑을 시 플레이어 배열 인덱스
        count++;  //추가로 카드를 뽑기 위한 전체 카드 인덱스

    }


    //카드 확인
    showDealerCard();
    dealerCard(dealer_st[0].shape, dealer_st[0].num);

    showPlayerCard();
    for (int i = 0; i < 2; i++) {
        showPlayerCard(player_st[i].shape, player_st[i].num);
    }


    //플레이어 ace는 1 or 11으로 설정
    if (player[0] == 1 || player[1] == 1) {

        cout << "에이스를 1로 하실려면 1, 11으로 하시려면 2: ";
        cin >> ace;

        if (!cin) {
            cout << "1 or 2를 입력하세요" << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }


        if (ace == 2) {

            if (player[0] == 1) {
                player[0] = 11;

            }
            else if (player[1] == 1)
            {
                player[1] = 11;

            }

        }


    }


    //초반 카드 합 구함
    for (int i = 0; i < 2; i++) {

        sum_d += dealer[i];
        sum_p += player[i];


    }

    //insurance 설정
    ins = 0;
    int FLAG = 0;  //올인 할때 보험금 부족시 상태 저장용 변수
    char a = '\0';

    if (dealer[0] == 11) {

        cout << "insurance?" << endl;
        cout << "예 : 1, 아니요 : 2" << endl;
        cin >> ins;

        player_money = player_money - player_betting - (player_betting / 2);
        
        if (player_money <=0) { //올인 시 보험금 지금 불가
            cout << "insurance로 설정할 돈이 부족합니다!" << endl;
            FLAG = 1;

            cout << "계속하려면 아무키 입력" << endl;
            cin >> a;

            //초기화
            player_money = 0;
            player_betting = 0;

            
        }
        
        if (sum_d == 21 && FLAG != 1)
        {
            d_bj = 1;
        }

        else if(FLAG != 1)
        {
            cout << "딜러는 블랙잭이 아닙니다." << endl;
        }

    }

    //초반 합이 블랙잭인 경우
    if (sum_d == 21 || sum_p == 21) {

        //system("cls");

        if (sum_d == 21 && sum_p == 21) {  //둘 다 블랙잭인 경우

            system("cls");
            cout << "블랙잭, 무승부" << endl;

            show_push();
            BLACK_JACK = true;
            RESULT = 3;

        }
        else if (sum_p == 21)
        {
            system("cls");
            cout << "블랙잭, 플레이어 승리"<< endl;

            show_bkLog();
            BLACK_JACK = true;
            RESULT = 2;

        }
        else if (sum_d == 21)
        {
            system("cls");

            if (dealer[0] == 11) {  //보인 카드가 에이스면서 블랙잭인경우, 보험 이후 바로 결과 확인
                cout << "블랙잭, 딜러 승리"<< endl;
                //show_bkLog();
                BLACK_JACK = true;
                RESULT = 5;
            }
            else if(dealer[1] == 11)  
            {
                //카드 확인
                showDealerCard();
                dealerCard(dealer_st[0].shape, dealer_st[0].num);

                showPlayerCard();
                for (int i = 0; i < 2; i++) {
                    showPlayerCard(player_st[i].shape, player_st[i].num);
                }
                RESULT = 5;
            }
            
        }

    }

    //초반 합이 블랙잭이 아닌 경우
    if (BLACK_JACK == false)
    {
        //추가 플레이 부분
        do
        {

            cout << "계속: 1, 종료: 2" << endl;
            cin >> num;

            if (!cin) {
                cout << "1 or 2를 입력하세요" << endl;
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }






            //계속을 선택, 플레이어는 카드 한장을 더 받는다.
            if (num == 1) {

                system("cls");

                //초반 2장 이후 인덱스에 추가로 1장 받음
                player[count_p] = cd[count].num;
                player_st[count_p] = cd[count];

                //j,q,k는 10으로 설정
                if (player[count_p] > 10) {
                    player[count_p] = 10;
                }

                //system("cls");

                //에이스 카드 선택
                if (player[count_p] == 1) {

                    //에이스 카드시 출력
                    showDealerCard();
                    dealerCard(dealer_st[0].shape, dealer_st[0].num);

                    showPlayerCard();

                    for (int i = 0; i < count_p + 1; i++) {
                        showPlayerCard(player_st[i].shape, player_st[i].num);
                    }

                    cout << "에이스를 1로 하실려면 1, 11으로 하시려면 2: " << endl;
                    cin >> ace;

                    if (ace == 1) {
                        player[count_p] = 1;
                    }
                    else
                    {
                        player[count_p] = 11;
                    }
                }

                //합을 초기화 후 다시 구함
                sum_p = 0;

                for (int i = 0; i < count_p + 1; i++) {

                    sum_p += player[i];

                }

                //추가로 받은 카드를 포함 총합이 21이 넘지않으면
                if (player[count_p] != 1 && sum_p <= 21) {

                    showDealerCard();
                    dealerCard(dealer_st[0].shape, dealer_st[0].num);

                    showPlayerCard();
                    for (int i = 0; i < count_p + 1; i++) {
                        showPlayerCard(player_st[i].shape, player_st[i].num);
                    }
                }
                
                //확인용
                //cout << "플레이어의 합: " << sum_p << endl;

                //추가로 받은 카드를 포함 총합이 21이 넘으면 종료
                if (sum_p > 21) {
                    break;
                }

                count++;  //전체 배열 인덱스 증가
                count_p++;  //플레이어 배열 인덱스 증가
            }

            else if (num == 2)
            {
                //딜러의 카드 합이 16이하 시 한장 더 뽑음
                while (sum_d <= 16) {
                    dealer[count_d] = cd[count].num;
                    dealer_st[count_d] = cd[count];

                    if (dealer[count_d] > 10) {
                        dealer[count_d] = 10;
                    }

                    //dealer[count_d] == 1;  //테스트

                    if (dealer[count_d] == 1) {
                        dealer[count_d] = 11;
                    }

                    //확인용
                    //cout << "딜러: " << dealer[count_d] << endl;

                    sum_d = 0;

                    for (int i = 0; i < count_d + 1; i++) {
                        sum_d += dealer[i];
                    }

                    //확인용
                    //cout << "딜러 합: " << sum_d << endl;

                    count++; //전체 배열 인덱스 증가
                    count_d++;  //딜러 배열 인덱스 증가
                }

                break;
            }

            ////카드 확인용
            //showDealerCard();
            //dealerCard(dealer_st[0].shape, dealer_st[0].num);

            //showPlayerCard();
            //for (int i = 0; i < count_p + 1; i++) {
            //   showPlayerCard(player_st[i].shape, player_st[i].num);
            //}


        } while (true);

        system("cls");

    }



    //딜러 카드 결과 확인
    showDealerCard();

    for (int i = 0; i < count_d; i++) {
        dealerCard(dealer_st[i].shape, dealer_st[i].num);
    }

    //플레이어 카드 결과 확인
    showPlayerCard();

    for (int i = 0; i < count_p + 1; i++) {
        showPlayerCard(player_st[i].shape, player_st[i].num);
    }

    if (RESULT != 5 && BLACK_JACK == false) {  //딜러가 블랙잭이 아닐경우

        if (sum_d > 21 || sum_p > 21) {  //플레이어, 딜러 둘 중 합이 21이 넘을시

            if (sum_d > 21 && sum_p > 21) {
                cout << "무승부" << endl;
                show_push();
                RESULT = 3;

            }
            else if (sum_d > 21) {
                //cout << "딜러가 21이 넘었으므로 플레이어가 승리 딜러 합:" << sum_d << ", 플레이어 합:" << sum_p << endl;
                show_burst();
                show_win();
                RESULT = 1;
            }
            else if (sum_p > 21) {
                //cout << "플레이어가 21이 넘었으므로 딜러가 승리 딜러 합:" << sum_d << ", 플레이어 합:" << sum_p << endl;
                show_burst();
                show_lose();
                RESULT = 4;
            }

        }
        else
        {
            if (sum_d > sum_p) {
                cout << "딜러 WIN, 합:" << sum_d << ", 플레이어 합:" << sum_p << endl;
                show_lose();
                RESULT = 4;
            }

            if (sum_d < sum_p) {
                cout << "플레이어 WIN, 합:" << sum_p << ", 딜러 합:" << sum_d << endl;
                show_win();
                RESULT = 1;
            }

            if (sum_d == sum_p) {
                cout << "PUSH, 합:" << sum_p << ", 딜러 합:" << sum_d << endl;
                show_push();
                RESULT = 3;
            }
        }

    }

}


void play() {

    //배팅 플레이어 구조체 선언
    B_Player p1;

    int n;
    char a = '\0';


    p1.player_money = 1000;  //플레이어 돈 초기화
    //p1.player_money = 10; //테스트

    char name[10];

    cout << "이름 입력:" << endl;

    cin >> name;

    while (true)
    {



        system("cls");


        cout << "얼마를 베팅 하시겠습니까?" << endl;

        //입력한 이름과 저장된 이름을 찾고 만약 같은 이름이면 기존에 배팅금액 불러옴
        if (Load_User(name) != -1) {
            p1.player_money = Load_User(name);
        }

        cout << "player_money : " << p1.player_money << endl;

        

        //배팅금액이 없을시 종료
        if (p1.player_money <= 0)
        {
            cout << "베팅할 수 있는 금액이 없습니다." << endl;
            cout << endl;
            cout << "\n뒤로가려면 아무 키나 누르세요" << endl;
            cin >> a;
            break;
        }

        //배팅 금액 제한
        while (true)
        {

            cin >> p1.betting_money;

            if (p1.betting_money > p1.player_money)
            {
                cout << "가지고 있는 금액이 적습니다. 다시 베팅하세요." << endl;
            }
            else if (p1.betting_money == p1.player_money) {
                show_allin();

                break;
            }
            else if (p1.betting_money < 100)
            {
                cout << "올인 또는 100 이상 베팅하세요" << endl;
            }
           
            else if (p1.betting_money > 500)
            {
                cout << "500 이하로 베팅하세요" << endl;
            }
            else if (p1.betting_money >= 100 && p1.betting_money <= 500)
            {
                break;
            }

        }

        //보혐 적용을 위해 전역변수에 값 저장
        player_money = p1.player_money;
        player_betting = p1.betting_money;

        //게임 함수
        if (p1.betting_money != -1) {

            compare_card();

            if (RESULT == 5) {  //딜러가 블랙잭인 경우
                
                if (ins == 1) { //보험 적용시
                    if (p1.player_money - p1.betting_money- (p1.betting_money /2) >= 0) {

                        if (d_bj == 1) {  //딜러가 블랙잭인 경우
                            p1.player_money += ((p1.betting_money));  //배팅금액을 받는다.
                        }

                        else if (d_bj == 0) {  //딜러가 블랙잭이 아닌 경우
                            p1.player_money -= (p1.betting_money / 2);  //보험금을 잃는다.
                        }
                    }
                    else {
                        //cout << "insurance로 설정할 돈이 부족합니다! \n insurance를 설정하지 않고 게임을 진행합니다." << endl;
                    }

                    ins = 0;  //초기화
                }
            }
            


            //배팅 금액 계산
            switch (RESULT)
            {

            case 1: //이김
                p1.player_money += (p1.betting_money);
                break;

            case 2:  //블랙잭
                p1.player_money += (p1.betting_money * 1.5);
                break;

            case 3:  //무승부
                p1.player_money;
                break;

            case 4:  //짐
                p1.player_money -= p1.betting_money;
                break;

            case 5:  //딜러 블랙잭, 에이스카드 표시
                cout << "딜러가 블랙잭" << endl;
                show_bkLog();
                p1.player_money -= p1.betting_money;                
                break;

            }

            RESULT = 0;  //RESULT 초기화

        }

        //동전 출력
        show_chips(p1.player_money);


        cout << "계속 하시려면 아무숫자 입력, 종료: -1입력" << endl;
        cin >> n;

        //숫자만 입력
        if (!cin) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }

        //종료시
        if (n == -1) {

            //종료시 이름, 배팅금액 저장
            inputUserData(name, p1.player_money);

            system("cls");
            break;
        }

        //계속 플레이
        else
            Save_User(p1.player_money);  //계속 할 시 플레이어 이름은 그대로, 배팅금액만 저장
        continue;


    }
}
