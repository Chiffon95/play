#include <iostream>
#include <string.h>
#include "card.h"
#include "card_shape.h"

//using namespace std;

//배팅 결과를 위한 변수
int RESULT = 0;

//배팅 플레이어 구조체
typedef struct B_Player {

	int player_money = 1000;
	int betting_money;

}B_Player;



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

		//dealer[0] = 1; //테스트 용		
		//dealer[1] = 9;

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

		

		//j,q,k는 10으로 계산
		if (dealer[i] > 10) {
			dealer[i] = 10;
		}

		count_d++; //합이 16이하 시 추가로 뽑기 위한 딜러 배열 인덱스
		count++;  //추가로 카드를 뽑기 위한 전체 카드 인덱스

	}

	//플레이어 카드, 최초 2장
	for (int i = 0; i < 2; i++) {
		
		//딜러 다음 카드 2장 받음
		player[i] = cd[i + 2].num;
		player_st[i] = cd[i + 2];

		//player[0] = 1; //테스트 용		
		//player[1] = 10;
		
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

		if (ace == 2) {

			if (player[0] == 1) {
				player[0] = 11;
			}
			else if(player[1] == 1)
			{
				player[1] = 11;
			}

		}
		

	}


	//초반 카드 합 구함
	for (int i = 0; i < 2; i++) {
		
		sum_d += dealer[i];
		sum_p += player[i];

		//초반 합이 블랙잭인 경우
		if (sum_d == 21 || sum_p == 21) {

			if (sum_d == 21 && sum_p == 21) {  //둘 다 블랙잭인 경우
				cout << "블랙잭, 무승부, 플레이어 합:" << sum_p << ", 딜러 합:" << sum_d << endl;
				/*blackjack = true;
				exit(0);*/
				RESULT = 2;
				break;

			}
			else if(sum_p == 21)
			{
				cout << "블랙잭, 플레이어 승리, 합:" << sum_p << ", 딜러 합:" << sum_d << endl;
				/*blackjack = true;
				exit(0);*/
				RESULT = 2;
				break;
			}
			else if(sum_d == 21)
			{				
				cout << "블랙잭, 딜러 승리, 합:" << sum_d << ", 플레이어 합:" << sum_p << endl;
				//exit(0
				RESULT = 2;
				break;
			}

		}
	}

	

	//추가 플레이 부분
	do
	{

		cout << "계속: 1, 종료: 2"<<endl;		
		cin >> num;
		system("cls");

		

		//계속을 선택, 플레이어는 카드 한장을 더 받는다.
		if (num == 1) {
			
			//초반 2장 이후 인덱스에 추가로 1장 받음
			player[count_p] = cd[count].num;
			player_st[count_p] = cd[count];

			//j,q,k는 10으로 설정
			if (player[count_p] > 10) {
				player[count_p] = 10;
			}

			showDealerCard();
			dealerCard(dealer_st[0].shape, dealer_st[0].num);

			showPlayerCard();
			for (int i = 0; i < count_p+1; i++) {
				showPlayerCard(player_st[i].shape, player_st[i].num);
			}

			//에이스 카드 선택
			if (player[count_p] == 1) {
				cout << "에이스를 1로 하실려면 1, 11으로 하시려면 2: "<<endl;
				cin >> ace;

				if (ace == 1) {
					player[count_p] = 1;
				}
				else
				{
					player[count_p] = 11;
				}
			}

			system("cls");

			//합을 초기화 후 다시 구함
			sum_p = 0;

			
			for (int i = 0; i < count_p+1; i++) {
				
				sum_p += player[i];
								
			}

			//추가로 받은 카드를 포함 총합이 21이 넘으면 종료
			if (sum_p > 21) {
				break;
			}

			count++;  //전체 배열 인덱스 증가
			count_p++;  //플레이어 배열 인덱스 증가

			cout << "플레이어의 합: " << sum_p << endl;

		}
		else if(num==2)  
		{
			//처음 카드를 받고 바로 종료시 딜러 합 구할때 초기화 방지
			/*if (count_d <= 2){
				sum_d = 0;
			}*/
			
			//딜러의 카드 합이 16이하 시 한장 더 뽑음
			while (sum_d <= 16 ) {
				dealer[count_d] = cd[count].num;
				dealer_st[count_d] = cd[count];

				if (dealer[count_d] > 10) {
					dealer[count_d] = 10;
				}

				if (dealer[count_d] == 1) {
					dealer[count_d] = 11;
				}

				//확인용
				cout << "딜러: " << dealer[count_d] << endl;

				sum_d = 0;

				for (int i = 0; i < count_d + 1; i++) {
					sum_d += dealer[i];
				}

				cout << "딜러 합: " << sum_d << endl;

				count++; //전체 배열 인덱스 증가
				count_d++;  //딜러 배열 인덱스 증가
			}
			
			break;
		}

		//카드 확인용
		showDealerCard();
		dealerCard(dealer_st[0].shape, dealer_st[0].num);

		showPlayerCard();
		for (int i = 0; i < count_p+1; i++) {
			showPlayerCard(player_st[i].shape, player_st[i].num);
		}

	} while (true);
	
	system("cls");
	
	
	
	//결과 확인
	showDealerCard();

	for (int i = 0; i < count_d; i++) {
		dealerCard(dealer_st[i].shape, dealer_st[i].num);
	}
	
	showPlayerCard();

	for (int i = 0; i < count_p + 1; i++) {
		showPlayerCard(player_st[i].shape, player_st[i].num);
	}
	if (sum_d > 21 || sum_p > 21) {  //플레이어, 딜러 둘 중 합이 21이 넘을시

		if (sum_d > 21 && sum_p > 21) {
			cout << "무승부" << endl;			
			RESULT = 3;

		}else if (sum_d > 21) {
			cout << "딜러가 21이 넘었으므로 플레이어가 승리 딜러 합:" << sum_d << ", 플레이어 합:" << sum_p<< endl;			
			RESULT = 1;
		}
		else if(sum_p > 21) {
			cout << "플레이어가 21이 넘었으므로 딜러가 승리 딜러 합:" << sum_d << ", 플레이어 합:" << sum_p << endl;			
			RESULT = 4;
		}

	}
	else
	{
		if (sum_d > sum_p) {
			cout << "딜러가 승리, 합:" << sum_d << ", 플레이어 합:" << sum_p << endl;			
			RESULT = 4;
		}

		if (sum_d < sum_p) {
			cout << "플레이어가 승리, 합:" << sum_p << ", 딜러 합:" << sum_d << endl;			
			RESULT = 1;
		}

		if (sum_d == sum_p) {
			cout << "비김, 합:" << sum_p << ", 딜러 합:" << sum_d << endl;			
			RESULT = 3;
		}
	}

}


