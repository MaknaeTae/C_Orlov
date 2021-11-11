#include <iostream>
using namespace std;

int colorCross = 30;
int colorZero = 30;
int colorXod = 30;
int colorFild = 30;
string firstMove = "PC";
string sizeFild = "3x3";

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
	colorXod = 37;
	cout << "[1] Played\n[2] PC\n\n[0] Назад\n\n[+] Выберите пункт меню: ";
	int move;
	cin >> move;

	switch (move) {
	case 0:
	{
		return 0;
		break;
	}
	case 1:
	{
		firstMove = "Played";
		break;
	}
	case 2:
	{
		firstMove = "PC";
		break;
	}
	default:
	{
		cout << "[!] Вы ввели некорректные данные!";
		choiseFirstMove();
		break;
	}
	}

	return 0;

}

int choiseSizeFild() {

	system("cls");
	colorFild = 37;
	cout << "[+] Размер поля˙:\n\n[1] 3х3\n[2] 4х4\n[3] 5х5\n\n[0] Назад\n\n[+] Выберите пункт меню: ";
	int size;
	cin >> size;
	switch (size) {
	case 0:
	{
		return 0;
		break;
	}
	case 1:
	{
		sizeFild = "3x3";
		break;
	}
	case 2:
	{
		sizeFild = "4x4";
		break;
	}
	case 3:
	{
		sizeFild = "5x5";
		break;
	}
	default:
	{
		choiseSizeFild();
		break;
	}

	}
}

//
//int choiseFirstMove() {
//
//	system("cls");
//	return 0;
//
//}

int setting() {
	system("cls");
	cout << "[+] Настройки\n\n";
	cout << "[1] Изменить цвет крестика \x1b[" << colorCross <<"m x \x1b[0m\n";
	cout << "[2] Изменить цвет нолика \x1b[" << colorZero << "m o \x1b[0m\n";
	cout << "[3] Первый ход\t\x1b[" << colorXod << "m < " << firstMove << " > \x1b[0m\n";
	cout << "[4] Размер поля\t\x1b[" << colorFild << "m < " << sizeFild << " > \x1b[0m\n\n";
	cout << "[0] Назад\n\n[+] Выберите пункт : ";
	int menu;
	cin >> menu; 

	switch (menu) {
		case 0:
		{
			return 0;
			break;
		}
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
			choiseSizeFild();
			system("cls");
			setting();
			break;
		}
		default:
		{
			setting();
			break;
		}
	}
	return 0;
}

//int valueWin = 0;
//int fildArr[9] = { 1,2,3,4,5,6,7,8,9};
//
//int checkValue() {
//	int i = 0;
//
//	if (fildArr[0] == fildArr[3] == fildArr[6] == 11) {
//		i = 1;
//	}
//	else if (fildArr[0] == fildArr[1] == fildArr[2] == 11) {
//		i = 1;
//	}
//	return i;
//}
//
//void StartGameOne() {
//	system("cls");
//
//
//	if (sizeFild == "3x3") {
//		cout << " " << fildArr[0] << " | " << fildArr[1] << " | " << fildArr[2] << " \n";
//		cout << "---|---|---\n";
//		cout << " " << fildArr[3] << " | " << fildArr[4] << " | " << fildArr[5] << " \n";
//		cout << "---|---|---\n";
//		cout << " " << fildArr[6] << " | " << fildArr[7] << " | " << fildArr[8] << " \n";
//	}
//
//	int movePlayed;
//	if (firstMove == "Played") {
//		cout << "Enter your move: ";
//		cin >> movePlayed;
//		fildArr[movePlayed - 1] = 11;
//	}
//	else {
//		movePlayed = (rand() % 9 + 1);
//		fildArr[movePlayed - 1] = 12;
//	}
//
//	if (firstMove == "Played") {
//		firstMove = "PC";
//	}
//	else {
//		firstMove = "Played";
//	}
//
//	int checkWinPlay = checkValue();
//
//	if (checkWinPlay == 1) {
//		cout << "You win";
//	}
//	else if (checkWinPlay == 2) {
//		cout << "PC win";
//	}
//	else {
//
//	StartGameOne();
//	}
//
//}
//

