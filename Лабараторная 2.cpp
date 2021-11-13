#include <iostream>
#include <windows.h>
using namespace std;

int main() {
system("color 0d");
setlocale(0, "");

a:

cout << "[1] Лето\n";
cout << "[2] Осень\n";
cout << "[3] Зима\n";
cout << "[4] Весна\n\n";

cout << "[+] Введите значение: ";

int f;
cin >> f;

if (f==1) {
	system("cls");
	cout << "Иди купаться, сейчас лето!";
	Sleep(2000);
	system("cls");
	goto a;
}
else if (f==2) {
	system("cls");
	cout << "Сегодня дождливо, потому что осень!";
	Sleep(2000);
	system("cls");
	goto a;
}
else if (f==3) {
	system("cls");
	cout << "На улице холодно, бери шарф. Сейчас зима!";
	Sleep(2000);
	system("cls");
	goto a;
}
else if (f==4) {
	system("cls");
	cout << "Теплеет, начинает весна!";
	Sleep(2000);
	system("cls");
	goto a;
}
else {
	system("cls");
	cout << "Такого времени года нет!";
	Sleep(2000);
	system("cls");
	goto a;
}

return 0;

}