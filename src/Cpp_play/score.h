#ifndef Score
#define Score

using namespace std;

struct userData {
	int num;
	char name[20];
	int score;

};


int readFile();

void inputUserData(char* s, int money);

void userRank();

void Save();

void showScore();

int Load_User(char* name);

void Save_User(int score);

#endif // !Score


