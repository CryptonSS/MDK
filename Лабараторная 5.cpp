#include <iostream>
#include <Windows.h>

using namespace std;

void RU() {

	setlocale(0, "");
	system("color 0D");

	cout << " <+> Переводчик RU <+>\n\n"
		<< " <1> Дом\n"
		<< " <2> Яблоко\n"
		<< " <3> Мир\n"
		<< " <4> Привет\n"
		<< " <5> Компьютер\n"
		<< " <6> Вечность\n"
		<< " <7> Фантастический\n"
		<< " <8> Спокойствие\n"
		<< " <9> Рассвет\n"
		<< " <10> Чаша\n"
		<< " <11> Золотой\n"
		<< " <12> Лазурный\n"
		<< " <13> Мелодия\n"
		<< " <14> Олеандр\n"
		<< " <15> Розмарин\n\n"
		<< " <+> Выбор слова: ";

	int Ru;
	cin >> Ru;

	switch (Ru) {
	case 1:
		cout << " \n <~> Перевод: Home";
		break;
	case 2:
		cout << " \n <~> Перевод: Apple";
		break;
	case 3:
		cout << " \n <~> Перевод: World";
		break;
	case 4:
		cout << " \n <~> Перевод: Hello";
		break;
	case 5:
		cout << " \n <~> Перевод: Computer";
		break;
	case 6:
		cout << " \n <~> Перевод: Eternity";
		break;
	case 7:
		cout << " \n <~> Перевод: Fantastic";
		break;
	case 8:
		cout << " \n <~> Перевод: Tranquility";
		break;
	case 9:
		cout << " \n <~> Перевод: Dawn";
		break;
	case 10:
		cout << " \n <~> Перевод: Chalice";
		break;
	case 11:
		cout << " \n <~> Перевод: Golden";
		break;
	case 12:
		cout << " \n <~> Перевод: Cerulean";
		break;
	case 13:
		cout << " \n <~> Перевод: Melody";
		break;
	case 14:
		cout << " \n <~> Перевод: Oleander";
		break;
	case 15:
		cout << " \n <~> Перевод: Rosemary";
		break;
	default:
		cout << " \n <~> Перевод: Ошибка";
		break;
	}
	Sleep(3000);
	system("cls");
	RU();
}

void EU() {

	setlocale(0, "");
	system("color 0D");

	cout << " <+> Переводчик EU <+>\n\n"
		<< " <1> Bubble\n"
		<< " <2> Poshlust\n"
		<< " <3> Perspicacious\n"
		<< " <4> Diaphanous\n"
		<< " <5> Duende\n"
		<< " <6> Susurrus\n"
		<< " <7> Sesquipedalian\n"
		<< " <8> Ennui\n"
		<< " <9> Doppelganger\n"
		<< " <10> Iridescent\n"
		<< " <11> Ephemeral\n"
		<< " <12> Arboreal\n"
		<< " <13> Cadence\n"
		<< " <14> Mellifluous\n"
		<< " <15> Quintessence\n"
		<< " \n <+> Выбор слова: ";

	int Eu;
	cin >> Eu;

	switch (Eu) {
	case 1:
		cout << " \n <~> Перевод: Пузырек";
		break;
	case 2:
		cout << " \n <~> Перевод: Пошлость";
		break;
	case 3:
		cout << " \n <~> Перевод: Проницательный";
		break;
	case 4:
		cout << " \n <~> Перевод: Прозрачный";
		break;
	case 5:
		cout << " \n <~> Перевод: Шарм";
		break;
	case 6:
		cout << " \n <~> Перевод: Шелест";
		break;
	case 7:
		cout << " \n <~> Перевод: Многосложный";
		break;
	case 8:
		cout << " \n <~> Перевод: Тоска";
		break;
	case 9:
		cout << " \n <~> Перевод: Двойник";
		break;
	case 10:
		cout << " \n <~> Перевод: Переливающийся";
		break;
	case 11:
		cout << " \n <~> Перевод: Эфемерный";
		break;
	case 12:
		cout << " \n <~> Перевод: Древесный";
		break;
	case 13:
		cout << " \n <~> Перевод: Модуляция";
		break;
	case 14:
		cout << " \n <~> Перевод: Сладкозвучный";
		break;
	case 15:
		cout << " \n <~> Перевод: Квинтэссенция";
		break;
	default:
		cout << " \n <~> Перевод: Ошибка";
		break;
	}
	Sleep(3000);
	system("cls");
	EU();
}

int main() {

	setlocale(0, "");
	system("color 0D");

   cout << " <+> Переводчик <+>\n\n"
		<< " <1> Русские слова\n"
		<< " <2> Английские слова\n"
		<< " <3> Выход\n\n"
		<< " <+> Выбор действия: ";

	int lobby;
	cin >> lobby;

	switch (lobby) {
	case 1: 
		system("cls");
		RU();
		break;
	case 2:
		system("cls");
		EU();
		break;
	case 3:
		system("cls");
		break;
	default:
		cout << " \n <!> Ошибка";
		Sleep(3000);
		system("cls");
		main();
		break;
	}
	return 0;
}