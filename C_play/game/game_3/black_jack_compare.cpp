#include <iostream>
#include <string.h>
#include "card.h"
using namespace std;

long seconds = (long)time(NULL);

//테스트용 카드배열
//int* test_card() {
//
//	
//	srand(seconds);
//
//	int card[13];
//	int len = sizeof(card) / sizeof(card[0]);
//	int index, temp;
//
//	for (int i = 0; i < 13; i++) {
//		card[i] = i + 1;
//	}
//
//	for (int i = 0; i < len * 3; i++) {
//
//		temp = card[0];
//		index = rand() % 13;
//
//		card[0] = card[index];
//		card[index] = temp;
//	}
//	
//	
//	return card;
//
//
//
//}




//결과 확인
void result_game() {

	

}

void compare_card() {

	int a[10];  //딜러 카드 배열
	int b[10];  //플레이어 카드 배열
	int len = sizeof(a) / sizeof(a[0]);

	//카드 합 저장 변수
	int sum_d = 0;
	int sum_p = 0;

	//카드 배열, 순서 인덱스
	int count_d = 0;
	int count_p = 0;
	int count = 0;

	int num = 0; //게임 계속 할지 설정
	int ace;  //에이스 확인용 변수

	
	CardData cd[52];

	setCard(cd);
	suffle(cd);


	//test_card에서 포인터 변수로 배열을 반환받아 저장
	/*int* pArr = test_card();
	int arr[13];

	for (int i = 0; i < 13; i++) {
		
		arr[i] = *(pArr + i);
	}*/
	
	//딜러 카드, 최초 2장
	for (int i = 0; i < 2; i++) {

		
		a[i] = cd[i].num;

		if (a[i] > 10) {
			a[i] = 10;
		}
		count_d++;
		count++;

	}

	//플레이어 카드, 최초 2장
	for (int i = 0; i < 2; i++) {
		
		//딜러 다음 카드 2장 받음
		b[i] = cd[i + 2].num;
		//b[0] = 1; //테스트 용		
		//b[1] = 10;
		
		//j,q,k는 10으로 설정
		if (b[i] > 10) {
			b[i] = 10;
		}

		
		//ace는 1 or 11으로 설정
		/*if (b[i] == 1) {
			

			cout << "에이스 1로 하실려면 1, 11으로 하시려면 2";
			cin >> ace;

			if (ace == 1) {
				b[i] = 1;
			}
			else
			{
				b[i] = 11;
			}
		}*/

		count_p++;
		count++;
	}

	//초반 카드 확인
	cout << "딜러의 카드: " << a[0] << ", " << a[1] << endl;
	cout << "플레이어의 카드: " << b[0] << ", " << b[1] << endl;

	//ace는 1 or 11으로 설정
	if (b[0] == 1 || b[1] == 1) {

		cout << "에이스를 1로 하실려면 1, 11으로 하시려면 2: ";
		cin >> ace;

		if (ace == 2) {

			if (b[0] == 1) {
				b[0] = 11;
			}
			else if(b[1] == 1)
			{
				b[1] = 11;
			}
		}
		

	}

	

	//초반 카드 합 구함
	for (int i = 0; i < 2; i++) {
		sum_d += a[i];
		sum_p += b[i];

		if (sum_d == 21 || sum_p == 21) {

			if (sum_d == 21) {
				cout << "블랙잭, 딜러 승리, 합:" << sum_d << ", 플레이어 합:" << sum_p << endl;
				exit(0);
			}
			else if(sum_p == 21)
			{
				cout << "블랙잭, 플레이어 승리, 합:" << sum_p << ", 딜러 합:" << sum_d << endl;
				exit(0);
			}
		}
	}

	

	
	do
	{

		cout << "계속: 1, 종료: 2"<<endl;
		cin >> num;

		if (num == 1) {
			/*cout << "플레이어 카드 숫자 입력: ";

			cin >> b[count_p];*/
			

			b[count_p] = cd[count].num;

			if (b[count_p] > 10) {
				b[count_p] = 10;
			}

			if (b[count_p] == 1) {
				cout << "에이스 1로 하실려면 1, 10으로 하시려면 2: "<<endl;
				cin >> ace;

				if (ace == 1) {
					b[count_p] = 1;
				}
				else
				{
					b[count_p] = 10;
				}
			}

			//합을 초기화 후 다시 구함
			sum_p = 0;

			for (int i = 0; i < count_p+1; i++) {
				
				sum_p += b[i];

				
			}

			count++;

			cout << "플레이어의 합: " << sum_p << endl;

		}
		else if(num==2)
		{
			//처음 카드를 받고 바로 종료시 합 구할때 초기화 방지
			if (count_d =! 2){
				sum_d = 0;
			}
			
			//딜러의 카드 합이 17보다 적을 시 한장 더 뽑음
			while (sum_d < 18) {
				a[count_d] = cd[count].num;

				if (a[count_d] > 10) {
					a[count_d] = 10;
				}

				cout << "딜러: " << a[count_d] << endl;


				for (int i = 0; i < count_d + 1; i++) {
					sum_d += a[i];
				}

				cout << "딜러 합: " << sum_d << endl;

				count++;
			}
			//if (sum_d < 18) {
			//	/*cout << "딜러 카드 숫자 입력: ";
			//	cin >> a[count_d];*/
			//	
			//	a[count_d] = arr[count];

			//	if (a[count_d] > 10) {
			//		a[count_d] = 10;
			//	}

			//	cout << "딜러: " << a[count_d] << endl;


			//	for (int i = 0; i < count_d+1; i++) {
			//		sum_d += a[i];
			//	}

			//	cout << "딜러 합: " << sum_d << endl;

			//	count++;
			//}

			break;
		}

	} while (true);
	

	
	//결과 확인
	if (sum_d > 21 || sum_p > 21) {

		if (sum_d > 21 && sum_p > 21) {
			cout << "무승부" << endl;
		}else if (sum_d > 21) {
			cout << "딜러가 21이 넘었으므로 플레이어가 승리 딜러 합:" << sum_d << ", 플레이어 합:" << sum_p<< endl;
		}
		else if(sum_p > 21) {
			cout << "플레이어가 21이 넘었으므로 딜러가 승리 딜러 합:" << sum_d << ", 플레이어 합:" << sum_p << endl;
		}

	}
	else
	{
		if (sum_d > sum_p) {
			cout << "딜러가 승리, 합:" << sum_d << ", 플레이어 합:" << sum_p << endl;
		}

		if (sum_d < sum_p) {
			cout << "플레이어가 승리, 합:" << sum_p << ", 딜러 합:" << sum_d << endl;
		}

		if (sum_d == sum_p) {
			cout << "죽음, 합:" << sum_p << ", 딜러 합:" << sum_d << endl;
		}
	}

}



int main() {

	compare_card();

	return 0;
}



