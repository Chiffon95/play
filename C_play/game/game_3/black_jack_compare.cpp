#include <iostream>
#include <string.h>
#include "card.h"
using namespace std;

long seconds = (long)time(NULL);

//�׽�Ʈ�� ī��迭
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




//��� Ȯ��
void result_game() {

	

}

void compare_card() {

	int a[10];  //���� ī�� �迭
	int b[10];  //�÷��̾� ī�� �迭
	int len = sizeof(a) / sizeof(a[0]);

	//ī�� �� ���� ����
	int sum_d = 0;
	int sum_p = 0;

	//ī�� �迭, ���� �ε���
	int count_d = 0;
	int count_p = 0;
	int count = 0;

	int num = 0; //���� ��� ���� ����
	int ace;  //���̽� Ȯ�ο� ����

	
	CardData cd[52];

	setCard(cd);
	suffle(cd);


	//test_card���� ������ ������ �迭�� ��ȯ�޾� ����
	/*int* pArr = test_card();
	int arr[13];

	for (int i = 0; i < 13; i++) {
		
		arr[i] = *(pArr + i);
	}*/
	
	//���� ī��, ���� 2��
	for (int i = 0; i < 2; i++) {

		
		a[i] = cd[i].num;

		if (a[i] > 10) {
			a[i] = 10;
		}
		count_d++;
		count++;

	}

	//�÷��̾� ī��, ���� 2��
	for (int i = 0; i < 2; i++) {
		
		//���� ���� ī�� 2�� ����
		b[i] = cd[i + 2].num;
		//b[0] = 1; //�׽�Ʈ ��		
		//b[1] = 10;
		
		//j,q,k�� 10���� ����
		if (b[i] > 10) {
			b[i] = 10;
		}

		
		//ace�� 1 or 11���� ����
		/*if (b[i] == 1) {
			

			cout << "���̽� 1�� �ϽǷ��� 1, 11���� �Ͻ÷��� 2";
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

	//�ʹ� ī�� Ȯ��
	cout << "������ ī��: " << a[0] << ", " << a[1] << endl;
	cout << "�÷��̾��� ī��: " << b[0] << ", " << b[1] << endl;

	//ace�� 1 or 11���� ����
	if (b[0] == 1 || b[1] == 1) {

		cout << "���̽��� 1�� �ϽǷ��� 1, 11���� �Ͻ÷��� 2: ";
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

	

	//�ʹ� ī�� �� ����
	for (int i = 0; i < 2; i++) {
		sum_d += a[i];
		sum_p += b[i];

		if (sum_d == 21 || sum_p == 21) {

			if (sum_d == 21) {
				cout << "����, ���� �¸�, ��:" << sum_d << ", �÷��̾� ��:" << sum_p << endl;
				exit(0);
			}
			else if(sum_p == 21)
			{
				cout << "����, �÷��̾� �¸�, ��:" << sum_p << ", ���� ��:" << sum_d << endl;
				exit(0);
			}
		}
	}

	

	
	do
	{

		cout << "���: 1, ����: 2"<<endl;
		cin >> num;

		if (num == 1) {
			/*cout << "�÷��̾� ī�� ���� �Է�: ";

			cin >> b[count_p];*/
			

			b[count_p] = cd[count].num;

			if (b[count_p] > 10) {
				b[count_p] = 10;
			}

			if (b[count_p] == 1) {
				cout << "���̽� 1�� �ϽǷ��� 1, 10���� �Ͻ÷��� 2: "<<endl;
				cin >> ace;

				if (ace == 1) {
					b[count_p] = 1;
				}
				else
				{
					b[count_p] = 10;
				}
			}

			//���� �ʱ�ȭ �� �ٽ� ����
			sum_p = 0;

			for (int i = 0; i < count_p+1; i++) {
				
				sum_p += b[i];

				
			}

			count++;

			cout << "�÷��̾��� ��: " << sum_p << endl;

		}
		else if(num==2)
		{
			//ó�� ī�带 �ް� �ٷ� ����� �� ���Ҷ� �ʱ�ȭ ����
			if (count_d =! 2){
				sum_d = 0;
			}
			
			//������ ī�� ���� 17���� ���� �� ���� �� ����
			while (sum_d < 18) {
				a[count_d] = cd[count].num;

				if (a[count_d] > 10) {
					a[count_d] = 10;
				}

				cout << "����: " << a[count_d] << endl;


				for (int i = 0; i < count_d + 1; i++) {
					sum_d += a[i];
				}

				cout << "���� ��: " << sum_d << endl;

				count++;
			}
			//if (sum_d < 18) {
			//	/*cout << "���� ī�� ���� �Է�: ";
			//	cin >> a[count_d];*/
			//	
			//	a[count_d] = arr[count];

			//	if (a[count_d] > 10) {
			//		a[count_d] = 10;
			//	}

			//	cout << "����: " << a[count_d] << endl;


			//	for (int i = 0; i < count_d+1; i++) {
			//		sum_d += a[i];
			//	}

			//	cout << "���� ��: " << sum_d << endl;

			//	count++;
			//}

			break;
		}

	} while (true);
	

	
	//��� Ȯ��
	if (sum_d > 21 || sum_p > 21) {

		if (sum_d > 21 && sum_p > 21) {
			cout << "���º�" << endl;
		}else if (sum_d > 21) {
			cout << "������ 21�� �Ѿ����Ƿ� �÷��̾ �¸� ���� ��:" << sum_d << ", �÷��̾� ��:" << sum_p<< endl;
		}
		else if(sum_p > 21) {
			cout << "�÷��̾ 21�� �Ѿ����Ƿ� ������ �¸� ���� ��:" << sum_d << ", �÷��̾� ��:" << sum_p << endl;
		}

	}
	else
	{
		if (sum_d > sum_p) {
			cout << "������ �¸�, ��:" << sum_d << ", �÷��̾� ��:" << sum_p << endl;
		}

		if (sum_d < sum_p) {
			cout << "�÷��̾ �¸�, ��:" << sum_p << ", ���� ��:" << sum_d << endl;
		}

		if (sum_d == sum_p) {
			cout << "����, ��:" << sum_p << ", ���� ��:" << sum_d << endl;
		}
	}

}



int main() {

	compare_card();

	return 0;
}



