#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

int main(void) {
	char password[9];
	char dictory[64];
	char temp[32];
	int index=0;
	string pwd;
	for (char i = 0; i < 10; i++) { dictory[index++] ='0'+ i; }
	for (char i = 'a'; i <= 'z'; i++) { dictory[index++] = i; }
	for (char i = 'A'; i <= 'Z'; i++) { dictory[index++] = i; }
	index = 0;
	for (int p1 = 0; p1 < 64; p1++) {
		for (int p2 = 0; p2 < 64; p2++) {
			for (int p3 = 0; p3 < 64; p3++) {
				for (int p4 = 0; p4 < 64; p4++) {
					for (int p5 = 0; p5 < 64; p5++) {
						for (int p6 = 0; p6 < 64; p6++) {
							for (int p7 = 0; p7 < 64; p7++) {
								for (int p8 = 0; p8 < 64; p8++) {
									password[0] = dictory[p1];
									password[1] = dictory[p2];
									password[2] = dictory[p3];
									password[3] = dictory[p4];
									password[4] = dictory[p5];
									password[5] = dictory[p6];
									password[6] = dictory[p7];
									password[7] = dictory[p8];
									password[8] = '\0';
									cout <<password << endl;
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;


}
