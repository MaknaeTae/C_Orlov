#include <iostream>
using namespace std;

int colorCross = 30;
int colorZero = 30;
int colorXod = 30;
int colorFild = 30;
int firstMove = 2;
string firstMoveStr = "Player";
string lustMoveStr = "PC";
int sizeField = 3;
string sizeFieldStr = "3 X 3";
int arrField3[9]{};
int arrField4[16]{};
int arrField5[25]{};

int getCorrectChoise(int bEdge, int tEdge, int sItem) {
	while (true) {
		cout << "\n[+] Выберите пункт: ";
		int choise;
		cin >> choise;
		if ((cin.fail() || choise < bEdge || choise > tEdge) && choise != sItem) {
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else {
			return choise;
		}
	}
}

int checkWinner(int arr[], int sizeField) {
	for (int i = 0; i < sizeField * sizeField; i += sizeField) {
		for (int j = 0; j < sizeField; j++) {
			if (j < sizeField - 2 && ((arr[i + j] == 3 && arr[i + (j + 1)] == 3 && arr[i + (j + 2)] == 3) || (arr[i + j] == 3 && arr[(i + sizeField) + (j + 1)] == 3 && arr[(i + (sizeField * 2)) + (j + 2)] == 3))) {
				return 3;
			}
			else if (arr[(i + sizeField) + j] == 3 && arr[(i + (sizeField * 2)) + j] == 3 && arr[i + j] == 3) {
				return 3;
			}
			else if (j < sizeField - 2 && (arr[i + j] == 1 && arr[i + (j + 1)] == 1 && arr[i + (j + 2)] == 1)) {
				return 1;
			}
			else if ((arr[(i + sizeField) + j] == 1 && arr[(i + (sizeField * 2)) + j] == 1 && arr[i + j] == 1) || (arr[i + j] == 1 && arr[(i + sizeField) + (j + 1)] == 1 && arr[(i + (sizeField * 2)) + (j + 2)] == 1)) {
				return 1;
			}
			else if (j > 1 && i <= sizeField * (sizeField - 2)) {
				if (arr[i + j] == 3 && arr[i + sizeField + j - 1] == 3 && arr[i + sizeField * 2 + j - 2] == 3) {
					return 3;
				}
				else if (arr[i + j] == 1 && arr[i + sizeField + j - 1] == 1 && arr[i + sizeField * 2 + j - 2] == 1) {
					return 1;
				}
			}
		}
	}
	bool freeSpace = 0;
	for (int i = 0; i < sizeField * sizeField; i++) {
		if (arr[i] == 0) {
			freeSpace = 1;
			break;
		}
		else if (arr[i] != 0) {
			freeSpace = 0;
		}
	}
	if (freeSpace) {
		return 0;
	}
	else if (!freeSpace) {
		return 2;
	}
}

int getField(int sizeField) {
	switch (sizeField) {
	case 3: {
		system("cls");
		for (int i = 1; i <= sizeField * sizeField; i++) {
			if (arrField3[i - 1] == 1) {
				cout << "  \x1b[" << colorZero << "mo\x1b[0m  ";
			}
			else if (arrField3[i - 1] == 3) {
				cout << "  \x1b[" << colorCross << "mx\x1b[0m  ";
			}
			else {
				cout << "  \x1b[90m" << i << "\x1b[0m  ";
			}
			if (i % sizeField == 0 and i <= sizeField * sizeField - sizeField) {
				cout << "\n-----------------\n";
			}
			else if (i % sizeField != 0) {
				cout << "|";
			}
		}
		break;
	}
	case 4: {
		system("cls");
		for (int i = 1; i <= sizeField * sizeField; i++) {
			if (arrField4[i - 1] == 1) {
				cout << "   \x1b[" << colorZero << "mo\x1b[0m  ";
			}
			else if (arrField4[i - 1] == 3) {
				cout << "   \x1b[" << colorCross << "mx\x1b[0m  ";
			}
			else {
				if (i < 10) {
					cout << "   \x1b[90m" << i << "\x1b[0m  ";
				}
				else if (i >= 10) {
					cout << "  \x1b[90m" << i << "\x1b[0m  ";
				}
			}
			if (i % sizeField == 0 and i <= sizeField * sizeField - sizeField) {
				cout << "\n----------------------------\n";
			}
			else if (i % sizeField != 0) {
				cout << "|";
			}
		}
		break;
	}
	case 5: {
		system("cls");
		for (int i = 1; i <= sizeField * sizeField; i++) {
			if (arrField5[i - 1] == 1) {
				cout << "   \x1b[" << colorZero << "mo\x1b[0m  ";
			}
			else if (arrField5[i - 1] == 3) {
				cout << "   \x1b[" << colorCross << "mx\x1b[0m  ";
			}
			else {
				if (i < 10)
					cout << "   \x1b[90m" << i << "\x1b[0m  ";
				else if (i >= 10)
					cout << "  \x1b[90m" << i << "\x1b[0m  ";
			}
			if (i % sizeField == 0 and i <= sizeField * sizeField - sizeField) {
				cout << "\n-----------------------------------\n";
			}
			else if (i % sizeField != 0) {
				cout << "|";
			}
		}
		break;
	}
	default:
		return 0;
		break;
	}
}

int getGameMode() {
	system("cls");
	cout << "[+] Режим игры:\n\n[1] Одиночная\n[2] Два игрока\n\n[0] Назад\n\n";
	int gameModeChoise = getCorrectChoise(0, 2, 0);
	switch (gameModeChoise)
	{
	case 1:
		return gameModeChoise;
		break;
	case 2:
		return gameModeChoise;
		break;
	case 0:
		return 0;
		break;
	default:
		return 0;
		break;
	}
}

int getPCStep(int arrSize, int arr[], int stepIcon) {
	bool freeSpace = 0;
	while (freeSpace == 0) {
		int step = rand() % arrSize;
		if (arr[step] == 1 or arr[step] == 3) {
			freeSpace = false;
		}
		else if (arr[step] == 0) {
			freeSpace = 1;
			arr[step] = stepIcon;
		}
		else {
			return 0;
		}
	}
	getField(sizeField);
	return 0;
}

int getPlayerStep(int arrSize, int arr[], int stepIcon) {
	bool freeSpace = 0;
	while (freeSpace == 0) {
		int step = getCorrectChoise(1, sizeField * sizeField, 1);
		if (arr[step - 1] == 1 or arr[step - 1] == 3) {
			freeSpace = false;
		}
		else if (arr[step - 1] == 0) {
			freeSpace = 1;
			arr[step - 1] = stepIcon;
		}
		else {
			return 0;
		}
	}
	getField(sizeField);
	return 0;
}

int getEndGameMenu(int winner) {
	switch (winner) {
	case 3: {
		cout << "\n\nПобедил: " << firstMoveStr << "\n\n[1]Начать заново\n[2]В меню\n";
		int endGameChoise = getCorrectChoise(1, 2, 0);
		if (endGameChoise == 1) {
			return 1;
		}
		else if (endGameChoise == 2) {
			return 2;
		}
		break;
	}
	case 1: {
		cout << "\n\nПобедил: " << lustMoveStr << "\n\n[1]Начать заново\n[2]В меню\n";
		int endGameChoise = getCorrectChoise(1, 2, 0);
		if (endGameChoise == 1) {
			return 1;
		}
		else if (endGameChoise == 2) {
			return 2;
		}
		break;
	}
	case 2: {
		cout << "\n\nНичья\n\n[1]Начать заново\n[2]В меню\n";
		int endGameChoise = getCorrectChoise(1, 2, 0);
		if (endGameChoise == 1) {
			return 1;
		}
		else if (endGameChoise == 2) {
			return 2;
		}
		break;
	}
	case 0: {
		return 0;
		break;
	}
	default:
		break;

	}
}

int nullifyArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
	return 0;
}

