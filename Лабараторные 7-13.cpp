#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	system("color 05");
	setlocale(0, "");
	cout << "[+] Программа [Геометрические фигуры]\n\n";
	cout << "[+] Выберите фигуру: \n";
	cout << "[1] Линия\n";
	cout << "[2] Квадрат\n";
	cout << "[3] Прямоугольник\n";
	cout << "[4] Треугольник\n";
	cout << "[5] Kрест \n";
	cout << "[6] Сложение \n";
	cout << "[7] Решётка\n\n";
	cout << "[+] Выберите число:  ";
    int menu;
	cin >> menu;
	switch (menu) {
	case 1:
		system("cls");
		cout << "[+] Фигура: Линия\n\n";
		cout << "[1] Горизонтальная\n";
		cout << "[2] Вертикальная\n\n";
		cout << "[+] Выберити тип: ";
		int line;
		cin >> line;
		switch (line) {
		case 1: {
			system("cls");
			cout << "[+] Тип: Горизонтальный\n\n";
			cout << "[+] Длина линии: ";
			int num;
			cin >> num;
			cout << "[+] Текстура линии: ";
			char tex;
			cin >> tex;
			int a = 0;
			system("cls");
			while (a <= num) {
				cout << tex;
				a++;
			}
			Sleep(4000);
			system("cls");
			main();
			break;
		}
		case 2: {
			system("cls");
			cout << "[+] Тип: Вертикальный\n\n";
			cout << "[+] Длина линии: ";
			int num;
			cin >> num;
			cout << "[+] Текстура линии: ";
			char tex;
			cin >> tex;
			int a = 0;
			system("cls");
			while (a <= num) {
				cout << tex << endl;
				a++;
			}
			Sleep(4000);
			system("cls");
			main();
			break;
		}
			  break;
		default:
			system("cls");
			cout << "~ Данный вариант отсутствует ~";
			Sleep(3000);
			system("cls");
			main();
			break;
		}
	case 2: {
		system("cls");
		cout << "[+] Фигура: Квадрат\n\n";
		cout << "[1] Полный\n";
		cout << "[2] Пустой\n\n";
		cout << "[+] Выберити тип: ";
	}
		  int bob;
		  cin >> bob;
		  switch (bob) {
		  case 1: {
			  system("cls");
			  cout << "[+] Тип: Заполненый\n\n";
			  cout << "[+] Размер квадрата: ";
			  int num;
			  cin >> num;
			  cout << "[+] Текстура линии: ";
			  char tex;
			  cin >> tex;
			  system("cls");
			  for (int x = 0; x < num; x++) {
				  for (int y = 0; y < num; y++) {
					  cout << tex << " ";
				  }
				  cout << "\n";
			  }
			  Sleep(4000);
			  system("cls");
			  main();
			  break;
		  }
		  case 2: {
			  system("cls");
			  cout << "[+] Тип: Пустой\n\n";
			  cout << "[+] Размер квадрата: ";
			  int num;
			  cin >> num;
			  cout << "[+] Текстура линии: ";
			  char tex;
			  cin >> tex;
			  system("cls");
			  for (int y = 0; y < num; y++) {
				  for (int x = 0; x < num; x++) {
					  Sleep(10);
					  if (y == 0 || y == num - 1 || x == 0 || x == num - 1) {
						  cout << tex << " ";
					  }
					  else {
						  cout << " .";
					  }
				  }
				  cout << "\n";
			  }
			  Sleep(4000);
			  system("cls");
			  main();
			  break;
		  }
		  default:
			  system("cls");
			  cout << "~ Данный вариант отсутствует ~";
			  Sleep(3000);
			  system("cls");
			  main();
			  break;
		  }
	case 3: {
		system("cls");
		cout << "[+] Фигура: Прямоугольник\n\n";
		cout << "[1] Полный\n";
		cout << "[2] Пустой\n\n";
		cout << "[+] Выберити тип: ";
	}
		  int rectangle;
		  cin >> rectangle;
		  switch (rectangle) {
		  case 1: {
			  system("cls");
			  cout << "[+] Тип: Заполненый\n\n";
			  cout << "[+] Высота прямоугольника: ";
			  int height;
			  cin >> height;
			  cout << "[+] Ширина прямоугольника: ";
			  int width;
			  cin >> width;
			  cout << "[+] Текстура линии: ";
			  char tex;
			  cin >> tex;
			  system("cls");
			  for (int y = 0; y < height; y++) {
				  for (int x = 0; x < width; x++) {
					  cout << tex << " ";
				  }
				  cout << "\n";
			  }
			  Sleep(4000);
			  system("cls");
			  main();
			  break;
		  }
		  case 2: {
			  system("cls");
			  cout << "[+] Тип: Пустой\n\n";
			  cout << "[+] Высота прямоугольника: ";
			  int height;
			  cin >> height;
			  cout << "[+] Ширина прямоугольника: ";
			  int width;
			  cin >> width;
			  cout << "[+] Текстура линии: ";
			  char tex;
			  cin >> tex;
			  system("cls");
			  for (int y = 0; y < height; y++) {
				  for (int x = 0; x < width; x++) {
					  Sleep(10);
					  if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
						  cout << tex << " ";
					  }
					  else {
						  cout << " .";
					  }
				  }
				  cout << "\n";
			  }
			  Sleep(4000);
			  system("cls");
			  main();
			  break;
		  }
		  default:
			  system("cls");
			  cout << "~ Данный вариант отсутствует ~";
			  Sleep(3000);
			  system("cls");
			  main();
			  break;
		  }
	case 4: {
		system("cls");
		cout << "[+] Фигура: Треугольник\n\n";
		cout << "[1] Полный \n";
		cout << "[2] Пустой \n\n";
		cout << "[+] Выберите тип: ";
	}
		  int treangle;
		  cin >> treangle;
		  switch (treangle) {
		  case 1: {
#include <iostream>
#include <windows.h>
			  using namespace std;

			  int main() {
				  system("color 05");
				  setlocale(0, "");
				  cout << "[+] Программа [Геометрические фигуры]\n\n";
				  cout << "[+] Выберите фигуру: \n";
				  cout << "[1] Линия\n";
				  cout << "[2] Квадрат\n";
				  cout << "[3] Прямоугольник\n";
				  cout << "[4] Треугольник\n";
				  cout << "[5] Kрест \n";
				  cout << "[6] Сложение \n";
				  cout << "[7] Решётка\n\n";
				  cout << "[+] Выберите число:  ";
				  int menu;
				  cin >> menu;
				  switch (menu) {
				  case 1:
					  system("cls");
					  cout << "[+] Фигура: Линия\n\n";
					  cout << "[1] Горизонтальная\n";
					  cout << "[2] Вертикальная\n\n";
					  cout << "[+] Выберити тип: ";
					  int line;
					  cin >> line;
					  switch (line) {
					  case 1: {
						  system("cls");
						  cout << "[+] Тип: Горизонтальный\n\n";
						  cout << "[+] Длина линии: ";
						  int num;
						  cin >> num;
						  cout << "[+] Текстура линии: ";
						  char tex;
						  cin >> tex;
						  int a = 0;
						  system("cls");
						  while (a <= num) {
							  cout << tex;
							  a++;
						  }
						  Sleep(4000);
						  system("cls");
						  main();
						  break;
					  }
					  case 2: {
						  system("cls");
						  cout << "[+] Тип: Вертикальный\n\n";
						  cout << "[+] Длина линии: ";
						  int num;
						  cin >> num;
						  cout << "[+] Текстура линии: ";
						  char tex;
						  cin >> tex;
						  int a = 0;
						  system("cls");
						  while (a <= num) {
							  cout << tex << endl;
							  a++;
						  }
						  Sleep(4000);
						  system("cls");
						  main();
						  break;
					  }
							break;
					  default:
						  system("cls");
						  cout << "~ Данный вариант отсутствует ~";
						  Sleep(3000);
						  system("cls");
						  main();
						  break;
					  }
				  case 2: {
					  system("cls");
					  cout << "[+] Фигура: Квадрат\n\n";
					  cout << "[1] Полный\n";
					  cout << "[2] Пустой\n\n";
					  cout << "[+] Выберити тип: ";
				  }
						int bob;
						cin >> bob;
						switch (bob) {
						case 1: {
							system("cls");
							cout << "[+] Тип: Заполненый\n\n";
							cout << "[+] Размер квадрата: ";
							int num;
							cin >> num;
							cout << "[+] Текстура линии: ";
							char tex;
							cin >> tex;
							system("cls");
							for (int x = 0; x < num; x++) {
								for (int y = 0; y < num; y++) {
									cout << tex << " ";
								}
								cout << "\n";
							}
							Sleep(4000);
							system("cls");
							main();
							break;
						}
						case 2: {
							system("cls");
							cout << "[+] Тип: Пустой\n\n";
							cout << "[+] Размер квадрата: ";
							int num;
							cin >> num;
							cout << "[+] Текстура линии: ";
							char tex;
							cin >> tex;
							system("cls");
							for (int y = 0; y < num; y++) {
								for (int x = 0; x < num; x++) {
									Sleep(10);
									if (y == 0 || y == num - 1 || x == 0 || x == num - 1) {
										cout << tex << " ";
									}
									else {
										cout << " .";
									}
								}
								cout << "\n";
							}
							Sleep(4000);
							system("cls");
							main();
							break;
						}
						default:
							system("cls");
							cout << "~ Данный вариант отсутствует ~";
							Sleep(3000);
							system("cls");
							main();
							break;
						}
				  case 3: {
					  system("cls");
					  cout << "[+] Фигура: Прямоугольник\n\n";
					  cout << "[1] Полный\n";
					  cout << "[2] Пустой\n\n";
					  cout << "[+] Выберити тип: ";
				  }
						int rectangle;
						cin >> rectangle;
						switch (rectangle) {
						case 1: {
							system("cls");
							cout << "[+] Тип: Заполненый\n\n";
							cout << "[+] Высота прямоугольника: ";
							int height;
							cin >> height;
							cout << "[+] Ширина прямоугольника: ";
							int width;
							cin >> width;
							cout << "[+] Текстура линии: ";
							char tex;
							cin >> tex;
							system("cls");
							for (int y = 0; y < height; y++) {
								for (int x = 0; x < width; x++) {
									cout << tex << " ";
								}
								cout << "\n";
							}
							Sleep(4000);
							system("cls");
							main();
							break;
						}
						case 2: {
							system("cls");
							cout << "[+] Тип: Пустой\n\n";
							cout << "[+] Высота прямоугольника: ";
							int height;
							cin >> height;
							cout << "[+] Ширина прямоугольника: ";
							int width;
							cin >> width;
							cout << "[+] Текстура линии: ";
							char tex;
							cin >> tex;
							system("cls");
							for (int y = 0; y < height; y++) {
								for (int x = 0; x < width; x++) {
									Sleep(10);
									if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
										cout << tex << " ";
									}
									else {
										cout << " .";
									}
								}
								cout << "\n";
							}
							Sleep(4000);
							system("cls");
							main();
							break;
						}
						default:
							system("cls");
							cout << "~ Данный вариант отсутствует ~";
							Sleep(3000);
							system("cls");
							main();
							break;
						}
				  case 4: {
					  system("cls");
					  cout << "[+] Фигура: Треугольник\n\n";
					  cout << "[1] Полный \n";
					  cout << "[2] Пустой \n\n";
					  cout << "[+] Выберите тип: ";
				  }
						int treangle;
						cin >> treangle;
						switch (treangle) {
						case 1: {
                                                        system("cls");
							cout << "[+] Тип: Заполненый\n\n";
							cout << "[+] Размер: ";
							int size;
							cin >> size;
							cout << "[+] Текстура линии: ";
							char text;
							cin >> text;
							for (int i = 0; i < size; i++)
							{
								for (int j = 0; j < size - i; j++)
									cout << " ";
								for (int j = size - i; j < size + i; j++)
									cout << text;
								for (int j = size + i + 1; j < size * 2; j++)
									cout << " ";
								cout << "\n";
							}
							Sleep(4000);
							system("cls");
							main();
							break;
						}
						case 2: {
							system("cls");
							cout << "[+] Тип: Пустой\n\n";
							cout << "[+] Размер: ";
							int size;
							cin >> size;
							cout << "[+] Текстура линии: ";
							char text;
							cin >> text;
							system("cls");
							for (int y = 0; y < size; y++) {
								for (int x = 0; x < size; x++) {
									if (x == (size / 2) + y || x == (size / 2) - y || y == size / 2) {
										cout << text << " ";
									}
									else {
										cout << " .";
									}
								}
								cout << "\n";
							}
							Sleep(4000);
							system("cls");
							main();
							break;
						}
						default:
							system("cls");
							cout << "~ Данный вариант отсутствует ~";
							Sleep(3000);
							system("cls");
							main();
							break;
						}
				  case 5: {
					  system("cls");
					  cout << "[+] Фигура: Крест\n\n";
					  cout << "[+] Введите развер: ";
					  int num;
					  cin >> num;
					  cout << "[+] Текстура линии: ";
					  char tex;
					  cin >> tex;
					  system("cls");
					  for (int x = 0; x < num; x++) {
						  for (int y = 0; y < num; y++) {
							  if (x == y || num - x == y + 1) {
								  cout << tex << " ";
							  }
							  else {
								  cout << " ";
							  }
						  }
						  cout << "\n";
					  }
					  Sleep(4000);
					  system("cls");
					  main();
					  break;
				  }
				  case 6: {
					  system("cls");
					  cout << "[+] Фигура: Сложение\n\n";
					  cout << "[+] Введите развер: ";
					  int num;
					  cin >> num;
					  cout << "[+] Текстура линии: ";
					  char tex;
					  cin >> tex;
					  system("cls");
					  for (int y = 0; y < num; y++) {
						  for (int x = 0; x < num; x++) {
							  if (y == num / 2 || x == num / 2) {
								  cout << tex << " ";
							  }
							  else {
								  cout << " .";
							  }
						  }
						  cout << "\n";
					  }
					  Sleep(4000);
					  system("cls");
					  main();
					  break;
				  case 7: {
					  system("cls");
					  cout << "[+] Фигура: Решетка\n\n";
					  cout << "[+] Введите размер: ";
					  int size;
					  cin >> size;
					  cout << "[+] Текстура линии: ";
					  char texture;
					  cin >> texture;
					  system("cls");
					  for (int y = 0; y < size; y++) {
						  for (int x = 0; x < size; x++) {
							  if (y % 2 == 1 || x % 2 == 1) {
								  cout << texture;
							  }
							  else {
								  cout << " ";
							  }
						  }
						  cout << "\n";
					  }
					  Sleep(4000);
					  system("cls");
					  main();
					  break;
				  }
				  }
				  default:
					  system("cls");
					  cout << "~ Данный вариант отсутствует ~";
					  Sleep(2000);
					  system("cls");
					  main();
					  break;
				  }
				  return 0;
			  }


			  Sleep(4000);
			  system("cls");
			  main();
			  break;
		  }
		  case 2: {
			  system("cls");
			  cout << "[+] Тип: Пустой\n\n";
			  cout << "[+] Размер: ";
			  int size;
			  cin >> size;
			  cout << "[+] Текстура линии: ";
			  char tex;
			  cin >> tex;
			  system("cls");
			  for (int y = 0; y < size; y++) {
				  for (int x = 0; x < size; x++) {
					  if (x == (size / 2) + y || x == (size / 2) - y || y == size / 2) {
						  cout << tex << " ";
					  }
					  else {
						  cout << " .";
					  }
				  }
				  cout << "\n";
			  }
			  Sleep(4000);
			  system("cls");
			  main();
			  break;
		  }
		  default:
			  system("cls");
			  cout << "~ Данный вариант отсутствует ~";
			  Sleep(3000);
			  system("cls");
			  main();
			  break;
		  }
	case 5: {
		system("cls");
		cout << "[+] Фигура: Крест\n\n";
		cout << "[+] Введите развер: ";
		int num;
		cin >> num;
		cout << "[+] Текстура линии: ";
		char tex;
		cin >> tex;
		system("cls");
		for (int x = 0; x < num; x++) {
			for (int y = 0; y < num; y++) {
				if (x == y || num - x == y + 1) {
					cout << tex << " ";
				}
				else {
					cout << " ";
				}
			}
			cout << "\n";
		}
		Sleep(4000);
		system("cls");
		main();
		break;
	}
	case 6: {
		system("cls");
		cout << "[+] Фигура: Сложение\n\n";
		cout << "[+] Введите развер: ";
		int num;
		cin >> num;
		cout << "[+] Текстура линии: ";
		char tex;
		cin >> tex;
		system("cls");
		for (int y = 0; y < num; y++) {
			for (int x = 0; x < num; x++) {
				if (y == num / 2 || x == num / 2) {
					cout << tex << " ";
				}
				else {
					cout << " .";
				}
			}
			cout << "\n";
		}
		Sleep(4000);
		system("cls");
		main();
		break;
	case 7: {
		system("cls");
		cout << "[+] Фигура: Решетка\n\n";
		cout << "[+] Введите размер: ";
		int size;
		cin >> size;
		cout << "[+] Текстура линии: ";
		char texture;
		cin >> texture;
		system("cls");
		for (int y = 0; y < size; y++) {
			for (int x = 0; x < size; x++) {
				if (y % 2 == 1 || x % 2 == 1) {
					cout << texture;
				}
				else {
					cout << " ";
				}
			}
			cout << "\n";
		}
		Sleep(4000);
		system("cls");
		main();
		break;
	}
	}
	default:
		system("cls");
		cout << "~ Данный вариант отсутствует ~";
		Sleep(2000);
		system("cls");
		main();
		break;
	}
	return 0;
}

