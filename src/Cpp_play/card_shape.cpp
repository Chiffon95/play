# include <iostream>
#include "card_shape.h"
#include <Windows.h>

//using namespace std;

void show_menu() {
    cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛                        M E N U                         弛" << endl;
    cout << "汝式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式汙" << endl;
    cout << "弛\t\t\t\t\t\t\t 弛" << endl;
    cout << "弛\t\t 1. \tNew Game\t\t\t 弛" << endl;
    cout << "弛\t\t\t\t\t\t\t 弛" << endl;
    cout << "弛\t\t 2. \tRanking\t\t\t\t 弛" << endl;
    cout << "弛\t\t\t\t\t\t\t 弛" << endl;
    cout << "弛\t\t 3. \tRules\t\t\t\t 弛" << endl;
    cout << "弛\t\t\t\t\t\t\t 弛" << endl;
    cout << "弛\t\t 4. \tMini Game\t\t\t 弛" << endl;
    cout << "弛\t\t\t\t\t\t\t 弛" << endl;
    cout << "弛\t\t 5. \tExit\t\t\t\t 弛" << endl;
    cout << "弛\t\t\t\t\t\t\t 弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;

}

void show_bkLog() {
    cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛   ﹥﹥﹥﹥      ﹥                  ﹥               ﹥﹥﹥       ﹥      ﹥   弛" << endl;
    cout << "弛   ﹥      ﹥    ﹥                 ﹥﹥            ﹥      ﹥     ﹥    ﹥     弛" << endl;
    cout << "弛   ﹥      ﹥    ﹥                ﹥  ﹥         ﹥          ﹥   ﹥  ﹥       弛" << endl;
    cout << "弛   ﹥    ﹥      ﹥               ﹥    ﹥       ﹥                ﹥﹥         弛" << endl;
    cout << "弛   ﹥      ﹥    ﹥              ﹥      ﹥      ﹥                ﹥﹥         弛" << endl;
    cout << "弛   ﹥       ﹥   ﹥             ﹥﹥﹥﹥﹥﹥      ﹥          ﹥   ﹥  ﹥       弛" << endl;
    cout << "弛   ﹥      ﹥    ﹥            ﹥          ﹥       ﹥      ﹥     ﹥    ﹥     弛" << endl;
    cout << "弛   ﹥﹥﹥﹥      ﹥﹥﹥﹥﹥   ﹥            ﹥        ﹥﹥﹥       ﹥      ﹥   弛" << endl;
    cout << "弛                                                                                弛" << endl;
    cout << "弛    ﹥﹥﹥﹥﹥﹥﹥          ﹥                ﹥﹥﹥         ﹥      ﹥         弛" << endl;
    cout << "弛          ﹥               ﹥﹥             ﹥      ﹥       ﹥    ﹥           弛" << endl;
    cout << "弛          ﹥              ﹥  ﹥          ﹥          ﹥     ﹥  ﹥             弛" << endl;
    cout << "弛          ﹥             ﹥    ﹥        ﹥                  ﹥﹥               弛" << endl;
    cout << "弛          ﹥            ﹥      ﹥       ﹥                  ﹥﹥               弛" << endl;
    cout << "弛          ﹥           ﹥﹥﹥﹥﹥﹥       ﹥          ﹥     ﹥  ﹥             弛" << endl;
    cout << "弛    ﹥    ﹥          ﹥          ﹥        ﹥      ﹥       ﹥    ﹥           弛" << endl;
    cout << "弛     ﹥﹥﹥          ﹥            ﹥         ﹥﹥﹥         ﹥      ﹥         弛" << endl;

    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
    cout << endl;
}

void show_win() {
    cout << endl;
    cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛   ﹥              ﹥      ﹥﹥﹥﹥       ﹥            ﹥       弛" << endl;
    cout << "弛     ﹥          ﹥      ﹥        ﹥     ﹥            ﹥       弛" << endl;
    cout << "弛       ﹥      ﹥      ﹥            ﹥   ﹥            ﹥       弛" << endl;
    cout << "弛         ﹥  ﹥        ﹥            ﹥   ﹥            ﹥       弛" << endl;
    cout << "弛           ﹥          ﹥            ﹥   ﹥            ﹥       弛" << endl;
    cout << "弛           ﹥          ﹥            ﹥   ﹥            ﹥       弛" << endl;
    cout << "弛           ﹥            ﹥        ﹥       ﹥        ﹥         弛" << endl;
    cout << "弛           ﹥              ﹥﹥﹥﹥           ﹥﹥﹥﹥           弛" << endl;
    cout << "弛                                                                 弛" << endl;
    cout << "弛   ﹥              ﹥     ﹥﹥﹥﹥﹥      ﹥            ﹥    ﹥ 弛" << endl;
    cout << "弛   ﹥      ﹥      ﹥         ﹥          ﹥﹥          ﹥    ﹥ 弛" << endl;
    cout << "弛   ﹥    ﹥  ﹥    ﹥         ﹥          ﹥  ﹥        ﹥    ﹥ 弛" << endl;
    cout << "弛   ﹥  ﹥      ﹥  ﹥         ﹥          ﹥    ﹥      ﹥    ﹥ 弛" << endl;
    cout << "弛   ﹥  ﹥      ﹥  ﹥         ﹥          ﹥      ﹥    ﹥    ﹥ 弛" << endl;
    cout << "弛   ﹥  ﹥      ﹥  ﹥         ﹥          ﹥        ﹥  ﹥    ﹥ 弛" << endl;
    cout << "弛   ﹥  ﹥      ﹥  ﹥         ﹥          ﹥          ﹥﹥       弛" << endl;
    cout << "弛     ﹥          ﹥       ﹥﹥﹥﹥﹥      ﹥            ﹥    ﹥ 弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
    cout << endl;
}

