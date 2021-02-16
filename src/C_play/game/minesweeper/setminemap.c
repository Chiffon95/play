#include <stdio.h>

#define EASYXAXIS 20
#define EASYYAXIS 20
#define NOLMALXAXIS 40
#define NOLMALXAXIS 40
#define HARDXAXIS 80
#define HARDXAXIS 80


int* arr[];

void set();
void setEasyMap(int xAxis, int yAxis) {
	char easyMap[EASYYAXIS][EASYXAXIS];
	printf("Easy Mode\n");
	arr = (int*)malloc(sizeof(int*) * height);
}
void setNormalMap(int xAxis, int yAxis) {
	printf("Normal Mode\n");
}
void setHardMap(int xAxis, int yAxis) {
	printf("Hard Mode\n");
}
void setCustomMap(int xAxis, int yAxis) {
	printf("Custom Mode\n");
}