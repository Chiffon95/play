#include <iostream>
#include <string.h>
#include "card.h"
#include "card_shape.h"

//using namespace std;

//���� ����� ���� ����
int RESULT = 0;

//���� �÷��̾� ����ü
typedef struct B_Player {

	int player_money = 1000;
	int betting_money;

}B_Player;



void compare_card() {

	int dealer[10];  //���� ī����� �迭
	int player[10];  //�÷��̾� ī����� �迭
	int len = sizeof(dealer) / sizeof(dealer[0]);

	//ī�� ��� ���� �迭 -> ����ü �迭 ������� �ʿ����
	/*char *dealer_shape[10];
	char *player_shape[10];*/

	//ī�� �� ���� ����
	int sum_d = 0;
	int sum_p = 0;
	
	//ī�� �迭, ���� �ε���
	int count_d = 0;
	int count_p = 0;
	int count = 0;

	int num = 0; //���� ��� ���� ����
	int ace;  //���̽� Ȯ�ο� ����

	//ī�� ����ü ����
	CardData cd[52];
	CardData dealer_st[10];  //���� ī�� ����� ����ü �迭
	CardData player_st[10];  //�÷��̾� ī�� ����� ����ü �迭

	setCard(cd);  //ī�� ����
	suffle(cd);   //ī�� ����

	
	//���� ī��, ���� 2��
	for (int i = 0; i < 2; i++) {

		//����, ��� ����
		dealer[i] = cd[i].num;
		//dealer_shape[i] = cd[i].shape;
		dealer_st[i] = cd[i];

		//dealer[0] = 1; //�׽�Ʈ ��		
		//dealer[1] = 9;

		//���� ace�� 11���� ����
		if (dealer[0] == 1 || dealer[1] == 1) {

			if (dealer[0] == 1) {
				dealer[0] = 11;
			}
			else if (dealer[1] == 1)
			{
				dealer[1] = 11;
			}

		}

		

		//j,q,k�� 10���� ���
		if (dealer[i] > 10) {
			dealer[i] = 10;
		}

		count_d++; //���� 16���� �� �߰��� �̱� ���� ���� �迭 �ε���
		count++;  //�߰��� ī�带 �̱� ���� ��ü ī�� �ε���

	}

	//�÷��̾� ī��, ���� 2��
	for (int i = 0; i < 2; i++) {
		
		//���� ���� ī�� 2�� ����
		player[i] = cd[i + 2].num;
		player_st[i] = cd[i + 2];

		//player[0] = 1; //�׽�Ʈ ��		
		//player[1] = 10;
		
		//j,q,k�� 10���� ����
		if (player[i] > 10) {
			player[i] = 10;
		}

		count_p++;  //�߰��� ���� �� �÷��̾� �迭 �ε���
		count++;  //�߰��� ī�带 �̱� ���� ��ü ī�� �ε���

	}

	
	//ī�� Ȯ��
	showDealerCard();
	dealerCard(dealer_st[0].shape, dealer_st[0].num);

	showPlayerCard();
	for (int i = 0; i < 2; i++) {
		showPlayerCard(player_st[i].shape, player_st[i].num);
	}
	
	

	//�÷��̾� ace�� 1 or 11���� ����
	if (player[0] == 1 || player[1] == 1) {

		cout << "���̽��� 1�� �ϽǷ��� 1, 11���� �Ͻ÷��� 2: ";
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


	//�ʹ� ī�� �� ����
	for (int i = 0; i < 2; i++) {
		
		sum_d += dealer[i];
		sum_p += player[i];

		//�ʹ� ���� ������ ���
		if (sum_d == 21 || sum_p == 21) {

			if (sum_d == 21 && sum_p == 21) {  //�� �� ������ ���
				cout << "����, ���º�, �÷��̾� ��:" << sum_p << ", ���� ��:" << sum_d << endl;
				/*blackjack = true;
				exit(0);*/
				RESULT = 2;
				break;

			}
			else if(sum_p == 21)
			{
				cout << "����, �÷��̾� �¸�, ��:" << sum_p << ", ���� ��:" << sum_d << endl;
				/*blackjack = true;
				exit(0);*/
				RESULT = 2;
				break;
			}
			else if(sum_d == 21)
			{				
				cout << "����, ���� �¸�, ��:" << sum_d << ", �÷��̾� ��:" << sum_p << endl;
				//exit(0
				RESULT = 2;
				break;
			}

		}
	}

	

	//�߰� �÷��� �κ�
	do
	{

		cout << "���: 1, ����: 2"<<endl;		
		cin >> num;
		system("cls");

		

		//����� ����, �÷��̾�� ī�� ������ �� �޴´�.
		if (num == 1) {
			
			//�ʹ� 2�� ���� �ε����� �߰��� 1�� ����
			player[count_p] = cd[count].num;
			player_st[count_p] = cd[count];

			//j,q,k�� 10���� ����
			if (player[count_p] > 10) {
				player[count_p] = 10;
			}

			showDealerCard();
			dealerCard(dealer_st[0].shape, dealer_st[0].num);

			showPlayerCard();
			for (int i = 0; i < count_p+1; i++) {
				showPlayerCard(player_st[i].shape, player_st[i].num);
			}

			//���̽� ī�� ����
			if (player[count_p] == 1) {
				cout << "���̽��� 1�� �ϽǷ��� 1, 11���� �Ͻ÷��� 2: "<<endl;
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

			//���� �ʱ�ȭ �� �ٽ� ����
			sum_p = 0;

			
			for (int i = 0; i < count_p+1; i++) {
				
				sum_p += player[i];
								
			}

			//�߰��� ���� ī�带 ���� ������ 21�� ������ ����
			if (sum_p > 21) {
				break;
			}

			count++;  //��ü �迭 �ε��� ����
			count_p++;  //�÷��̾� �迭 �ε��� ����

			cout << "�÷��̾��� ��: " << sum_p << endl;

		}
		else if(num==2)  
		{
			//ó�� ī�带 �ް� �ٷ� ����� ���� �� ���Ҷ� �ʱ�ȭ ����
			/*if (count_d <= 2){
				sum_d = 0;
			}*/
			
			//������ ī�� ���� 16���� �� ���� �� ����
			while (sum_d <= 16 ) {
				dealer[count_d] = cd[count].num;
				dealer_st[count_d] = cd[count];

				if (dealer[count_d] > 10) {
					dealer[count_d] = 10;
				}

				if (dealer[count_d] == 1) {
					dealer[count_d] = 11;
				}

				//Ȯ�ο�
				cout << "����: " << dealer[count_d] << endl;

				sum_d = 0;

				for (int i = 0; i < count_d + 1; i++) {
					sum_d += dealer[i];
				}

				cout << "���� ��: " << sum_d << endl;

				count++; //��ü �迭 �ε��� ����
				count_d++;  //���� �迭 �ε��� ����
			}
			
			break;
		}

		//ī�� Ȯ�ο�
		showDealerCard();
		dealerCard(dealer_st[0].shape, dealer_st[0].num);

		showPlayerCard();
		for (int i = 0; i < count_p+1; i++) {
			showPlayerCard(player_st[i].shape, player_st[i].num);
		}

	} while (true);
	
	system("cls");
	
	
	
	//��� Ȯ��
	showDealerCard();

	for (int i = 0; i < count_d; i++) {
		dealerCard(dealer_st[i].shape, dealer_st[i].num);
	}
	
	showPlayerCard();

	for (int i = 0; i < count_p + 1; i++) {
		showPlayerCard(player_st[i].shape, player_st[i].num);
	}
	if (sum_d > 21 || sum_p > 21) {  //�÷��̾�, ���� �� �� ���� 21�� ������

		if (sum_d > 21 && sum_p > 21) {
			cout << "���º�" << endl;			
			RESULT = 3;

		}else if (sum_d > 21) {
			cout << "������ 21�� �Ѿ����Ƿ� �÷��̾ �¸� ���� ��:" << sum_d << ", �÷��̾� ��:" << sum_p<< endl;			
			RESULT = 1;
		}
		else if(sum_p > 21) {
			cout << "�÷��̾ 21�� �Ѿ����Ƿ� ������ �¸� ���� ��:" << sum_d << ", �÷��̾� ��:" << sum_p << endl;			
			RESULT = 4;
		}

	}
	else
	{
		if (sum_d > sum_p) {
			cout << "������ �¸�, ��:" << sum_d << ", �÷��̾� ��:" << sum_p << endl;			
			RESULT = 4;
		}

		if (sum_d < sum_p) {
			cout << "�÷��̾ �¸�, ��:" << sum_p << ", ���� ��:" << sum_d << endl;			
			RESULT = 1;
		}

		if (sum_d == sum_p) {
			cout << "���, ��:" << sum_p << ", ���� ��:" << sum_d << endl;			
			RESULT = 3;
		}
	}

}


void rule() {

	cout << "\n\t\t R\tU\tL\tE \t\n" << endl;
	cout << "1. ���� �ݾ��� ���Ѵ�.(�ּ� �ݾ� 100, �ִ� 500, 100������ ���ð���)" << endl;
	cout << "2. �÷��̾���� ī�带 ���徿 ���ư��鼭 ������ �޴´�." << endl;
	cout << "3. �÷��̾�� ī�带 ��� �����ؾ��ϰ� ������ ���常 �����Ѵ�." << endl;
	cout << "4. A�� 1�Ǵ� 11�� ����� �� �ְ� J, Q, K�� 10���� ����Ѵ�." << endl;
	cout << "5. ������ A�� 11�� �����Ѵ�." << endl;
	cout << "6. ������ ī���� ���� 16���ϸ� 1���� �� �޾ƾ��ϰ� 17�̻��̸� ���̻� ���� �ʴ´�." << endl;
	cout << "7. ó�� ī�� 2���� ���� 21�̸� BlackJack" << endl;
	cout << "8. ī�� ������ ���� 21�� ����� ����� �¸� 21�ʰ��� die " << endl;
	cout << "9. �¸��� ���ñݾ��� 1��, BlackJack�� 1.5���� �ݾ��� �޴´�." << endl;

}


void play() {

	B_Player p1;

	while (true)
	{
		int n = 0;
		cout << "-------------------------------------------------------------------------" << endl;
		cout << "1. ���� ����\t 2. �÷��̾ �ݾ� Ȯ��\t 3. ��Ģ ����\t 4. ����" << endl;
		cout << "-------------------------------------------------------------------------" << endl;
		cin >> n;

		if (n == 1) {
			system("cls");

			while (true)
			{
				system("cls");
				cout << "�󸶸� ���� �Ͻðڽ��ϱ�?, �����Ϸ��� -1�Է�" << endl;

				while (true)
				{
					cin >> p1.betting_money;

					//���� �ݾ� ����
					if (p1.betting_money == -1)
					{
						break;
					}
					if (p1.betting_money < 100)
					{
						cout << "100 �̻� �����ϼ���" << endl;
					}
					else if (p1.betting_money > 500)
					{
						cout << "500 ���Ϸ� �����ϼ���" << endl;
					}
					else if (p1.betting_money >= 100 && p1.betting_money <= 500)
					{
						break;
					}
				}

				//���� �Լ�
				compare_card();

				//���� �ݾ� ���
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

				cout << "��" << p1.player_money << endl;

				cout << "��� �Ͻ÷��� �ƹ����� �Է�, ����: -1�Է�" <<endl;
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



