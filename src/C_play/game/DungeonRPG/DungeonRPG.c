#include <stdio.h>
#define Player_Num 3
FILE* fp_text;
typedef struct player_info {

	char player_name[20];
	int player_health;
	int player_mana;
	int player_stemina;
	char player_ability;

}Player;

int game_1(void) {
	Player Player_info[Player_Num] = { 0 };

	printf("Welcome! What's your name?");
}