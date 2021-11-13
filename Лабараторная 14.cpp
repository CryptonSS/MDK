#include <iostream>
#include <windows.h>
#include <conio.h>
#define blue system("color 0B"); 
using namespace std;

void main() {
	blue;
	const int integer = 10; const int floater = 10; const int doubler = 10; const int charter = 10;
	const int longer = 10; const int shorting = 10; const int stringer = 16; const int booler = 10;

	int q_1[integer]{ 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < integer; i++) {
		cout << "[" << i + 1 << "] int = " << q_1[i] << "\n";
	} cout << "\n"; Sleep(1000);
	float q_2[floater]{ 11,12,13,14,15,16,17,18,19,20 };
	for (int i = 0; i < floater; i++) {
		cout << "[" << i + 1 << "] float = " << q_2[i] << "\n";
	} cout << "\n"; Sleep(1000);
	double q_3[doubler]{ 21,22,23,24,25,26,27,28,29,30 };
	for (int i = 0; i < doubler; i++) {
		cout << "[" << i + 1 << "] double = " << q_3[i] << "\n";
	} cout << "\n"; Sleep(1000);
	char q_4[charter]{ 'A','B','C','D','E','F','G','H','I','J' };
	for (int i = 0; i < charter; i++) {
		cout << "[" << i + 1 << "] char = " << q_4[i] << "\n";
	} cout << "\n"; Sleep(1000);
	long q_5[longer]{ 31,32,33,34,35,36,37,38,39,40 };
	for (int i = 0; i < longer; i++) {
		cout << "[" << i + 1 << "] long = " << q_5[i] << "\n";
	} cout << "\n"; Sleep(1000);
	short q_6[shorting]{ 41,42,43,44,45,46,47,48,49,50 };
	for (int i = 0; i < shorting; i++) {
		cout << "[" << i + 1 << "] short = " << q_6[i] << "\n";
	} cout << "\n"; Sleep(1000);
	string q_7[stringer]{ "We","Are","Anonymous","We","Are","Legion","We","Do","Not","Forgive","We","Do","Not","Forget","Expect", "US"};
	for (int i = 0; i < stringer; i++) {
		cout << "[" << i + 1 << "] string = " << q_7[i] << "\n";
	} cout << "\n"; Sleep(1000);
	bool q_8[booler]{ 1,0,1,0,1,0,1,0,1,0 };
	for (int i = 0; i < booler; i++) {
		cout << "[" << i + 1 << "] bool = " << q_8[i] << "\n";
	} cout << "\n"; Sleep(100000); exit(0);
}

