#include <time.h>
#include <stdlib.h>

char** setMineMap;

void setMine(int row, int col, int mineNum) {
	int minecnt = 0;
	setMineMap = (char**)calloc(row, sizeof(char*));
	for (int i = 0; i < row; i++) {
		setMineMap[i] = (char*)calloc(col, sizeof(char));
	}

	srand(time(NULL));
	for (minecnt;minecnt < mineNum;minecnt++) {
		if (setMineMap[(rand() % row)][(rand() % col)] == '10') {
			minecnt -= 1;
		}
		else
			setMineMap[(rand() % row)][(rand() % col)] = '10';
	}

}