int a(int gameModeChoise, int arr[]) {
	if (gameModeChoise == 1) {
		getField(sizeField);
		if (firstMove == 1) {
			firstMoveStr = "PC";
			lustMoveStr = "Player";
			int i = 1;
			while (i <= sizeField * sizeField) {
				getPCStep(sizeField * sizeField, arr, 3);
				int winner = checkWinner(arr, sizeField);
				int returnedEndGame = getEndGameMenu(winner);
				if (returnedEndGame == 2) {
					return 0;
				}
				else if (returnedEndGame == 1) {
					nullifyArray(arr, sizeField * sizeField);
					if (a(gameModeChoise, arr) == 0) {
						return 0;
					}
				}
				if (i <= 4) {
					getPlayerStep(sizeField * sizeField, arr, 1);
				}
				winner = checkWinner(arr, sizeField);
				returnedEndGame = getEndGameMenu(winner);
				if (returnedEndGame == 2) {
					return 0;
				}
				else if (returnedEndGame == 1) {
					nullifyArray(arr, sizeField * sizeField);
					if (a(gameModeChoise, arr) == 0) {
						return 0;
					}
				}
			}
		}
		else if (firstMove == 2) {
			firstMoveStr = "Player";
			lustMoveStr = "PC";
			int i = 1;
			while (i <= sizeField * sizeField) {
				getPlayerStep(sizeField * sizeField, arr, 3);
				int winner = checkWinner(arr, sizeField);
				int returnedEndGame = getEndGameMenu(winner);
				if (returnedEndGame == 2) {
					return 0;
				}
				else if (returnedEndGame == 1) {
					nullifyArray(arr, sizeField * sizeField);
					if (a(gameModeChoise, arr) == 0) {
						return 0;
					}
				}
				if (i <= 4) {
					getPCStep(sizeField * sizeField, arr, 1);
				}
				winner = checkWinner(arr, sizeField);
				returnedEndGame = getEndGameMenu(winner);
				if (returnedEndGame == 2) {
					return 0;
				}
				else if (returnedEndGame == 1) {
					nullifyArray(arr, sizeField * sizeField);
					if (a(gameModeChoise, arr) == 0) {
						return 0;
					}
				}
			}
		}
	}
	else if (gameModeChoise == 2) {
		firstMoveStr = "Player1";
		lustMoveStr = "Player2";
		getField(sizeField);
		int i = 1;
		while (i <= sizeField * sizeField) {
			getPlayerStep(sizeField * sizeField, arr, 3);
			int winner = checkWinner(arr, 3);
			int returnedEndGame = getEndGameMenu(winner);
			if (returnedEndGame == 2) {
				return 0;
			}
			else if (returnedEndGame == 1) {
				nullifyArray(arr, sizeField * sizeField);
				if (a(gameModeChoise, arr) == 0) {
					return 0;
				}
			}
			if (i <= 4) {
				getPlayerStep(sizeField * sizeField, arr, 1);
			}
			winner = checkWinner(arr, sizeField);
			returnedEndGame = getEndGameMenu(winner);
			if (returnedEndGame == 2) {
				return 0;
			}
			else if (returnedEndGame == 1) {
				nullifyArray(arr, sizeField * sizeField);
				if (a(gameModeChoise, arr) == 0) {
					return 0;
				}
			}
		}
	}
	else if (gameModeChoise == 0) {
		return 0;
	}
}

