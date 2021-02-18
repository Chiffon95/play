#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include "setmine.h"

#define EASYXAXIS 20
#define EASYYAXIS 20
#define EASYMINENUM 100
#define NOLMALXAXIS 30
#define NOLMALXAXIS 30
#define NOLMALMINENUM 400
#define HARDXAXIS 60
#define HARDXAXIS 60
#define HARDMINENUM 3000

void setLoadingMap() {
	system("cls");

	char const loading[] = "Loading..... Making Map.......!!!";
	for (int i = 0; i < strlen(loading);i++) {
		printf("%c", loading[i]);
		Sleep(200);
	}
	system("cls");
	printf("Done!");
	Sleep(1000);
	system("cls");
}

void setEasyMap() {
	setLoadingMap();
	char easyMap[EASYYAXIS][EASYXAXIS] = { 0 };
	printf("Easy Mode\n");
	setMine(easyMap, EASYYAXIS, EASYXAXIS, EASYMINENUM);
}
void setNormalMap() {
	setLoadingMap();
	char normalMap[NOLMALXAXIS][NOLMALXAXIS] = { 0 };
	printf("Normal Mode\n");
	setMine(normalMap, NOLMALMINENUM);
}
void setHardMap() {
	setLoadingMap();
	char hardMap[HARDXAXIS][HARDXAXIS] = { 0 };
	printf("Hard Mode\n");
	setMine(hardMap, HARDMINENUM);
}
void setCustomMap() {
	int xAxis, yAxis;
	printf("Minesweeper map size (Max size : 200 X 200, Min size : 10 X 10 // '-1' -> Back\n");
	printf("Enter X axis : ");
	scanf("%d", &xAxis);
	printf("Enter X axis : ");
	scanf("%d", &yAxis);
	setLoadingMap();
	char easyMap[HARDXAXIS][HARDXAXIS];
	printf("Custom Mode\n");
}