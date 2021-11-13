#include <iostream>
#include <windows.h>
#define white system("color 70")
#define red system("color 04")
#define clear system("cls")
#define freez Sleep(2500)
#define freezer Sleep(4500)
#define ru setlocale(0, "")
using namespace std;
void coutSquare() {
	ru;
	const int you = 5; const int xanthippe = 5;
	int square[you][xanthippe] = {
		{1,1,1,1,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,1,1,1,1},
	};
	for (int intel = 0; intel < you; intel++) {
		for (int core = 0; core < xanthippe; core++) {
			if (square[intel][core]) {
				cout << "# ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}
void coutFunction() {
	ru;
	cout << "[+] Привет, я функция!";
}
void sizeBooler() {
	ru;
	bool evil_geniuses;
	cout << "[+] Тип данных {bool} весит " << sizeof(evil_geniuses) << " байт";
}
void sizeFloater() {
	ru;
	float tornado;
	cout << "[+] Тип данных {float} весит " << sizeof(tornado) << " байта";
}
void sizeDoubler() {
	ru;
	double vertus_pro;
	cout << "[+] Тип данных {double} весит " << sizeof(vertus_pro) << " байт";
}
void sizeCharger() {
	ru;
	char navi;
	cout << "[+] Тип данных {char} весит " << sizeof(navi) << " байт";
}
void sizeInteger() {
	ru;
	int spirit;
	cout << "[+] Тип данных {int} весит " << sizeof(spirit) << " байта";
}
void main() {
	ru;
	cout << "[+] Программа *{Функции}*\n\n" <<
		"[1] Очистить консоль\n" <<
		"[2] Изменить цвет фона\n" <<
		"[3] Изменить цвет шрифта\n" <<
		"[4] Вывод размера типа данных INT\n" <<
		"[5] Вывод размера типа данных CHAR\n" <<
		"[6] Вывод размера типа данных DOUBLE\n" <<
		"[7] Вывод размера типа данных FLOAT\n" <<
		"[8] Вывод размера типа данных BOOL\n" <<
		"[9] Вывод сообщения {Привет я функция}\n" <<
		"[10] Вывод квадрата 5x5\n\n";
	cout << "[+] Выбрать: ";
	int heart; cin >> heart;
	switch (heart) {
	case 1:
		clear;
		freez;
		break;
	case 2:
		white;
		break;
	case 3:
		red;
		break;
	case 4:
		sizeInteger();
		freezer;
		break;
	case 5:
		sizeCharger();
		freezer;
		break;
	case 6:
		sizeDoubler();
		freezer;
		break;
	case 7:
		sizeFloater();
		freezer;
		break;
	case 8:
		sizeBooler();
		freezer;
		break;
	case 9:
		coutFunction();
		freezer;
		break;
	case 10:
		clear;
		cout << " ~ Очень красивые квадраты ~ \n\n\n";
		coutSquare(); cout << "\n"; coutSquare(); cout << "\n"; coutSquare(); cout << "\n"; coutSquare();
		freezer;
		break;
	default:
		cout << "[+] Данного действия не существует";
		freez;
		break;
	}
	clear;
	main();
	int _; cin >> _;
}