int startGame() {
	int gameModeChoise = getGameMode();
	nullifyArray(arrField3, sizeField * sizeField);
	nullifyArray(arrField4, sizeField * sizeField);
	nullifyArray(arrField5, sizeField * sizeField);
	if (sizeField == 3) {
		if (a(gameModeChoise, arrField3) == 1) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else if (sizeField == 4) {
		if (a(gameModeChoise, arrField4) == 1) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else if (sizeField == 5) {
		if (a(gameModeChoise, arrField5) == 1) {
			return 1;
		}
		else {
			return 0;
		}
	}
}

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
	cout << "[1] Played\n[2] PC\n\n[0] Назад\n\n";
	int firstMoveChoise = getCorrectChoise(0, 2, 0);
	if (firstMoveChoise == 1) {
		firstMoveStr = "Player";
		lustMoveStr = "PC";
		firstMove = 2;
		choiseFirstMove();
	}
	else if (firstMoveChoise == 2) {
		firstMoveStr = "PC";
		lustMoveStr = "Player";
		firstMove = 1;
		choiseFirstMove();
		
	}
	else if (firstMoveChoise == 0) {
		return 0;
	}
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
		sizeFieldStr = "3x3";
		sizeField = 3;
		break;
	}
	case 2:
	{
		sizeFieldStr = "4x4";
		sizeField = 4;
		break;
	}
	case 3:
	{
		sizeFieldStr = "5x5";
		sizeField = 5;
		break;
	}
	default:
	{
		choiseSizeFild();
		break;
	}
	}
}

int setting() {
	system("cls");
	cout << "[+] Настройки\n\n";
	cout << "[1] Изменить цвет крестика \x1b[" << colorCross <<"m x \x1b[0m\n";
	cout << "[2] Изменить цвет нолика \x1b[" << colorZero << "m o \x1b[0m\n";
	cout << "[3] Первый ход\t\x1b[" << colorXod << "m < " << firstMoveStr << " > \x1b[0m\n";
	cout << "[4] Размер поля\t\x1b[" << colorFild << "m < " << sizeFieldStr << " > \x1b[0m\n\n";
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

int getRules() {
	system("cls");
	cout << "[+]Правила\n\n";
	cout << "Игроки по очереди ставят на свободные клетки поля 3х3 знаки(один всегда крестики, другой всегда нолики).\n";
	cout << "Первый, выстроивший в ряд 3 своих фигур по вертикали, горизонтали или диагонали, выигрывает.Первый ход делает игрок, ставящий крестики.\n";
	cout << "Обычно по завершении партии выигравшая сторона зачёркивает чертой свои три знака(нолика или крестика), составляющих сплошной ряд.\n\n";
	cout << "[0]Меню\n\n";
	getCorrectChoise(0, 0, 0);
	return 0;
}

int main() {
	setlocale(0, "");
	cout << "[+] Меню:\n\n[1] Начать игру\n[2] Настройки\n[3] Правила\n[4] Выйти\n\n";
	int menu = getCorrectChoise(1, 4, 1);
	switch (menu) {
		case 1:
		{
			startGame();
			system("cls");
			main();
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
			getRules();
			system("cls");
			main();
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