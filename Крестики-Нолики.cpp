#include <iostream>
#include <Windows.h>
#define clear system("cls")
#define freez Sleep(2500)
using namespace std;
int main();
void field_3() {
	cout << "[+] Кто первый ходит?\n\n[1] Крестик\n[2] Нолик\n\n[+] Выбрать: ";
	int nn;
	cin >> nn;
	if (nn == 1) {
		clear;
		const int rows = 5;
		const int cols = 5;
		bool isFlag = true;

		int map1[rows][cols] = {
			{0,0,0,0,0},
			{0,0,0,0,0},
			{0,0,0,0,0},
			{0,0,0,0,0},
			{0,0,0,0,0}
		};
		while (true) {
			for (int x = 0; x < rows; x++) {
				for (int y = 0; y < cols; y++) {
					if (map1[x][y] == 0) {
						cout << "# ";
					}
					else if (map1[x][y] == 1) {
						cout << "\x1b[95mX\x1b[0m ";
					}
					else if (map1[x][y] == 2) {
						cout << "\x1b[94mO\x1b[0m ";
					}
				}
				cout << "\n";
			}
			cout << "\n";
			if (isFlag) {
				cout << "[+] Ходит крестик: ";
			}
			else {
				cout << "[+] Ходит нолик: ";
			}
			int position;
			cin >> position;

			switch (position) {

			case 1:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][0] = 2;
				}
				break;
			case 2:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][1] = 2;
				}
				break;
			case 3:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][2] = 2;
				}
				break;
			case 4:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][3] = 2;
				}
				break;
			case 5:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][4] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][4] = 2;
				}
				break;
			case 6:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][0] = 2;
				}
				break;
			case 7:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][1] = 2;
				}
				break;
			case 8:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][2] = 2;
				}
				break;
			case 9:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][3] = 2;
				}
				break;
			case 10:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][4] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][4] = 2;
				}
				break;
			case 11:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][0] = 2;
				}
				break;
			case 12:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][1] = 2;
				}
				break;
			case 13:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][2] = 2;
				}
				break;
			case 14:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][3] = 2;
				}
				break;
			case 15:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][4] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][4] = 2;
				}
				break;
			case 16:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][0] = 2;
				}
				break;
			case 17:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][1] = 2;
				}
				break;
			case 18:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][2] = 2;
				}
				break;
			case 19:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][3] = 2;
				}
				break;
			case 20:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][4] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][4] = 2;
				}
				break;
			case 21:
				if (isFlag) {
					isFlag = !isFlag;
					map1[4][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[4][0] = 2;
				}
				break;
			case 22:
				if (isFlag) {
					isFlag = !isFlag;
					map1[4][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[4][1] = 2;
				}
				break;
			case 23:
				if (isFlag) {
					isFlag = !isFlag;
					map1[4][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[4][2] = 2;
				}
				break;
			case 24:
				if (isFlag) {
					isFlag = !isFlag;
					map1[4][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[4][3] = 2;
				}
				break;
			case 25:
				if (isFlag) {
					isFlag = !isFlag;
					map1[4][4] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[4][4] = 2;
				}
				break;
			}
			clear;
		}
	}
	else if (nn == 2) {
		clear;
		const int rows = 4;
		const int cols = 4;
		bool isFlag = false;

		int map1[rows][cols] = {
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
		};

		while (true) {
			for (int x = 0; x < rows; x++) {
				for (int y = 0; y < cols; y++) {
					if (map1[x][y] == 0) {
						cout << "# ";
					}
					else if (map1[x][y] == 1) {
						cout << "\x1b[95mX\x1b[0m ";
					}
					else if (map1[x][y] == 2) {
						cout << "\x1b[94mO\x1b[0m ";
					}
				}
				cout << "\n";
			}
			cout << "\n";
			if (isFlag) {
				cout << "[+] Ходит крестик: ";
			}
			else {
				cout << "[+] Ходит нолик: ";
			}
			int position;
			cin >> position;

			switch (position) {

			case 1:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][0] = 2;
				}
				break;
			case 2:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][1] = 2;
				}
				break;
			case 3:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][2] = 2;
				}
				break;
			case 4:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][3] = 2;
				}
				break;
			case 5:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][4] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][4] = 2;
				}
				break;
			case 6:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][0] = 2;
				}
				break;
			case 7:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][1] = 2;
				}
				break;
			case 8:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][2] = 2;
				}
				break;
			case 9:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][3] = 2;
				}
				break;
			case 10:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][4] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][4] = 2;
				}
				break;
			case 11:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][0] = 2;
				}
				break;
			case 12:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][1] = 2;
				}
				break;
			case 13:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][2] = 2;
				}
				break;
			case 14:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][3] = 2;
				}
				break;
			case 15:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][4] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][4] = 2;
				}
				break;
			case 16:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][0] = 2;
				}
				break;
			case 17:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][1] = 2;
				}
				break;
			case 18:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][2] = 2;
				}
				break;
			case 19:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][3] = 2;
				}
				break;
			case 20:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][4] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][4] = 2;
				}
				break;
			case 21:
				if (isFlag) {
					isFlag = !isFlag;
					map1[4][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[4][0] = 2;
				}
				break;
			case 22:
				if (isFlag) {
					isFlag = !isFlag;
					map1[4][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[4][1] = 2;
				}
				break;
			case 23:
				if (isFlag) {
					isFlag = !isFlag;
					map1[4][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[4][2] = 2;
				}
				break;
			case 24:
				if (isFlag) {
					isFlag = !isFlag;
					map1[4][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[4][3] = 2;
				}
				break;
			case 25:
				if (isFlag) {
					isFlag = !isFlag;
					map1[4][4] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[4][4] = 2;
				}
				break;
			}
			clear;
		}
	}
	else {
		cout << "[+] Такого действия нет!";
	}
}
void field_2() {
	cout << "[+] Кто первый ходит?\n\n[1] Крестик\n[2] Нолик\n\n[+] Выбрать: ";
	int nn;
	cin >> nn;
	if (nn == 1) {
		clear;
		const int rows = 4;
		const int cols = 4;
		bool isFlag = true;

		int map1[rows][cols] = {
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
		};

		while (true) {
			for (int x = 0; x < rows; x++) {
				for (int y = 0; y < cols; y++) {
					if (map1[x][y] == 0) {
						cout << "# ";
					}
					else if (map1[x][y] == 1) {
						cout << "\x1b[95mX\x1b[0m ";
					}
					else if (map1[x][y] == 2) {
						cout << "\x1b[94mO\x1b[0m ";
					}
				}
				cout << "\n";
			}
			if (isFlag) {
				cout << "[+] Ходит крестик: ";
			}
			else {
				cout << "[+] Ходит нолик: ";
			}
			int position;
			cin >> position;

			switch (position) {

			case 1:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][0] = 2;
				}
				break;
			case 2:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][1] = 2;
				}
				break;
			case 3:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][2] = 2;
				}
				break;
			case 4:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][3] = 2;
				}
				break;
			case 5:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][0] = 2;
				}
				break;
			case 6:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][1] = 2;
				}
				break;
			case 7:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][2] = 2;
				}
				break;
			case 8:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][3] = 2;
				}
				break;
			case 9:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][0] = 2;
				}
				break;
			case 10:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][1] = 2;
				}
				break;
			case 11:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][2] = 2;
				}
				break;
			case 12:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][3] = 2;
				}
				break;
			case 13:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][0] = 2;
				}
				break;
			case 14:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][1] = 2;
				}
				break;
			case 15:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][2] = 2;
				}
				break;
			case 16:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][3] = 2;
				}
				break;
			}
			clear;
		}
	}
	else if (nn == 2) {
		clear;
		const int rows = 4;
		const int cols = 4;
		bool isFlag = false;

		int map1[rows][cols] = {
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
		};

		while (true) {
			for (int x = 0; x < rows; x++) {
				for (int y = 0; y < cols; y++) {
					if (map1[x][y] == 0) {
						cout << "# ";
					}
					else if (map1[x][y] == 1) {
						cout << "\x1b[106mX\x1b[0m ";
					}
					else if (map1[x][y] == 2) {
						cout << "\x1b[95mO\x1b[0m ";
					}
				}
				cout << "\n";
			}
			if (isFlag) {
				cout << "[+] Ходит крестик: ";
			}
			else {
				cout << "[+] Ходит нолик: ";
			}
			int position;
			cin >> position;

			switch (position) {

			case 1:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][0] = 2;
				}
				break;
			case 2:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][1] = 2;
				}
				break;
			case 3:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][2] = 2;
				}
				break;
			case 4:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][3] = 2;
				}
				break;
			case 5:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][0] = 2;
				}
				break;
			case 6:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][1] = 2;
				}
				break;
			case 7:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][2] = 2;
				}
				break;
			case 8:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][3] = 2;
				}
				break;
			case 9:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][0] = 2;
				}
				break;
			case 10:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][1] = 2;
				}
				break;
			case 11:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][2] = 2;
				}
				break;
			case 12:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][3] = 2;
				}
				break;
			case 13:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][0] = 2;
				}
				break;
			case 14:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][1] = 2;
				}
				break;
			case 15:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][2] = 2;
				}
				break;
			case 16:
				if (isFlag) {
					isFlag = !isFlag;
					map1[3][3] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[3][3] = 2;
				}
				break;
			}
			clear;
		}
	}
	else {
		cout << "[+] Такого действия нет!";
	}
}
void field_1() {
	cout << "[+] Кто первый ходит?\n\n[1] Крестик\n[2] Нолик\n\n[+] Выбрать: ";
	int nn;
	cin >> nn;
	if (nn == 1) {
		clear;
		const int rows = 3;
		const int cols = 3;
		bool isFlag = true;

		int map1[rows][cols] = {
			{0,0,0},
			{0,0,0},
			{0,0,0}
		};

		while (true) {
			for (int x = 0; x < rows; x++) {
				for (int y = 0; y < cols; y++) {
					if (map1[x][y] == 0) {
						cout << "# ";
					}
					else if (map1[x][y] == 1) {
						cout << "\x1b[95mX\x1b[0m ";
					}
					else if (map1[x][y] == 2) {
						cout << "\x1b[94mO\x1b[0m ";
					}
				}
				cout << "\n";
			}
			cout << "\n";
			if (isFlag) {
				cout << "[+] Ходит крестик: ";
			}
			else {
				cout << "[+] Ходит нолик: ";
			}
			int position;
			cin >> position;


			switch (position) {

			case 1:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][0] = 2;
				}
				break;
			case 2:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][1] = 2;
				}
				break;
			case 3:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][2] = 2;
				}
				break;
			case 4:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][0] = 2;
				}
				break;
			case 5:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][1] = 2;
				}
				break;
			case 6:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][2] = 2;
				}
				break;
			case 7:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][0] = 2;
				}
				break;
			case 8:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][1] = 2;
				}
				break;
			case 9:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][2] = 2;
				}
				break;
			}
			clear;

		}
	}
	else if (nn == 2) {
		clear;
		const int rows = 3;
		const int cols = 3;
		bool isFlag = false;

		int map1[rows][cols] = {
			{0,0,0},
			{0,0,0},
			{0,0,0}
		};

		while (true) {
			for (int x = 0; x < rows; x++) {
				for (int y = 0; y < cols; y++) {
					if (map1[x][y] == 0) {
						cout << "# ";
					}
					else if (map1[x][y] == 1) {
						cout << "\x1b[106mX\x1b[0m ";
					}
					else if (map1[x][y] == 2) {
						cout << "\x1b[95mO\x1b[0m ";
					}
				}
				cout << "\n";
			}
			if (isFlag) {
				cout << "[+] Ходит крестик: ";
			}
			else {
				cout << "[+] Ходит нолик: ";
			}
			int position;
			cin >> position;

			switch (position) {

			case 1:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][0] = 2;
				}
				break;
			case 2:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][1] = 2;
				}
				break;
			case 3:
				if (isFlag) {
					isFlag = !isFlag;
					map1[0][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[0][2] = 2;
				}
				break;
			case 4:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][0] = 2;
				}
				break;
			case 5:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][1] = 2;
				}
				break;
			case 6:
				if (isFlag) {
					isFlag = !isFlag;
					map1[1][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[1][2] = 2;
				}
				break;
			case 7:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][0] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][0] = 2;
				}
				break;
			case 8:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][1] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][1] = 2;
				}
				break;
			case 9:
				if (isFlag) {
					isFlag = !isFlag;
					map1[2][2] = 1;
				}
				else {
					isFlag = !isFlag;
					map1[2][2] = 2;
				}
				break;
			}
			clear;

		}
	}
	else {
		cout << "[+] Такого действия нет!";
	}
}
void play() {
	clear;
	cout << "[+] Настройки \n\n";
	cout << "[1] Выбор размера поля \n";
	cout << "[2] Вернуться в меню \n\n";
	cout << "[+] Выбрать: ";
	int settings;
	cin >> settings;
	switch (settings) {
	case 1:
	field:
		clear;
		cout << "[+]Выбор поля\n\n[1] 3x3\n[2] 4x4\n[3] 5x5\n\n[+] Выбрать: ";
		int field;
		cin >> field;
		switch (field) {
		case 1:
			clear;
			field_1();
			break;
		case 2:
			clear;
			field_2();
			break;
		case 3:
			clear;
			field_3();
			break;

		default:
			cout << "[+] Данного действия не предусмотренно";
			freez;
			clear;
			goto field;
			break;
		}
		break;
	case 2:
		clear;
		main();
		break;
	default:
		cout << "[+] Данного действия не предусмотренно";
		freez;
		clear;
		main();
		break;

	}
}
void rules() {
	clear;
	cout << "[+] Правила\n\n";
	cout << "[1] Игроки по очереди ставят на свободные клетки поля знаки(один всегда крестики, второй всегда нолики)\n";
	cout << "[2] Первый, выставивший в ряд (3,4,5) своих фигуры по вертикали, горизонтали, диагонали, выигрывает\n";
	cout << "[3] Не испойльзуйте читы\n\n";
	cout << "[+] ";
	system("pause");
	main();
}
void exit() {
	exit(0);
}
int main() {
	clear;
	srand(time(NULL));
	setlocale(0, "");
	cout << "[+] Игра {Крестики-Нолики} \n\n";
	cout << "[1] Играть\n";
	cout << "[2] Правила\n";
	cout << "[3] Выход\n\n";
	cout << "[+] Выбрать: ";
	int menu;
	cin >> menu;
	switch (menu) {
	case 1: play();
		break;
	case 2: rules();
		break;
	case 3: exit();
		break;
	default: cout << "[+] Данного действия не предусмотренно";
		freez;
		clear;
		main();
		break;
	}
	int _; cin >> _;
	return 0;
}