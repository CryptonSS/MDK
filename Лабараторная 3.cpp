#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main() {
	system("color 0d");
	setlocale(0, "");

	cout << "[+] Введите первое значение: ";
	float a;
	cin >> a;
	cout << "[+] Введите второе значение: ";
	float b;
	cin >> b;
	cout << "[+] Выбирите действие: ";
	char c;
	cin >> c;

	if (c == '+') {
		cout << "\n[-] Ответ: " << a + b;
		Sleep(4000);
		system("cls");
		main();
	}
	else if (c == '-') {
		cout << "\n[-] Ответ: " << a - b;
		Sleep(4000);
		system("cls");
		main();
	}
	else if (c == '*') {
		cout << "\n[-] Ответ: " << a * b;
		Sleep(4000);
		system("cls");
		main();
	}
	else if (c == '/') {
		if (b != 0) {
			cout << "\n[-] Ответ: " << a / b;
			Sleep(4000);
			system("cls");
			main();
		}
		else (b == 0); {
			system("cls");
			cout << "\n[~] На ноль делить нельзя! [~]\n";
			Sleep(2000);
			system("cls");
			main();
		}
	}
	else if (c == '%') {
		if (b != 0) {
			cout << "\n[-] Ответ: " << (int)a % (int)b;
			Sleep(4000);
			system("cls");
			main();
		}
		else (b == 0); {
			system("cls");
			cout << "\n[~] На ноль делить нельзя! [~]\n";
			Sleep(2000);
			system("cls");
			main();
		}
	}
	else {
		system("cls");
		cout << "\n[~] Такого действия нет! [~]\n";
		Sleep(2000);
		system("cls");
		main();

	}
	return 0;
}
