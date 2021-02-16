#include <iostream>
#include <string.h>
#include "card.h"
#include "card_shape.h"
#include "score.h"
#include "compare.h"
#include "mini_game.h"

using namespace std;



int main() {

	//���� ��� �ҷ���
	//fp�� null�� ��� 1�� ��ȯ�ϰ� ���� ����
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
			cout << "���ڸ� �Է��ϼ���" << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}

		if (n == 1) {
			system("cls");
			
			play();
			Save();  //���� ����
			
		}
		if (n == 2) {
			system("cls");
			show_history();
			userRank(); //���� �ű�
			showScore();  //���� ���
			Save();  //���� ����
			cin >> a;
		}
		if (n == 3) {
			system("cls");
			rule();  //�� Ȯ��
			cin >> a;
		}
		if (n == 4) {
			system("cls");
			play_T();  //�̴ϰ���
			
		}
		if (n == 5) {
			system("cls");
			show_end();  //����
			break;
		}
	}



	return 0;
}

