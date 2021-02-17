#include <stdio.h>
#include <Windows.h>
#include "setminemap.h"

//Sleep(1000);
//system("cls");

typedef struct {
	char Main_menu;
	void(*fptr)();
}MainMenuFunc;

MainMenuFunc funcMainMap[] = {
	{'1', setEasyMap},
	{'2', setNormalMap},
	{'3', setHardMap},
	{'4', setCustomMap},

};

char const* arrMainMenuStr[] = { "1. Easy Mode" ,"2. Normal Mode", "3. Hard Mode", "4. Custom Mode", "5. End Game" };

void showMainMenus() {

	for (int i = 0; i < sizeof(arrMainMenuStr) / sizeof(char*); i++) {
		printf("\t%s\n", *(arrMainMenuStr + i));
	}
}

int excuteMainMenu(char* menu) {

	int result = 1;

	for (int i = 0; i < sizeof(funcMainMap) / sizeof(MainMenuFunc); i++) {
		if (funcMainMap[i].Main_menu == menu[0]) {
			funcMainMap[i].fptr(menu[0]);
			result = 0;
			break;
		}
	}
	return result;
}

int minesweeperMain() {

	char menu[5];

	do {
		showMainMenus();

		printf("\tChoose the menu number : ");
		scanf("%s", menu);

		if (menu[0] == '5') {
			break;
		}

		if (excuteMainMenu(menu) == 1) {
			printf("\tWrong menu number!!! Choose again!!! \n\n");
			Sleep(700);
			system("cls");
		}

	} while (1);

	printf("\tProgram Ending...\n");
	Sleep(700);
}

int main() {
	minesweeperMain();
}