void show_lose() {
    cout << endl;
    cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛   ﹥              ﹥      ﹥﹥﹥﹥       ﹥            ﹥       弛" << endl;
    cout << "弛     ﹥          ﹥      ﹥        ﹥     ﹥            ﹥       弛" << endl;
    cout << "弛       ﹥      ﹥      ﹥            ﹥   ﹥            ﹥       弛" << endl;
    cout << "弛         ﹥  ﹥        ﹥            ﹥   ﹥            ﹥       弛" << endl;
    cout << "弛           ﹥          ﹥            ﹥   ﹥            ﹥       弛" << endl;
    cout << "弛           ﹥          ﹥            ﹥   ﹥            ﹥       弛" << endl;
    cout << "弛           ﹥            ﹥        ﹥       ﹥        ﹥         弛" << endl;
    cout << "弛           ﹥              ﹥﹥﹥﹥           ﹥﹥﹥﹥           弛" << endl;
    cout << "弛                                                                 弛" << endl;
    cout << "弛     ﹥             ﹥﹥﹥       ﹥﹥﹥     ﹥﹥﹥﹥﹥    ﹥     弛" << endl;
    cout << "弛     ﹥           ﹥      ﹥   ﹥           ﹥            ﹥     弛" << endl;
    cout << "弛     ﹥           ﹥      ﹥   ﹥           ﹥            ﹥     弛" << endl;
    cout << "弛     ﹥           ﹥      ﹥     ﹥﹥﹥     ﹥﹥﹥﹥﹥    ﹥     弛" << endl;
    cout << "弛     ﹥           ﹥      ﹥           ﹥   ﹥            ﹥     弛" << endl;
    cout << "弛     ﹥           ﹥      ﹥           ﹥   ﹥            ﹥     弛" << endl;
    cout << "弛     ﹥           ﹥      ﹥           ﹥   ﹥                   弛" << endl;
    cout << "弛     ﹥﹥﹥﹥﹥     ﹥﹥﹥       ﹥﹥﹥     ﹥﹥﹥﹥﹥    ﹥     弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
    cout << endl;
}

void show_end() {
    cout << endl;
    cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛   ﹥﹥﹥﹥﹥﹥﹥   ﹥          ﹥   ﹥﹥﹥﹥﹥﹥﹥  弛" << endl;
    cout << "弛         ﹥         ﹥          ﹥   ﹥              弛" << endl;
    cout << "弛         ﹥         ﹥          ﹥   ﹥              弛" << endl;
    cout << "弛         ﹥         ﹥﹥﹥﹥﹥﹥﹥   ﹥﹥﹥﹥﹥﹥﹥  弛" << endl;
    cout << "弛         ﹥         ﹥          ﹥   ﹥              弛" << endl;
    cout << "弛         ﹥         ﹥          ﹥   ﹥              弛" << endl;
    cout << "弛         ﹥         ﹥          ﹥   ﹥              弛" << endl;
    cout << "弛         ﹥         ﹥          ﹥   ﹥﹥﹥﹥﹥﹥﹥  弛" << endl;
    cout << "弛                                                     弛" << endl;
    cout << "弛   ﹥﹥﹥﹥﹥﹥﹥   ﹥          ﹥   ﹥﹥﹥﹥﹥      弛" << endl;
    cout << "弛   ﹥               ﹥﹥        ﹥   ﹥        ﹥    弛" << endl;
    cout << "弛   ﹥               ﹥  ﹥      ﹥   ﹥          ﹥  弛" << endl;
    cout << "弛   ﹥﹥﹥﹥﹥﹥﹥   ﹥    ﹥    ﹥   ﹥          ﹥  弛" << endl;
    cout << "弛   ﹥               ﹥      ﹥  ﹥   ﹥          ﹥  弛" << endl;
    cout << "弛   ﹥               ﹥        ﹥﹥   ﹥          ﹥  弛" << endl;
    cout << "弛   ﹥               ﹥          ﹥   ﹥        ﹥    弛" << endl;
    cout << "弛   ﹥﹥﹥﹥﹥﹥﹥   ﹥          ﹥   ﹥﹥﹥﹥﹥      弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
    cout << endl;
}

