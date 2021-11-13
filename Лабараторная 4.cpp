#include <iostream>
#include <windows.h>
using namespace std;

void main() {
	system("color 0D");
	setlocale(0, "");
	int Calendar;
	cout << "[~] Календарь [~]" << endl;
	cout << "\n[1] Январь \n[2] Февраль \n[3] Март \n[4] Апрель \n[5] Май \n[6] Июнь \n[7] Июль \n[8] Август \n[9] Сентябрь \n[10] Октябрь \n[11] Ноябрь \n[12] Декабрь ";
	cout << "\n\n[+] Выбор месяца: ";
	cin >> Calendar;

	switch (Calendar)
	{
	case 1:
		cout << "\n[+] Вы выбрали Январь!" << endl;
		break;
	case 2:
		cout << "\n[+] Вы выбрали Февраль!" << endl;
		break;
	case 3:
		cout << "\n[+] Вы выбрали Март!" << endl;
		break;
	case 4:
		cout << "\n[+] Вы выбрали Апрель!" << endl;
		break;
	case 5:
		cout << "\n[+] Вы выбрали Май!" << endl;
		break;
	case 6:
		cout << "\n[+] Вы выбрали Июнь!" << endl;
		break;
	case 7:
		cout << "\n[+] Вы выбрали Июль!" << endl;
		break;
	case 8:
		cout << "\n[+] Вы выбрали Август!" << endl;
		break;
	case 9:
		cout << "\n[+] Вы выбрали Сентябрь!" << endl;
		break;
	case 10:
		cout << "\n[+] Вы выбрали Октябрь!" << endl;
		break;
	case 11:
		cout << "\n[+] Вы выбрали Ноябрь!" << endl;
		break;
	case 12:
		cout << "\n[+] Вы выбрали Декабрь!" << endl;
		break;

	default:
		system("cls");
		cout << "[~] Этого месяца нету в базе данных [~]\n" << endl;

		break; 
	}
	Sleep(3000);
	system("cls");
		main();
}