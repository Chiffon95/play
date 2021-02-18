#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include "setmine.h"
#include "setminemap.h"
#include "inGame.h"

void setLoadingMap() {
	system("cls");

	char const loading[] = "Loading..... Making Map.......!!!";
	for (int i = 0; i < strlen(loading);i++) {
		printf("%c", loading[i]);
		Sleep(100);
	}
	system("cls");
	printf("Done!");
	Sleep(1000);
	system("cls");
}

void setEasyMap() {
	setLoadingMap();
	printf("Easy Mode\n");
	setMine(EASYAXIS, EASYAXIS, EASYMINENUM);
	inGame(EASYAXIS, EASYAXIS, EASYMINENUM);
}
void setNormalMap() {
	setLoadingMap();
	printf("Normal Mode\n");
	setMine(NOLMALAXIS, NOLMALAXIS,NOLMALMINENUM);
	inGame(NOLMALAXIS, NOLMALAXIS, NOLMALMINENUM);
}
void setHardMap() {
	setLoadingMap();
	printf("Hard Mode\n");
	setMine(HARDAXIS, HARDAXIS,HARDMINENUM);
	inGame(NOLMALAXIS, NOLMALAXIS, NOLMALMINENUM);
}
void setCustomMap() {
	int xAxis, yAxis, mineNum;
	printf("Minesweeper map size (Max size : 40 X 40, Min size : 10 X 10, Mine number : 10 ~ 1000 // '-1' -> Back\n");
	do {
		printf("Enter X axis : ");
		scanf("%d", &xAxis);
		if (xAxis >= 10 && xAxis <= 40) {
			printf("Enter Y axis : ");
			scanf("%d", &yAxis);
			if (yAxis >= 10 && yAxis <= 40) {
				printf("Enter mine number : ");
				scanf("%d", &mineNum);
				if (mineNum >= 10 && mineNum <= (xAxis * yAxis)) {
					break;
				}
				else
					printf("Warning!!! Wrong Mine number!!! Try again!\n");
			}
			else
				printf("Warning!!! Wrong Y axis!!! Try again!\n");
		}
		else
			printf("Warning!!! Wrong X axis!!! Try again!\n");
	} while (1);
	setLoadingMap();
	setMine(xAxis, yAxis, mineNum);
	printf("Custom Mode\n");
}