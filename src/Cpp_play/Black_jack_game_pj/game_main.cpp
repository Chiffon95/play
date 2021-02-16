#include <iostream>
#include <string.h>
#include "card.h"
#include "card_shape.h"
#include "score.h"
#include "compare.h"
#include "mini_game.h"

using namespace std;



int main() {

	//저장 기능 불러옴
	//fp가 null일 경우 1을 반환하고 새로 저장
	if (readFile() != 1) {
		readFile();
	}

	while (true)
	{
		system("cls");

		int n = 0;
		char a = 0;

		show_menu();
		
		cin >> n;

		if (!cin) {
			cout << "숫자를 입력하세요" << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}

		if (n == 1) {
			system("cls");
			
			play();
			Save();  //순위 저장
			
		}
		if (n == 2) {
			system("cls");
			show_history();
			userRank(); //순위 매김
			showScore();  //순위 출력
			Save();  //순위 저장
			cin >> a;
		}
		if (n == 3) {
			system("cls");
			rule();  //룰 확인
			cin >> a;
		}
		if (n == 4) {
			system("cls");
			play_T();  //미니게임
			
		}
		if (n == 5) {
			system("cls");
			show_end();  //종료
			break;
		}
	}



	return 0;
}

