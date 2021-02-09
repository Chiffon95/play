#ifndef Card
#define Card
using namespace std;

typedef struct CardData {

    char shape[20];
    int num;

}CardData;

CardData* setCard(CardData* card_stack);

void suffle(CardData* card);

void show_card(CardData* card_stack);



#endif // !Card

