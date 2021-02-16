#include <iostream>
#include <string.h>
#include "card.h"
#include "card_shape.h"
#include "score.h"
#include "compare.h"
#include <Windows.h>

using namespace std;

//���� ����� ���� ����
int RESULT = 0;

//insurance�� ���� ����
int ins = 0;
int d_bj = 0;

int player_money;
int player_betting;

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

    bool BLACK_JACK = false;

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

        //���� ���� �׽�Ʈ ��      
        //dealer[0] = 1;
        //dealer[1] = 10;

        //j,q,k�� 10���� ���
        if (dealer[i] > 10) {
            dealer[i] = 10;
        }


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


        count_d++; //���� 16���� �� �߰��� �̱� ���� ���� �迭 �ε���
        count++;  //�߰��� ī�带 �̱� ���� ��ü ī�� �ε���

    }

    //�÷��̾� ī��, ���� 2��
    for (int i = 0; i < 2; i++) {

        //���� ���� ī�� 2�� ����
        player[i] = cd[i + 2].num;
        player_st[i] = cd[i + 2];

        //�÷��̾� ���� �׽�Ʈ ��
        //player[0] = 10; 
        //player[1] = 1;

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

        if (!cin) {
            cout << "1 or 2�� �Է��ϼ���" << endl;
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


    //�ʹ� ī�� �� ����
    for (int i = 0; i < 2; i++) {

        sum_d += dealer[i];
        sum_p += player[i];


    }

    //insurance ����
    ins = 0;
    int FLAG = 0;  //���� �Ҷ� ����� ������ ���� ����� ����
    char a = '\0';

    if (dealer[0] == 11) {

        cout << "insurance?" << endl;
        cout << "�� : 1, �ƴϿ� : 2" << endl;
        cin >> ins;

        player_money = player_money - player_betting - (player_betting / 2);
        
        if (player_money <=0) { //���� �� ����� ���� �Ұ�
            cout << "insurance�� ������ ���� �����մϴ�!" << endl;
            FLAG = 1;

            cout << "����Ϸ��� �ƹ�Ű �Է�" << endl;
            cin >> a;

            //�ʱ�ȭ
            player_money = 0;
            player_betting = 0;

            
        }
        
        if (sum_d == 21 && FLAG != 1)
        {
            d_bj = 1;
        }

        else if(FLAG != 1)
        {
            cout << "������ ������ �ƴմϴ�." << endl;
        }

    }

    //�ʹ� ���� ������ ���
    if (sum_d == 21 || sum_p == 21) {

        //system("cls");

        if (sum_d == 21 && sum_p == 21) {  //�� �� ������ ���

            system("cls");
            cout << "����, ���º�" << endl;

            show_push();
            BLACK_JACK = true;
            RESULT = 3;

        }
        else if (sum_p == 21)
        {
            system("cls");
            cout << "����, �÷��̾� �¸�"<< endl;

            show_bkLog();
            BLACK_JACK = true;
            RESULT = 2;

        }
        else if (sum_d == 21)
        {
            system("cls");

            if (dealer[0] == 11) {  //���� ī�尡 ���̽��鼭 �����ΰ��, ���� ���� �ٷ� ��� Ȯ��
                cout << "����, ���� �¸�"<< endl;
                //show_bkLog();
                BLACK_JACK = true;
                RESULT = 5;
            }
            else if(dealer[1] == 11)  
            {
                //ī�� Ȯ��
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

    //�ʹ� ���� ������ �ƴ� ���
    if (BLACK_JACK == false)
    {
        //�߰� �÷��� �κ�
        do
        {

            cout << "���: 1, ����: 2" << endl;
            cin >> num;

            if (!cin) {
                cout << "1 or 2�� �Է��ϼ���" << endl;
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }






            //����� ����, �÷��̾�� ī�� ������ �� �޴´�.
            if (num == 1) {

                system("cls");

                //�ʹ� 2�� ���� �ε����� �߰��� 1�� ����
                player[count_p] = cd[count].num;
                player_st[count_p] = cd[count];

                //j,q,k�� 10���� ����
                if (player[count_p] > 10) {
                    player[count_p] = 10;
                }

                //system("cls");

                //���̽� ī�� ����
                if (player[count_p] == 1) {

                    //���̽� ī��� ���
                    showDealerCard();
                    dealerCard(dealer_st[0].shape, dealer_st[0].num);

                    showPlayerCard();

                    for (int i = 0; i < count_p + 1; i++) {
                        showPlayerCard(player_st[i].shape, player_st[i].num);
                    }

                    cout << "���̽��� 1�� �ϽǷ��� 1, 11���� �Ͻ÷��� 2: " << endl;
                    cin >> ace;

                    if (ace == 1) {
                        player[count_p] = 1;
                    }
                    else
                    {
                        player[count_p] = 11;
                    }
                }

                //���� �ʱ�ȭ �� �ٽ� ����
                sum_p = 0;

                for (int i = 0; i < count_p + 1; i++) {

                    sum_p += player[i];

                }

                //�߰��� ���� ī�带 ���� ������ 21�� ����������
                if (player[count_p] != 1 && sum_p <= 21) {

                    showDealerCard();
                    dealerCard(dealer_st[0].shape, dealer_st[0].num);

                    showPlayerCard();
                    for (int i = 0; i < count_p + 1; i++) {
                        showPlayerCard(player_st[i].shape, player_st[i].num);
                    }
                }
                
                //Ȯ�ο�
                //cout << "�÷��̾��� ��: " << sum_p << endl;

                //�߰��� ���� ī�带 ���� ������ 21�� ������ ����
                if (sum_p > 21) {
                    break;
                }

                count++;  //��ü �迭 �ε��� ����
                count_p++;  //�÷��̾� �迭 �ε��� ����
            }

            else if (num == 2)
            {
                //������ ī�� ���� 16���� �� ���� �� ����
                while (sum_d <= 16) {
                    dealer[count_d] = cd[count].num;
                    dealer_st[count_d] = cd[count];

                    if (dealer[count_d] > 10) {
                        dealer[count_d] = 10;
                    }

                    //dealer[count_d] == 1;  //�׽�Ʈ

                    if (dealer[count_d] == 1) {
                        dealer[count_d] = 11;
                    }

                    //Ȯ�ο�
                    //cout << "����: " << dealer[count_d] << endl;

                    sum_d = 0;

                    for (int i = 0; i < count_d + 1; i++) {
                        sum_d += dealer[i];
                    }

                    //Ȯ�ο�
                    //cout << "���� ��: " << sum_d << endl;

                    count++; //��ü �迭 �ε��� ����
                    count_d++;  //���� �迭 �ε��� ����
                }

                break;
            }

            ////ī�� Ȯ�ο�
            //showDealerCard();
            //dealerCard(dealer_st[0].shape, dealer_st[0].num);

            //showPlayerCard();
            //for (int i = 0; i < count_p + 1; i++) {
            //   showPlayerCard(player_st[i].shape, player_st[i].num);
            //}


        } while (true);

        system("cls");

    }



    //���� ī�� ��� Ȯ��
    showDealerCard();

    for (int i = 0; i < count_d; i++) {
        dealerCard(dealer_st[i].shape, dealer_st[i].num);
    }

    //�÷��̾� ī�� ��� Ȯ��
    showPlayerCard();

    for (int i = 0; i < count_p + 1; i++) {
        showPlayerCard(player_st[i].shape, player_st[i].num);
    }

    if (RESULT != 5 && BLACK_JACK == false) {  //������ ������ �ƴҰ��

        if (sum_d > 21 || sum_p > 21) {  //�÷��̾�, ���� �� �� ���� 21�� ������

            if (sum_d > 21 && sum_p > 21) {
                cout << "���º�" << endl;
                show_push();
                RESULT = 3;

            }
            else if (sum_d > 21) {
                //cout << "������ 21�� �Ѿ����Ƿ� �÷��̾ �¸� ���� ��:" << sum_d << ", �÷��̾� ��:" << sum_p << endl;
                show_burst();
                show_win();
                RESULT = 1;
            }
            else if (sum_p > 21) {
                //cout << "�÷��̾ 21�� �Ѿ����Ƿ� ������ �¸� ���� ��:" << sum_d << ", �÷��̾� ��:" << sum_p << endl;
                show_burst();
                show_lose();
                RESULT = 4;
            }

        }
        else
        {
            if (sum_d > sum_p) {
                cout << "���� WIN, ��:" << sum_d << ", �÷��̾� ��:" << sum_p << endl;
                show_lose();
                RESULT = 4;
            }

            if (sum_d < sum_p) {
                cout << "�÷��̾� WIN, ��:" << sum_p << ", ���� ��:" << sum_d << endl;
                show_win();
                RESULT = 1;
            }

            if (sum_d == sum_p) {
                cout << "PUSH, ��:" << sum_p << ", ���� ��:" << sum_d << endl;
                show_push();
                RESULT = 3;
            }
        }

    }

}


void play() {

    //���� �÷��̾� ����ü ����
    B_Player p1;

    int n;
    char a = '\0';


    p1.player_money = 1000;  //�÷��̾� �� �ʱ�ȭ
    //p1.player_money = 10; //�׽�Ʈ

    char name[10];

    cout << "�̸� �Է�:" << endl;

    cin >> name;

    while (true)
    {



        system("cls");


        cout << "�󸶸� ���� �Ͻðڽ��ϱ�?" << endl;

        //�Է��� �̸��� ����� �̸��� ã�� ���� ���� �̸��̸� ������ ���ñݾ� �ҷ���
        if (Load_User(name) != -1) {
            p1.player_money = Load_User(name);
        }

        cout << "player_money : " << p1.player_money << endl;

        

        //���ñݾ��� ������ ����
        if (p1.player_money <= 0)
        {
            cout << "������ �� �ִ� �ݾ��� �����ϴ�." << endl;
            cout << endl;
            cout << "\n�ڷΰ����� �ƹ� Ű�� ��������" << endl;
            cin >> a;
            break;
        }

        //���� �ݾ� ����
        while (true)
        {

            cin >> p1.betting_money;

            if (p1.betting_money > p1.player_money)
            {
                cout << "������ �ִ� �ݾ��� �����ϴ�. �ٽ� �����ϼ���." << endl;
            }
            else if (p1.betting_money == p1.player_money) {
                show_allin();

                break;
            }
            else if (p1.betting_money < 100)
            {
                cout << "���� �Ǵ� 100 �̻� �����ϼ���" << endl;
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

        //���� ������ ���� ���������� �� ����
        player_money = p1.player_money;
        player_betting = p1.betting_money;

        //���� �Լ�
        if (p1.betting_money != -1) {

            compare_card();

            if (RESULT == 5) {  //������ ������ ���
                
                if (ins == 1) { //���� �����
                    if (p1.player_money - p1.betting_money- (p1.betting_money /2) >= 0) {

                        if (d_bj == 1) {  //������ ������ ���
                            p1.player_money += ((p1.betting_money));  //���ñݾ��� �޴´�.
                        }

                        else if (d_bj == 0) {  //������ ������ �ƴ� ���
                            p1.player_money -= (p1.betting_money / 2);  //������� �Ҵ´�.
                        }
                    }
                    else {
                        //cout << "insurance�� ������ ���� �����մϴ�! \n insurance�� �������� �ʰ� ������ �����մϴ�." << endl;
                    }

                    ins = 0;  //�ʱ�ȭ
                }
            }
            


            //���� �ݾ� ���
            switch (RESULT)
            {

            case 1: //�̱�
                p1.player_money += (p1.betting_money);
                break;

            case 2:  //����
                p1.player_money += (p1.betting_money * 1.5);
                break;

            case 3:  //���º�
                p1.player_money;
                break;

            case 4:  //��
                p1.player_money -= p1.betting_money;
                break;

            case 5:  //���� ����, ���̽�ī�� ǥ��
                cout << "������ ����" << endl;
                show_bkLog();
                p1.player_money -= p1.betting_money;                
                break;

            }

            RESULT = 0;  //RESULT �ʱ�ȭ

        }

        //���� ���
        show_chips(p1.player_money);


        cout << "��� �Ͻ÷��� �ƹ����� �Է�, ����: -1�Է�" << endl;
        cin >> n;

        //���ڸ� �Է�
        if (!cin) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }

        //�����
        if (n == -1) {

            //����� �̸�, ���ñݾ� ����
            inputUserData(name, p1.player_money);

            system("cls");
            break;
        }

        //��� �÷���
        else
            Save_User(p1.player_money);  //��� �� �� �÷��̾� �̸��� �״��, ���ñݾ׸� ����
        continue;


    }
}
