#include <iostream>
#include <windows.h>
#define blue system("color 0B")
#define red system("color 04")
#define green system("color 0A")
#define orange system("color 06")
#define clear system("cls")
using namespace std;

void maze_15x15() {
	green;
	clear;
	const int y = 15;
	const int x = 15;
	int maze[y][x] = {
		{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,0,0,0,0,0,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
		{1,1,0,0,0,0,0,0,1,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,0,0,0,0,0,0,0,1},
		{1,1,0,1,1,1,1,0,1,1,1,1,1,0,1},
		{1,1,0,1,1,1,1,0,1,0,0,0,0,0,1},
		{1,1,0,0,0,0,0,0,1,0,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,0,1}
	};
	for (int gg = 0; gg < y; gg++) {
		for (int ss = 0; ss < x; ss++) {
			if (maze[gg][ss]) {
				cout << "# ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}
void maze_20x20() {
	orange;
	clear;
	const int y = 20;
	const int x = 20;
	int maze[y][x] = {
		{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,0,1,0,0,0,0,0,1,1,1,1,1,1},
		{1,1,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1},
		{1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,0,1,1},
		{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1},
		{1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,0,1,1},
		{1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,1,1},
		{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1},
	};
	for (int gg = 0; gg < y; gg++) {
		for (int ss = 0; ss < x; ss++) {
			if (maze[gg][ss]) {
				cout << "# ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}
void maze_30x30() {
	red;
	clear;
	const int y = 30;
	const int x = 30;
	int maze[y][x] = {
		{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
		{1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1},
		{1,1,0,1,1,1,1,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1},
		{1,1,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1},
		{1,1,1,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,0,1,0,1,1,1,1,1},
		{1,1,1,0,1,1,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,0,1,0,1,1,1,1,1},
		{1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,0,1,1,1,1,1},
		{1,1,1,0,1,1,0,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,0,1,1,1,1,1},
		{1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,0,1,1,1,1,1},
		{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1},
		{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1},
		{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
	};
	for (int gg = 0; gg < y; gg++) {
		for (int ss = 0; ss < x; ss++) {
			if (maze[gg][ss]) {
				cout << "# ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}
void main() {
	setlocale(0, "");
	blue;
	const int size_string = 3;
	cout << "[+] Игра: [Лабиринт]\n\n";
	cout << "[+] Размеры карт:\n";
	string size[size_string] = { "[1] 15x15","[2] 20x20","[3] 30x30" };
	for (int i = 0; i < size_string; i++) {
		cout << size[i] << endl;
	}
	cout << "\n[+] Выберите размер карты: ";
	int size_map; cin >> size_map;
	if (size_map == 1) {
		maze_15x15();
	}
	else if (size_map == 2) {
		maze_20x20();
	}
	else if (size_map == 3) {
		maze_30x30();
	}
	else {
		cout << "[+] Данного размера нету!";
		Sleep(2500);
		clear;
		main();
	}
	int _; cin >> _;
}