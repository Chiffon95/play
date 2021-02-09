# include <iostream>
#include "card_shape.h"

//using namespace std;

void showPlayerCard() {
    cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛                      Player Cards                      弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
    cout << "  - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    //cout << "\t\t\t- New Card -" << endl;
}
//Ы溯檜橫 蘋萄 轎溘
void showPlayerCard(char *s, int n) {  //s:賅曄, n:璋濠
   /* cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛                      Player Cards                      弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
    cout << "  - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "\t\t\t- New Card -" << endl;*/
    char nN[20];

    if (n > 1 && n < 10) {

        //1, 棻檜嬴跨萄
        if ((strcmp(s, "diamond")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "Ⅹ" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }

        //2, жお
        if ((strcmp(s, "heart")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2665" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }

        //3, 蝶む檜萄
        if ((strcmp(s, "spade")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2660" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }

        //4. 贗煎幗
        if ((strcmp(s, "cluber")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2663" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }
    }
    else if (n == 10) {  //旋濠 熱 и啗煎 評煎 濛撩
        if ((strcmp(s, "diamond")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "    弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "Ⅹ" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛     " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }

        if ((strcmp(s, "heart")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "    弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2665" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛     " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }


        if ((strcmp(s, "spade")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "    弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2660" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛     " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }


        if ((strcmp(s, "cluber")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "    弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2663" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛     " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }
    }

    else {  //蘋萄 旋濠 轎溘
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

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << nN << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "Ⅹ" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << nN << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }

        if ((strcmp(s, "heart")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << nN << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2665" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << nN << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }


        if ((strcmp(s, "spade")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << nN << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2660" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << nN << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }


        if ((strcmp(s, "cluber")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << nN << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2663" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << nN << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }
    }

    cout << endl;
}

//檜瞪 蘋萄 轎溘
void previousCard(int s, int n) {

    string shape;

    if (s == 1) {
        shape = "Ⅹ";
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


    cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛                      Player Cards                      弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
    cout << "   Previous Cards:" << endl;
    cout << "\t\t   " << shape << " " << nN;

    cout << endl;
}

void showDealerCard() {
    cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛                      Dealer Cards                      弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
    cout << "  - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
}
//裁楝 蘋萄 轎溘
void dealerCard(char* s, int n) {

    /*cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛                      Dealer Cards                      弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
    cout << "\t\t\t- New Card -" << endl;*/
    char nN[20];

    
    if (n > 1 && n < 10) {

        //1, 棻檜嬴跨萄
        if ((strcmp(s, "diamond")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "Ⅹ" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }

        //2. жお
        if ((strcmp(s, "heart")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2665" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }

        //3. 蝶む檜萄
        if ((strcmp(s, "spade")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2660" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }

        //4. 贗煎幗
        if ((strcmp(s, "cluber")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2663" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }
    }
    else if (n == 10) {
        if ((strcmp(s, "diamond")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "    弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "Ⅹ" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛     " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }

        if ((strcmp(s, "heart")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "    弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2665" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛     " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }


        if ((strcmp(s, "spade")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "    弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2660" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛     " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }


        if ((strcmp(s, "cluber")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << n << "    弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2663" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛     " << n << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
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

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << nN << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "Ⅹ" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << nN << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }

        if ((strcmp(s, "heart")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << nN << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2665" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << nN << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }


        if ((strcmp(s, "spade")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << nN << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2660" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << nN << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }


        if ((strcmp(s, "cluber")) == 0) {

            cout << "\t\t\t 忙式式式式式式式忖" << endl;
            cout << "\t\t\t 弛 " << nN << "     弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛   " << "\u2663" << "  弛" << endl;
            cout << "\t\t\t 弛       弛" << endl;
            cout << "\t\t\t 弛      " << nN << "弛" << endl;
            cout << "\t\t\t 戌式式式式式式式戎" << endl;
        }
    }

    cout << "  - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << endl;    
    
}