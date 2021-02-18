#include <stdio.h>
#include "setmine.h"
#include "setminemap.h"

void printInGame(int row, int col) {

	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {

			switch (setMineMap[i][j]) {
			case 0 :
			case 1 :
			case 2 :
				break;
			}
			if (setMineMap[i][j] == 0) {
				printf("бр");
			}
			else if (setMineMap[i][j] == 1) {
				printf("бс");
			}
			else
				printf("б┌");
		}
		printf("\n");
	}
}
char detectMine(int row, int col) {
	int rowMin, colMin;
	int rowMax, colMax;

	int mineCnt = 1;
		for (int i = row - 1; i < row + 1;i++) {
			for (int j = col - 1; j < col + 1;j++) {
				if (setMineMap[i][j] == 0)
					mineCnt++;
			}
		}
		return mineCnt;
}

void selectMine(int rowMax, int colMax) {
	int row, col;
	
	printf("Enter X :");
	scanf("%d", &row);
	printf("Enter X :");
	scanf("%d", &col);

	switch (setMineMap[row][col]) {
	case 0:
		for (int i = row - 1; i < row + 1;i++) {
			for (int j = col - 1; j < col + 1;j++) {
				if (setMineMap[i][j] == 0)
				setMineMap[i][j]++;
			}
		}
	case 1:
	case 2:
		break;
	}
}