void show_push() {
    cout << endl;
    cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛 ﹥﹥﹥﹥﹥      ﹥        ﹥    ﹥﹥﹥﹥     ﹥        ﹥    ﹥ 弛" << endl;
    cout << "弛 ﹥        ﹥    ﹥        ﹥  ﹥             ﹥        ﹥    ﹥ 弛" << endl;
    cout << "弛 ﹥          ﹥  ﹥        ﹥  ﹥             ﹥        ﹥    ﹥ 弛" << endl;
    cout << "弛 ﹥        ﹥    ﹥        ﹥    ﹥﹥﹥﹥     ﹥﹥﹥﹥﹥﹥    ﹥ 弛" << endl;
    cout << "弛 ﹥﹥﹥﹥﹥      ﹥        ﹥            ﹥   ﹥        ﹥    ﹥ 弛" << endl;
    cout << "弛 ﹥              ﹥        ﹥            ﹥   ﹥        ﹥    ﹥ 弛" << endl;
    cout << "弛 ﹥                ﹥    ﹥              ﹥   ﹥        ﹥       弛" << endl;
    cout << "弛 ﹥                  ﹥﹥      ﹥﹥﹥﹥﹥     ﹥        ﹥    ﹥ 弛" << endl;
    cout << "弛                                                                 弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
    cout << endl;
}

void show_allin() {
    cout << endl;
    cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛            ﹥            ﹥                  ﹥                 弛" << endl;
    cout << "弛          ﹥  ﹥          ﹥                  ﹥                 弛" << endl;
    cout << "弛         ﹥    ﹥         ﹥                  ﹥                 弛" << endl;
    cout << "弛        ﹥      ﹥        ﹥                  ﹥                 弛" << endl;
    cout << "弛       ﹥﹥﹥﹥﹥﹥       ﹥                  ﹥                 弛" << endl;
    cout << "弛      ﹥          ﹥      ﹥                  ﹥                 弛" << endl;
    cout << "弛     ﹥            ﹥     ﹥                  ﹥                 弛" << endl;
    cout << "弛    ﹥              ﹥    ﹥﹥﹥﹥﹥﹥﹥﹥    ﹥﹥﹥﹥﹥﹥﹥﹥   弛" << endl;
    cout << "弛                                                                 弛" << endl;
    cout << "弛        ﹥﹥﹥﹥﹥        ﹥            ﹥      ﹥﹥﹥ ﹥﹥﹥    弛" << endl;
    cout << "弛            ﹥            ﹥﹥          ﹥      ﹥  ﹥ ﹥  ﹥    弛" << endl;
    cout << "弛            ﹥            ﹥  ﹥        ﹥      ﹥  ﹥ ﹥  ﹥    弛" << endl;
    cout << "弛            ﹥            ﹥    ﹥      ﹥      ﹥  ﹥ ﹥  ﹥    弛" << endl;
    cout << "弛            ﹥            ﹥      ﹥    ﹥      ﹥﹥﹥ ﹥﹥﹥    弛" << endl;
    cout << "弛            ﹥            ﹥        ﹥  ﹥                       弛" << endl;
    cout << "弛            ﹥            ﹥          ﹥﹥      ﹥﹥﹥ ﹥﹥﹥    弛" << endl;
    cout << "弛        ﹥﹥﹥﹥﹥        ﹥            ﹥      ﹥﹥﹥ ﹥﹥﹥    弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
    cout << endl;
}

void show_burst() {
    cout << endl;
    cout << endl;
    cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛 ﹥﹥﹥﹥﹥      ﹥        ﹥  ﹥﹥﹥﹥﹥      ﹥﹥﹥﹥     ﹥﹥﹥﹥﹥﹥弛" << endl;
    cout << "弛 ﹥        ﹥    ﹥        ﹥  ﹥        ﹥  ﹥                  ﹥     弛" << endl;
    cout << "弛 ﹥        ﹥    ﹥        ﹥  ﹥        ﹥  ﹥                  ﹥     弛" << endl;
    cout << "弛 ﹥        ﹥    ﹥        ﹥  ﹥﹥﹥﹥﹥      ﹥﹥﹥﹥          ﹥     弛" << endl;
    cout << "弛 ﹥﹥﹥﹥﹥      ﹥        ﹥  ﹥    ﹥                ﹥        ﹥     弛" << endl;
    cout << "弛 ﹥        ﹥    ﹥        ﹥  ﹥     ﹥               ﹥        ﹥     弛" << endl;
    cout << "弛 ﹥        ﹥      ﹥    ﹥    ﹥      ﹥              ﹥        ﹥     弛" << endl;
    cout << "弛 ﹥﹥﹥﹥﹥          ﹥﹥      ﹥       ﹥     ﹥﹥﹥﹥          ﹥     弛" << endl;
    cout << "弛                                                                        弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
    cout << endl;
    cout << endl;
}

