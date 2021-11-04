#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "[+] Программа: Фигуры\n\n[1] Линия\n[2] Квадрат\n[3] Прямоугольник\n[4] Треугольник\n[5] Решётка\n[6] Крестик\n[7] Плюсик\n\n[0] Выход\n\n[+] Выберите фигуру: ";
	int num;
	cin >> num;
	switch (num)
	{
	case 0:
	{
		return 0;
		break;
	}
	case 1:
	{
		system("cls");
		cout << "[+] Фигура: линия";
		cout << "\n\n[1] Вертикальная\n[2] Горизонтальная\n\n[+] Выберите положение линии: ";
		int position;
		cin >> position;
		while (position > 2 || position < 1) {
			cout << "[+] Выберите положение линии: ";
			cin >> position;
		}
		cout << "\n[+] Введите размер линии: ";
		int size; cin >> size;
		while (size < 0) {
			cout << "[+] Введите корректный размер линии: ";
			cin >> size;
		}
		cout << "\n[+] Введите текстуру линии: ";
		char texture; cin >> texture;
		switch (position) {
		case 1:
		{
			system("cls");
			while (size > 0) {
				cout << texture << endl;
				size--;
			}
			break;
		}
		case 2:
		{
			system("cls");
			while (size > 0) {
				cout << texture << " ";
				size--;
			}
			break;
		}
		default:
		{
			system("cls");
			cout << "[!] Вы ввели некорректные данные!";
			break;
		}
		}
		break;
	}
	case 2:
	{
		system("cls");
		cout << "[+] Фигура: квадрат\n\n[1] Полый\n[2] Заполненный\n\n[+] Введите тип квадрата: ";
		int num;
		cin >> num;
		while (num > 2 || num < 1) {
			cout << "[+] Введите тип квадрата: ";
			cin >> num;
		}
		cout << "[+] Введите размер стороны квадрата: ";
		int size, x, y;
		cin >> size;
		x = size;
		y = size;
		while (size < 0) {
			cout << "[+] Введите корректный размер стороны квадрата: ";
			cin >> size;
		}
		cout << "\n[+] Введите текстуру квадрата: ";
		char texture;
		cin >> texture;
		switch (num) {
		case 1: {
			system("cls");
			while (y != 0) {
				x = size;
				while (x != 0) {
					if (y == 1 || y == size) {
						cout << texture << " ";
					}
					else if (x == size || x == 1) {
						cout << texture << " ";
					}
					else {
						cout << "  ";
					}
					x--;
				}
				y--;
				cout << endl;
			}
			break;
		}

		case 2: {
			system("cls");
			while (y != 0)
			{
				x = size;
				while (x != 0)
				{
					cout << texture << " ";
					x--;
				}
				cout << endl;
				y--;
			}

			break;
		}
		default: {
			system("cls");
			cout << "[!] Вы ввели некорректные данные!";
			break;
		}
		}
		break;
	}
	case 3:
	{
		system("cls");
		cout << "[+] Фигура: прямоугольник\n\n[1] Полый\n[2] Заполненный\n\n[+] Введите тип прямоугольника: ";
		int num;
		cin >> num;
		while (num > 2 || num < 1) {
			cout << "[+] Введите тип прямоугольника: ";
			cin >> num;
		}
		cout << "\n[+] Введите высоту прямоугольника: ";
		int hight;
		cin >> hight;
		cout << "\n[+] Введите ширину прямоугольника: ";
		int weight;
		cin >> weight;
		cout << "\n[+] Введите текстуру прямоугольника: ";
		char texture;
		cin >> texture;
		switch (num) {
		case 1: {
			for (int y = 0; y < hight; y++) {
				for (int x = 0; x < weight; x++) {
					if (y == 0 || y == hight - 1 || x == 0 || x == weight - 1) {
						cout << texture << " ";
					}
					else {
						cout << ". ";
					}
				}
				cout << endl;
			}
			break;
		}
		case 2: {
			for (int y = 0; y < hight; y++) {
				for (int x = 0; x < weight; x++) {
					cout << texture << " ";
				}
				cout << endl;
			}
			break;
		}
		default: {
			system("cls");
			cout << "[!] Вы ввели некорректные данные!";
			break;
		}
		}
		break;
	}
	case 4:
	{
		system("cls");
		cout << "[+] Фигура: треугольник\n\n[1] Полый\n[2] Заполненный\n\n[+] Введите тип треугольника: ";
		int num;
		cin >> num;
		while (num > 2 || num < 1) {
			cout << "[+] Введите тип треугольника: ";
			cin >> num;
		}
		cout << "\n[+] Введите высоту треугольника: ";
		int hight;
		cin >> hight;
		int base = (hight * 2) - 1;
		cout << "\n[+] Введите текстуру треугольника: ";
		char texture;
		cin >> texture;
		switch (num) {
		case 1:
		{
			system("cls");
			for (int y = 0; y < hight; y++) {
				for (int x = 0; x < (hight * 2) - 1; x++) {
					if (x == (base / 2) - y || x == (base / 2) + y || y == hight - 1) {
						cout << texture << " ";
					}
					else {
						cout << ". ";
					}
				}
				cout << endl;
			}
			break;
		}
		case 2:
		{
			system("cls");
			for (int y = 0; y < hight; y++) {
				for (int x = 0; x < (hight * 2) - 1; x++) {
					if (x == (base / 2) - y || x == (base / 2) + y || y == hight - 1 || (x >= (base / 2) - y && x <= (base / 2) + y)) {
						cout << texture << " ";
					}
					else {
						cout << ". ";
					}
				}
				cout << endl;
			}
			break;
		}
		default:
		{
			system("cls");
			cout << "[!] Вы ввели некорректные данные!";
			break;
		}
		}
		break;
	}
	case 5:
	{
		system("cls");
		cout << "[+] Фигура: решётка";
		cout << "\n\n[+] Введите размер решётки: ";
		int size;
		cin >> size;
		if (size % 2 != 0) {
			size += 1;
		}
		cout << "\n[+] Введите текстуру решётки: ";
		char texture; cin >> texture;
		for (int y = 0; y < size; y++) {
			for (int x = 0; x < size; x++) {
				if ((x % 2 != 0 || y % 2 == 0) && x != size - 1 && y != 0) {
					cout << texture << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	}
	case 6:
	{
		system("cls");
		cout << "[+] Фигура: крестик\n\n";
		cout << "[+] Введите размер крестика: ";
		int size;
		cin >> size;
		cout << "\n[+] Введите текстуру крестика: ";
		char texture;
		cin >> texture;
		for (int y = 0; y < size; y++) {
			for (int x = 0; x < size; x++) {
				if (x == y || y == size - x - 1) {
					cout << texture << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}

		break;
	}
	case 7:
	{
		system("cls");
		cout << "[+] Фигура: плюсик\n\n";
		cout << "[+] Введите размер плюсика: ";
		int size;
		cin >> size;
		while (size < 0) {
			cout << "[+] Введите размер плюсика: ";
			cin >> size;
		}
		if (size % 2 == 0) {
			size += 1;
		}
		cout << "\n[+] Введите текстуру плюсика: ";
		char texture;
		cin >> texture;
		for (int y = 0; y < size; y++) {
			for (int x = 0; x < size; x++) {
				if (x == size / 2 || y == size / 2) {
					cout << texture << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}
		break;
	}
	default:
	{
		system("cls");
		cout << "[!] Вы ввели некорректные данные!";
		break;
	}
	}
	return 0;
}