int startMove() {
	int movePlayed;

	if (firstMove == "PC") {
		movePlayed = (rand() % 9 + 1);
		firstMove = "Played";
	}
	else if (firstMove == "Played") {
		cout << "[+] Enter your move: ";
		cin >> movePlayed;
		firstMove = "PC";
	}

	return 0;
}

int paintFild(int sizeFildArr) {
	
	system("cls");

	if (sizeFildArr == 3) {
		char arrFild[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
		cout << " " << arrFild[0] << " | " << arrFild[1] << " | " << arrFild[2] << " \n";
		cout << "---|---|---\n";
		cout << " " << arrFild[3] << " | " << arrFild[4] << " | " << arrFild[5] << " \n";
		cout << "---|---|---\n";
		cout << " " << arrFild[6] << " | " << arrFild[7] << " | " << arrFild[8] << " \n";
	}
	else if (sizeFildArr == 4) {
		char arrFild[16] = {' ',' ',' ',' ',' ',' ',' ',' ',' ' ,' ' ,' ' ,' ',' ',' ',' ',' '};
		cout << " " << arrFild[0] << " | " << arrFild[1] << " | " << arrFild[2] << " | " << arrFild[3] << " \n";
		cout << "---|---|---|---\n";
		cout << " " << arrFild[4] << " | " << arrFild[5] << " | " << arrFild[6] << " | " << arrFild[7] << " \n";
		cout << "---|---|---|---\n";
		cout << " " << arrFild[8] << " | " << arrFild[9] << " | " << arrFild[10] << " | " << arrFild[11] << " \n";
		cout << "---|---|---|---\n";
		cout << " " << arrFild[12] << " | " << arrFild[13] << " | " << arrFild[14] << " | " << arrFild[15] << " \n";
	}
	else if (sizeFildArr == 5) {
		char arrFild[25] = {' ',' ',' ',' ',' ', ' ',' ',' ',' ',' ', ' ',' ',' ',' ',' ', ' ',' ',' ',' ',' ', ' ',' ',' ',' ',' '};
		cout << " " << arrFild[0] << " | " << arrFild[1] << " | " << arrFild[2] << " | " << arrFild[3] << " | " << arrFild[4] << " \n";
		cout << "---|---|---|---|---\n";
		cout << " " << arrFild[5] << " | " << arrFild[6] << " | " << arrFild[7] << " | " << arrFild[8] << " | " << arrFild[9] << " \n";
		cout << "---|---|---|---|---\n";
		cout << " " << arrFild[10] << " | " << arrFild[11] << " | " << arrFild[12] << " | " << arrFild[13] << " | " << arrFild[14] << " \n";
		cout << "---|---|---|---|---\n";
		cout << " " << arrFild[15] << " | " << arrFild[16] << " | " << arrFild[17] << " | " << arrFild[18] << " | " << arrFild[19] << " \n";
		cout << "---|---|---|---|---\n";
		cout << " " << arrFild[20] << " | " << arrFild[21] << " | " << arrFild[22] << " | " << arrFild[23] << " | " << arrFild[24] << " \n";
	}
	return 0;
}

int startGameOne() {

	if (sizeFild == "3x3") {
		paintFild(3);
	}
	else if (sizeFild == "4x4") {
		paintFild(4);
	}
	else if (sizeFild == "5x5") {
		paintFild(5);
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
			system("cls");
			cout << "[+] Режим игры:\n\n[1] Одиночная\n[2] Два игрока\n\n[0] Назад\n\n[+] Выберите пункт меню: ";
			int modeGame;
			cin >> modeGame;

			switch (modeGame) {
			case 0:
			{
				main();
				break;
			}
			case 1:
			{
				startGameOne();
				break;
			}
			case 2:
			{

				break;
			}
			default:
			{
				cout << "[!] Вы ввели неккоректные данные!";
				break;
			}
			}
			break;
			break;
		}
		case 2:
		{
			setting();
			system("cls");
			main();
			break;
		}
		case 3:
		{

			break;
		}
		case 4:
		{
			return 0;
			break;
		}
		default:
		{

			break;
		}

	}

	return 0;
}