#include <iostream>
using namespace std;

int colorCross = 30;
int colorZero = 30;

int getColorCross() {

	system("cls");
	cout << "Цвет крестика: \n\n";
	cout << "[1] Светло-серый\n[2] Серый\n[3] Красный\n[4] Зелёный\n[5] Жёлтый\n[6] Синий\n[7] Фиолетовый\n[8] Голубой\n[9] Белый\n\n[0] Назад\n\n";
	cout << "\x1b[" << colorCross << "m x \x1b[0m";
	cout << "Выберите цвет крестика: ";
	int choise;
	cin >> choise;

	switch (choise) {
		case 1:
		{
			colorCross = 89;
			getColorCross();
			break;
		}
		case 2:
		{
			colorCross = 90;
			getColorCross();
			break;
		}
		case 3:
		{
			colorCross = 91;
			getColorCross();
			break;
		}
		case 4:
		{
			colorCross = 92;
			getColorCross();
			break;
		}
		case 5:
		{
			colorCross = 93;
			getColorCross();
			break;
		}
		case 6:
		{
			colorCross = 94;
			getColorCross();
			break;
		}
		case 7:
		{
			colorCross = 95;
			getColorCross();
			break;
		}
		case 8:
		{
			colorCross = 96;
			getColorCross();
			break;
		}
		case 9:
		{
			colorCross = 97;
			getColorCross();
			break;
		}
		case 0:
		{
			return 0;
			break;
		}
		default:
		{
			cout << "[!] Вы ввели некорректные данные!";
			break;
		}
	}

	return 0;
}

int getColorZero() {

	system("cls");
	cout << "Цвет Нолика: \n\n";
	cout << "[1] Светло-серый\n[2] Серый\n[3] Красный\n[4] Зелёный\n[5] Жёлтый\n[6] Синий\n[7] Фиолетовый\n[8] Голубой\n[9] Белый\n\n[0] Назад\n\n";
	cout << "\x1b[" << colorZero << "m o \x1b[0m";
	cout << "Выберите цвет нолика: ";
	int choise;
	cin >> choise;

	switch (choise) {
	case 1:
	{
		colorZero = 89;
		getColorZero();
		break;
	}
	case 2:
	{
		colorZero = 90;
		getColorZero();
		break;
	}
	case 3:
	{
		colorZero = 91;
		getColorZero();
		break;
	}
	case 4:
	{
		colorZero = 92;
		getColorZero();
		break;
	}
	case 5:
	{
		colorZero = 93;
		getColorZero();
		break;
	}
	case 6:
	{
		colorZero = 94;
		getColorZero();
		break;
	}
	case 7:
	{
		colorZero = 95;
		getColorZero();
		break;
	}
	case 8:
	{
		colorZero = 96;
		getColorZero();
		break;
	}
	case 9:
	{
		colorZero = 97;
		getColorZero();
		break;
	}
	case 0:
	{
		return 0;
		break;
	}
	default:
	{
		cout << "[!] Вы ввели некорректные данные!";
		break;
	}
	}

	return 0;
}

int choiseFirstMove() {

	system("cls");
	return 0;

}

int setting() {
	system("cls");
	cout << "[+] Настройки\n\n";
	cout << "[1] Изменить цвет крестика \x1b[" << colorCross <<"m x \x1b[0m\n";
	cout << "[2] Изменить цвет нолика \x1b[" << colorZero << "m o \x1b[0m\n";
	cout << "[3] Первый ход\n";
	cout << "[4] Размер поля\n";
	cout << "[5] Назад\n\n[+] Выберите пункт : ";
	int menu;
	cin >> menu; 

	switch (menu) {
		case 1:
		{
			getColorCross();
			system("cls");
			setting();
			break;
		}
		case 2:
		{
			getColorZero();
			system("cls");
			setting();
			break;
		}
		case 3:
		{
			choiseFirstMove();
			system("cls");
			setting();
			break;
		}
		case 4:
		{

			break;
		}
		default:
		{

			break;
		}
	}
	return 0;
}

int main() {
	setlocale(0, "");

	cout << "[+] Меню:\n\n[1] Начать игру\n[2] Настройки\n[3] Правила\n[4] Выйти\n\n[+] Выберите пункт меню: ";
	int menu;
	cin >> menu;

	switch (menu) {
		case 1:
		{

			break;
		}
		case 2:
		{
			setting();
			break;
		}
		case 3:
		{

			break;
		}
		case 4:
		{

			break;
		}
		default:
		{

			break;
		}

	}

	return 0;
}