#include <time.h>
#include <stdlib.h>

void setMine(char* mineMap[], int mineMax) {
	int minecnt = 0;
	
	srand(time(NULL));
	for (minecnt;minecnt < mineMax;minecnt++) {
		*mineMap = 1;
	}
}