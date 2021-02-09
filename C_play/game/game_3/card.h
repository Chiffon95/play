#ifndef Card
#define Card


typedef struct CardData {

    char shape[20];
    int num;

}CardData;


void suffle(CardData* card);

void show_card(CardData* card_stack);

CardData* setCard(CardData* card_stack);

#endif // !Card