void rule() {

	cout << "\n\t\t R\tU\tL\tE \t\n" << endl;
	cout << "1. 베팅 금액을 정한다.(최소 금액 100, 최대 500, 100단위로 베팅가능)" << endl;
	cout << "2. 플레이어부터 카드를 한장씩 돌아가면서 두장을 받는다." << endl;
	cout << "3. 플레이어는 카드를 모두 공개해야하고 딜러는 한장만 공개한다." << endl;
	cout << "4. A는 1또는 11로 사용할 수 있고 J, Q, K는 10으로 취급한다." << endl;
	cout << "5. 딜러는 A를 11로 고정한다." << endl;
	cout << "6. 딜러는 카드의 합이 16이하면 1장을 더 받아야하고 17이상이면 더이상 받지 않는다." << endl;
	cout << "7. 처음 카드 2개의 합이 21이면 BlackJack" << endl;
	cout << "8. 카드 숫자의 합이 21에 가까운 사람이 승리 21초과시 die " << endl;
	cout << "9. 승리시 배팅금액의 1배, BlackJack은 1.5배의 금액을 받는다." << endl;

}


void play() {

	B_Player p1;

	while (true)
	{
		int n = 0;
		cout << "-------------------------------------------------------------------------" << endl;
		cout << "1. 게임 시작\t 2. 플레이어별 금액 확인\t 3. 규칙 설명\t 4. 종료" << endl;
		cout << "-------------------------------------------------------------------------" << endl;
		cin >> n;

		if (n == 1) {
			system("cls");

			while (true)
			{
				system("cls");
				cout << "얼마를 베팅 하시겠습니까?, 종료하려면 -1입력" << endl;

				while (true)
				{
					cin >> p1.betting_money;

					//배팅 금액 제한
					if (p1.betting_money == -1)
					{
						break;
					}
					if (p1.betting_money < 100)
					{
						cout << "100 이상 베팅하세요" << endl;
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

				//게임 함수
				compare_card();

				//배팅 금액 계산
				switch (RESULT)
				{

				case 1 :
					p1.player_money += (p1.betting_money);
					break;

				case 2 :
					p1.player_money + (p1.betting_money * 1.5);
					break;

				case 3 :
					p1.player_money;
					break;

				case 4 :
					p1.player_money -= p1.betting_money;
					break;
				
				}

				cout << "돈" << p1.player_money << endl;

				cout << "계속 하시려면 아무숫자 입력, 종료: -1입력" <<endl;
				cin >> n;
				if (n == -1)
					break;
				else
					continue;
			}
		}
		if (n == 2) {
			system("cls");
			//rank();
		}
		if (n == 3) {
			system("cls");
			rule();
		}
		if (n == 4) {
			system("cls");
			cout << "end game" << endl;
			break;
		}
	}

}

int main() {

	play();

	return 0;
}



