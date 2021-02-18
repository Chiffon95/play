#include <stdio.h>
#include "setmine.h"
#include "processGame.h"

void inGame(int rowMax, int colMax, int mineNum) {
	selectMine(rowMax, colMax);
	printInGame(rowMax, colMax);
}