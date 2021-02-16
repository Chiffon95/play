#include<iostream>
#include<time.h>
#include "card.h"
#pragma warning(disable:4996)

using namespace std;

char cardname[4][20] = {
      {"spade" }, { "diamond" }, { "heart" }, { "cluber" }
};


CardData* setCard(CardData* card_stack) {
    
    int name_index = 0;
    int num_index = 1;

    for (int i = 0; i < 52; i++) {
        strcpy(card_stack[i].shape, cardname[name_index]);
        card_stack[i].num = num_index++;
        if (i == 12) {


            num_index = 1;
            name_index++;
        }
        else if (i == 25) {
            num_index = 1;
            name_index++;
        }
        else if (i == 38) {
            num_index = 1;
            name_index++;
        }
        else if (i == 52) {
            break;
        }
    }




    return card_stack;


}

void show_card(CardData* card_stack) {
    for (int i = 0; i < 52; i++) {
        cout << card_stack[i].shape << card_stack[i].num << endl;
    }
}

void suffle(CardData* card) {
    srand(time(NULL));
    CardData temp;


    for (int i = 0; i < 52 * 4; i++) {
        int random = rand() % 52;
        temp = card[0];
        card[0] = card[random];
        card[random] = temp;
    }

}

//
//int main() {
//    CardData card[52];
//
//    suffle(setCard(card));
//    show_card(card);
//}