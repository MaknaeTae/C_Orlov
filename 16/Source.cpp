#include <iostream>
using namespace std;

void clearConsole() {
	system("cls");
}

void changeBackgroundColor(int backColor) {
	switch (backColor) {
	case 0:
	{
		system("color 07");
		break;
	}
	case 1:
	{
		system("color 17");
		break;
	}
	case 2:
	{
		system("color 27");
		break;
	}
	case 3:
	{
		system("color 37");
		break;
	}
	case 4:
	{
		system("color 47");
		break;
	}
	case 5:
	{
		system("color 57");
		break;
	}
	case 6:
	{
		system("color 67");
		break;
	}
	case 7:
	{
		system("color 70");
		break;
	}
	case 8:
	{
		system("color 87");
		break;
	}
	case 9:
	{
		system("color 97");
		break;
	}
	case 10:
	{
		system("color A7");
		break;
	}
	case 11:
	{
		system("color B7");
		break;
	}
	case 12:
	{
		system("color C7");
		break;
	}
	case 13:
	{
		system("color D7");
		break;
	}
	case 14:
	{
		system("color E7");
		break;
	}
	case 15:
	{
		system("color F7");
		break;
	}
	default:
	{
		cout << "[!] Такого цвета нет!";
		break;
	}
	}
}

void changeTextColor(int textColor) {
	switch (textColor) {
	case 0:
	{
		system("color 70");
		break;
	}
	case 1:
	{
		system("color 01");
		break;
	}
	case 2:
	{
		system("color 02");
		break;
	}
	case 3:
	{
		system("color 03");
		break;
	}
	case 4:
	{
		system("color 04");
		break;
	}
	case 5:
	{
		system("color 05");
		break;
	}
	case 6:
	{
		system("color 06");
		break;
	}
	case 7:
	{
		system("color 07");
		break;
	}
	case 8:
	{
		system("color 08");
		break;
	}
	case 9:
	{
		system("color 09");
		break;
	}
	case 10:
	{
		system("color 0A");
		break;
	}
	case 11:
	{
		system("color 0B");
		break;
	}
	case 12:
	{
		system("color 0C");
		break;
	}
	case 13:
	{
		system("color 0D");
		break;
	}
	case 14:
	{
		system("color 0E");
		break;
	}
	case 15:
	{
		system("color 0F");
		break;
	}
	default:
	{
		cout << "[!] Такого цвета нет!";
		break;
	}
	}
}

int getSizeInt() {
	return sizeof(int);
}

int getSizeChar() {
	return sizeof(char);
}

int getSizeDouble() {
	return sizeof(double);
}

int getSizeFloat() {
	return sizeof(float);
}

int getSizeBool() {
	return sizeof(bool);
}

void showMessage() {
	system("cls");
	cout << "Привет, я функция :)";
}

void showSquare() {
	system("cls");
	cout << "# # # # #" << endl;
	cout << "# # # # #" << endl;
	cout << "# # # # #" << endl;
	cout << "# # # # #" << endl;
	cout << "# # # # #" << endl;
}


int main() {
	setlocale(0, "");

	cout << "[+]Программа - \"Функции\"\n\n[1] Очистка консоли\n[2] Изменить цвет фона\n[3] Изменить цвет текста\n[4] Вывод размера типа данных INT\n";
	cout << "[5] Вывод размера типа данных CHAR\n[6] Вывод размера типа данных DOUBLE\n[7] Вывод размера типа данных FLOAT\n";
	cout << "[8] Вывод размера типа данных BOOL\n[9] Вывод сообщения\n[10] Вывод квадрата\n\n[+] Выберите функцию: ";
	int num;
	cin >> num;

	switch (num) {
		case 1:
		{
			clearConsole();
			break;
		}
		case 2:
		{
			cout << "\n[+] Цвет фона:\n\n[0] Чёрный\n[1] Синий\n[2] Зелёный\n[3] Голубой\n[4] Красный\n[5] Лиловый\n[6] Жёлтый\n[7] Белый\n[8] Серый\n[9] Светло-синий\n[10] Светло-зелёный\n[11] Светло-голубой\n[12] Светло-красный\n[13] Светло-лиловый\n[14] Светло-жёлтый\n[15] Ярко-белый\n\n";
			cout << "[+] Выберите цвет фона: ";
			int backColor;
			cin >> backColor;
			changeBackgroundColor(backColor);
			break;
		}
		case 3:
		{
			cout << "\n[+] Цвет текста:\n\n[0] Чёрный\n[1] Синий\n[2] Зелёный\n[3] Голубой\n[4] Красный\n[5] Лиловый\n[6] Жёлтый\n[7] Белый\n[8] Серый\n[9] Светло-синий\n[10] Светло-зелёный\n[11] Светло-голубой\n[12] Светло-красный\n[13] Светло-лиловый\n[14] Светло-жёлтый\n[15] Ярко-белый\n\n";
			cout << "[+] Выберите цвет текста: ";
			int textColor;
			cin >> textColor;
			changeTextColor(textColor);
			break;
		}
		case 4:
		{
			system("cls");
			cout << "Размер типа данных INT = " << getSizeInt();
			break;
		}
		case 5:
		{
			system("cls");
			cout << "Размер типа данных CHAR = " << getSizeChar();
			break;
		}
		case 6:
		{
			system("cls");
			cout << "Размер типа данных DOUBLE = " << getSizeDouble();
			break;
		}
		case 7:
		{
			system("cls");
			cout << "Размер типа данных FLOAT = " << getSizeFloat();
			break;
		}
		case 8:
		{
			system("cls");
			cout << "Размер типа данных BOOL = " << getSizeBool();
			break;
		}
		case 9:
		{
			showMessage();
			break;
		}
		case 10:
		{
			showSquare();
			break;
		}
		default:
		{
			return 0;
			break;
		}
	}
	return 0;
}