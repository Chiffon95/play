# include <iostream>
#include "card_shape.h"

//using namespace std;

void showPlayerCard() {
    cout << "��������������������������������������������������������������������������������������������������������������������" << endl;
    cout << "��                      Player Cards                      ��" << endl;
    cout << "��������������������������������������������������������������������������������������������������������������������" << endl;
    cout << "  - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    //cout << "\t\t\t- New Card -" << endl;
}
//�÷��̾� ī�� ���
void showPlayerCard(char *s, int n) {  //s:���, n:����
   /* cout << "��������������������������������������������������������������������������������������������������������������������" << endl;
    cout << "��                      Player Cards                      ��" << endl;
    cout << "��������������������������������������������������������������������������������������������������������������������" << endl;
    cout << "  - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "\t\t\t- New Card -" << endl;*/
    char nN[20];

    if (n > 1 && n < 10) {

        //1, ���̾Ƹ��
        if ((strcmp(s, "diamond")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "��" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }

        //2, ��Ʈ
        if ((strcmp(s, "heart")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2665" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }

        //3, �����̵�
        if ((strcmp(s, "spade")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2660" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }

        //4. Ŭ�ι�
        if ((strcmp(s, "cluber")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2663" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }
    }
    else if (n == 10) {  //���� �� �Ѱ�� ���� �ۼ�
        if ((strcmp(s, "diamond")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "    ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "��" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��     " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }

        if ((strcmp(s, "heart")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "    ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2665" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��     " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }


        if ((strcmp(s, "spade")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "    ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2660" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��     " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }


        if ((strcmp(s, "cluber")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "    ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2663" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��     " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }
    }

    else {  //ī�� ���� ���
        if (n == 1) {
            strcpy(nN, "A");
        }

        if (n == 11) {
            strcpy(nN, "J");
        }

        if (n == 12) {
            strcpy(nN, "Q");
        }

        if (n == 13) {
            strcpy(nN, "K");
        }


        if ((strcmp(s, "diamond")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << nN << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "��" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << nN << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }

        if ((strcmp(s, "heart")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << nN << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2665" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << nN << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }


        if ((strcmp(s, "spade")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << nN << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2660" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << nN << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }


        if ((strcmp(s, "cluber")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << nN << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2663" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << nN << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }
    }

    cout << endl;
}

//���� ī�� ���
void previousCard(int s, int n) {

    string shape;

    if (s == 1) {
        shape = "��";
    }

    if (s == 2) {
        shape = "\u2665";
    }

    if (s == 3) {
        shape = "\u2660";
    }

    if (s == 4) {
        shape = "\u2663";
    }

    char nN[20];

    if (n > 1 && n < 11) {
        if (n == 2) {
            strcpy(nN, "2");
        }
        if (n == 3) {
            strcpy(nN, "3");
        }
        if (n == 4) {
            strcpy(nN, "4");
        }
        if (n == 5) {
            strcpy(nN, "5");
        }
        if (n == 6) {
            strcpy(nN, "6");
        }
        if (n == 7) {
            strcpy(nN, "7");
        }
        if (n == 8) {
            strcpy(nN, "8");
        }
        if (n == 9) {
            strcpy(nN, "9");
        }
        if (n == 10) {
            strcpy(nN, "10");
        }



    }


    else {
        if (n == 1) {
            strcpy(nN, "A");
        }

        if (n == 11) {
            strcpy(nN, "J");
        }

        if (n == 12) {
            strcpy(nN, "Q");
        }

        if (n == 13) {
            strcpy(nN, "K");
        }
    }


    cout << "��������������������������������������������������������������������������������������������������������������������" << endl;
    cout << "��                      Player Cards                      ��" << endl;
    cout << "��������������������������������������������������������������������������������������������������������������������" << endl;
    cout << "   Previous Cards:" << endl;
    cout << "\t\t   " << shape << " " << nN;

    cout << endl;
}

void showDealerCard() {
    cout << "��������������������������������������������������������������������������������������������������������������������" << endl;
    cout << "��                      Dealer Cards                      ��" << endl;
    cout << "��������������������������������������������������������������������������������������������������������������������" << endl;
    cout << "  - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
}
//���� ī�� ���
void dealerCard(char* s, int n) {

    /*cout << "��������������������������������������������������������������������������������������������������������������������" << endl;
    cout << "��                      Dealer Cards                      ��" << endl;
    cout << "��������������������������������������������������������������������������������������������������������������������" << endl;
    cout << "\t\t\t- New Card -" << endl;*/
    char nN[20];

    
    if (n > 1 && n < 10) {

        //1, ���̾Ƹ��
        if ((strcmp(s, "diamond")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "��" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }

        //2. ��Ʈ
        if ((strcmp(s, "heart")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2665" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }

        //3. �����̵�
        if ((strcmp(s, "spade")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2660" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }

        //4. Ŭ�ι�
        if ((strcmp(s, "cluber")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2663" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }
    }
    else if (n == 10) {
        if ((strcmp(s, "diamond")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "    ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "��" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��     " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }

        if ((strcmp(s, "heart")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "    ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2665" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��     " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }


        if ((strcmp(s, "spade")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "    ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2660" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��     " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }


        if ((strcmp(s, "cluber")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << n << "    ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2663" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��     " << n << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }
    }

    else {
        
        if (n == 1) {
            strcpy(nN, "A");
        }

        if (n == 11) {
            strcpy(nN, "J");
        }

        if (n == 12) {
            strcpy(nN, "Q");
        }

        if (n == 13) {
            strcpy(nN, "K");
        }


        if ((strcmp(s, "diamond")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << nN << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "��" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << nN << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }

        if ((strcmp(s, "heart")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << nN << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2665" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << nN << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }


        if ((strcmp(s, "spade")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << nN << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2660" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << nN << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }


        if ((strcmp(s, "cluber")) == 0) {

            cout << "\t\t\t ������������������" << endl;
            cout << "\t\t\t �� " << nN << "     ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��   " << "\u2663" << "  ��" << endl;
            cout << "\t\t\t ��       ��" << endl;
            cout << "\t\t\t ��      " << nN << "��" << endl;
            cout << "\t\t\t ������������������" << endl;
        }
    }

    cout << "  - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << endl;    
    
}