void show_chips(int n)
{
    cout << "    ﹥﹥         " << "\t     ﹥﹥         " << endl;
    cout << "  ﹥    ﹥         " << "\t   ﹥    ﹥         " << endl;
    cout << "﹥ 玉↘↘ ﹥         " << "\t ﹥  洶↘  ﹥         " << endl;
    cout << "﹥ 玉↙↙ ﹥   " << " X " << n / 100 << "\t ﹥  ↗↙  ﹥   " << " X " << (n % 100) / 50 << endl;
    cout << "  ﹥    ﹥        " << " \t   ﹥    ﹥         " << endl;
    cout << "    ﹥﹥         " << "\t     ﹥﹥         " << endl;
    cout << endl;

    cout << "渡褐擎 ⑷營 $" << n << "陛 氈蝗棲棻." << endl;
    cout << endl;
}

void show_history() {
    cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛                        RANKING                         弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
    cout << "\tRank" << "\t\tID" << "\t\tCredits" << endl;

}

void rule() {

    cout << "\n\t\t R\tU\tL\tE \t\n" << endl;
    cout << "1. 漆た 旎擋擊 薑и棻.(譆模 旎擋 100, 譆渠 500, 100欽嬪煎 漆た陛棟)" << endl;
    cout << "2. Ы溯檜橫睡攪 蘋萄蒂 и濰噶 給嬴陛賊憮 舒濰擊 嫡朝棻." << endl;
    cout << "3. Ы溯檜橫朝 蘋萄蒂 賅舒 奢偃п撿ж堅 裁楝朝 и濰虜 奢偃и棻." << endl;
    cout << "4. A朝 1傳朝 11煎 餌辨й 熱 氈堅 J, Q, K朝 10戲煎 鏃晝и棻." << endl;
    cout << "5. 裁楝朝 A蒂 11煎 堅薑и棻." << endl;
    cout << "6. 裁楝朝 蘋萄曖 м檜 16檜ж賊 1濰擊 渦 嫡嬴撿ж堅 17檜鼻檜賊 渦檜鼻 嫡雖 彊朝棻." << endl;
    cout << "7. 籀擠 蘋萄 2偃曖 м檜 21檜賊 BlackJack" << endl;
    cout << "8. 裁楝 螃Ъ蘋萄陛 A橾 陽 Insurance?塭堅 爾я擊 菟匙檣雖 韓僥и棻." << endl;
    cout << "   爾я擊 菟 唳辦 漆た 旎擋曖 奩擊 爾я擊 勒棻." << endl;
    cout << "   裁楝�母� 蘋萄 �挫�, 裁楝陛 綰楷燮檣 唳辦 - 爾я旎曖 舒 寡蒂 嫡蝗棲棻. " << endl;
    cout << "   裁楝陛 綰楷燮檜 嬴棍 唳辦 - 爾я旎擊 檠啪 腌棲棻." << endl;
    cout << "   爾я擊 菟雖 寰堅 斜傖 霞чй 唳辦," << endl;
    cout << "   裁楝�母� 蘋萄 �挫�, 裁楝陛 綰楷燮檣 唳辦 - 啪歜謙猿, 裁楝陛 綰楷燮檜 嬴棋 唳辦 - 啪歜霞ч" << endl;
    cout << "9. 蘋萄 璋濠曖 м檜 21縑 陛梱遴 餌塋檜 蝓葬 21蟾婁衛 die " << endl;
    cout << "10. 蝓葬衛 寡た旎擋曖 1寡, BlackJack擎 1.5寡曖 旎擋擊 嫡朝棻." << endl;
    cout << "\n菴煎 給嬴陛溥賊 嬴鼠酈蒂 援腦撮蹂." << endl;

}

void showPlayerCard() {
    cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛                      Player Cards                      弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
    //cout << "  - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
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

    Sleep(250);

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
    //cout << "  - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
}
//裁楝 蘋萄 轎溘
void dealerCard(char* s, int n) {

    /*cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
    cout << "弛                      Dealer Cards                      弛" << endl;
    cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
    cout << "\t\t\t- New Card -" << endl;*/
    char nN[20];

    Sleep(250);

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

    //cout << "  - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << endl;    
    
}