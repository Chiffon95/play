#include<iostream>
#include<stdio.h>
#include<string>
#include<fstream>
#include "score.h"

#define MAX_SIZE 10



int index=0;
struct userData user[10];

int save_user_count = 0;



int readFile() {
	//int index;

	char str_buffer[256];
	int count_index = 0;

	FILE* fp; //���� ������

	fp = fopen("score.csv","r");

	if (fp == NULL) {
		printf("������ �����ϴ�\n");

		return 1;
		
	}
	else
	{
		
		
		for (int i = 0; i < MAX_SIZE; i++) {
			fscanf(fp, "%d, %[^,], %d", &user[i].num, &user[i].name, &user[i].score);
			user[i].num = i + 1;

			//NULL���� ������ �о �ε��� �� ����
			if (*user[i].name != '\0') {
				
				count_index++;

				
				
			}
			
			//�̿� ���� ������ε� ����
			/*if (strcmp(user[i].name, "") == 0) {
				count_index++;
			}*/

		}

		
		index = count_index;
	}

	
	fclose(fp);

}
 

void inputUserData(char *s, int score) {
	
	bool SAVE = false;

	for (int i = 0; i < index; i++) {

		if (strcmp(user[i].name, s) == 0) {
			
			strcpy(user[i].name, s);
			user[i].score = score;
			SAVE = true;
			
		}
		
	}

	if (SAVE == false) {
		strcpy(user[index].name, s);
		user[index].score = score;

	}
	
	index++;

}

void userRank() {
	
	struct userData buffer;
	for (int i = 0; i < MAX_SIZE; i++) {
		for (int j = i + 1; j < MAX_SIZE; j++) {
			if (user[i].score < user[j].score) {
				buffer = user[i];
				user[i] = user[j];
				user[j] = buffer;
			}
		}

	}

	//�ε��� ��ȣ �缳��
	for (int i = 0; i < MAX_SIZE; i++) {
		user[i].num = i + 1;
	}
}

void Save() {
	
	  FILE* fp = fopen("score.csv", "w");
	   for (int i = 0; i < MAX_SIZE; i++) {
	        fprintf(fp, "%d, %s, %d\n", user[i].num, user[i].name, user[i].score);
	    }
	
	    fclose(fp);
	}



void showScore() {
	for (int i = 0; i < MAX_SIZE; i++) {
		cout << " \t " << user[i].num << "\t       " << user[i].name << " \t\t  " << user[i].score << endl;
	}
	cout << endl;
	cout << "�ڷ� ���ư����� �ƹ�Ű�� ��������." << endl;
}

int Load_User(char* name) {

	for (int i = 0; i < MAX_SIZE; i++) {
		if (strcmp(user[i].name, name) == 0) {
			save_user_count = i;
			return user[i].score;
		}
		
	}

	return -1;
}

void Save_User(int score) {
	
	user[save_user_count].score = score;
	
}