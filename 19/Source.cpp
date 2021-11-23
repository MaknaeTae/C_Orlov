#include <iostream>
using namespace std;

const int QTYQUESTION = 15;
int questionArr[QTYQUESTION]{};
int answerArr[4]{};
int qtyAnswer = 5;
int qtyLive = 5;
string hint = "Da";
bool qtyHint = 1;

int randomArr(int QuestionArr[], int arr) {
	for (int i = 0; i < arr; i++) {
		QuestionArr[i] = 0;
	}
	bool correct = 1;
	for (int i = 0; i < arr; i++) {
		int numberRandom = rand() % arr + 1;
		for (int j = 0; j < arr; j++) {
			if (numberRandom == QuestionArr[j]) {
				correct = 0;
				break;
			}
			else {
				correct = 1;
			}
		}
		if (correct) {
			QuestionArr[i] = numberRandom;
		}
		else {
			i--;
		}		
	}
	return 0;
}

int setting() {
	system("cls");
	cout << "[+] ���������\n\n";
	cout << "[1] ���������� ��������: " << qtyAnswer << "\n";
	cout << "[2] ���������� ������: " << qtyLive << "\n";
	cout << "[3] ������� ��������� : " << hint << "\n";
	cout << "[0] �����\n\n";
	cout << "[+] �������� �����: ";
	int menuSetting;
	cin >> menuSetting;
	switch (menuSetting) {
	case 0:
	{
		return 0;
		break;
	}
	case 1:
	{
		system("cls");
		cout << "[+] ���������� ��������\n\n[1] 5 ��������\n[2] 10 ��������\n[3] 15 ��������\n\n[0] �����\n\n[+] �������� �����: ";
		int menuAnswer;
		cin >> menuAnswer;
		switch (menuAnswer) {
		case 0:
		{
			return 0;
			break;
		}
		case 1:
		{
			qtyAnswer = 5;
			break;
		}
		case 2:
		{
			qtyAnswer = 10;
			break;
		}
		case 3:
		{
			qtyAnswer = 15;
			break;
		}
		default:
		{
			cout << "[!]";
			break;
		}

		}
		system("cls");
		setting();
		break;
	}
	case 2:
	{
		system("cls");
		cout << "[+] ���������� ������\n\n[1] 1 �����\n[2] 2 �����\n[3] 3 �����\n[4] 4 �����\n[5] 5 ������\n\n[0] �����\n\n[+] �������� �����: ";
		int menuLive;
		cin >> menuLive;
		switch (menuLive) {
		case 0:
		{
			return 0;
			break;
		}
		case 1:
		{
			qtyLive = 1;
			break;
		}
		case 2:
		{
			qtyLive = 2;
			break;
		}
		case 3:
		{
			qtyLive = 3;
			break;
		}
		case 4:
		{
			qtyLive = 4;
			break;
		}
		case 5:
		{
			qtyLive = 5;
			break;
		}
		default:
		{
			cout << "[!]";
			break;
		}

		}
		system("cls");
		setting();
		break;
	}
	case 3:
	{
		system("cls");
		cout << "[+] ������� ���������\n\n[1] ��\n[2] ���\n\n[0] �����\n\n[+] �������� �����: ";
		int menuHint;
		cin >> menuHint;
		switch (menuHint) {
		case 0:
		{
			return 0;
			break;
		}
		case 1:
		{
			hint = "��";
			qtyHint = 1;
			break;
		}
		case 2:
		{
			hint = "���";
			qtyHint = 0;
			break;
		}
		default:
		{
			cout << "[!]";
			break;
		}

		}
		system("cls");
		setting();
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

struct Question{
	string question;
	string answer[4];
	string correct;
};

Question questions[QTYQUESTION]{
	{"��� ����� ������?", {"�������", "�������", "�������", "���������"}, "�������"},
	{"��� ����� ��������?", {"����", "�����", "���������", "�������"}, "����"},
	{"� ����� ���������� ����� ������� ��������� ���� ������?", {"� 1 ��", "� 3 ��", "� 5 ��", "� �����"}, "� 3 ��"},
	{"���� ���� ..?", {"�����", "�����", "���", "����"}, "���"},
	{"��� ������� �� ��� ������?", {"����� ���", "������", "�������", "�����"}, "����� ���"},
	{"����� ������� ���� ������, ������� ������������� �� �����������?", {"�����", "�������� ������", "������ ������������ ������", "�����"}, "������ ������������ ������"},
	{"� ����� ������ ��������� �����?", {"�������", "��������", "������", "�����"}, "�����"},
	{"������� �������� ���������� ����� ������� ������������ ����?", {"100", "1000", "10000", "100000"}, "10000"},
	{"������������ ��� ������ ������?", {"�������", "���������", "�������", "������"}, "�������"},
	{"�� ������ �������� ������� �����?", {"�������", "�������", "���������", "���������"}, "�������"},
	{"��� �� ���������� �� ����� ������ ����� ���� �������? ", {"��� ���", "���� ����", "����� �������", "��������� ����"}, "��� ���"},
	{"����� ��� ������ ����� ������ = 1?", {"int", "char", "string", "float"}, "char"},
	{"������� �������� ������ ����� �������� � ���� Stardew Valley", {"5", "7", "9", "8"}, "7"},
	{"(2+2)^2 = ", {"2^2 + 2^2", "2^2 + 4 + 2^2", "2^2 + 8 + 2^2", "2^2 + 16 + 2^2"}, "2^2 + 8 + 2^2"},
	{"��� ����� ����������?", {"������� �������������", "��������� ����������", "��������� �������������", "������� ����������"}, "������� �������������"}
};

int startGame() {
	system("cls");
	int qtyCorrectAnswer = 0;
	randomArr(questionArr, QTYQUESTION);
	for (int i = 0; i < qtyAnswer; i++) {
		randomArr(answerArr, 4);
		cout << "\n\x1b[95m[+] ������ " << i + 1 << "\x1b[0m\n\n";
		cout << questions[questionArr[i]-1].question;
		for (int j = 0; j < 4; j++) {
			if (j % 2 == 0) {
				cout << "\n\n";
			}
			cout << "[" << j+1 << "] " << questions[questionArr[i]-1].answer[answerArr[j]-1] << "\t";
		}
		if (qtyHint) {
			cout << "\n\n[0] ������� 0 ��� ������������� ���������.";
		}
		cout << "\n\n[+] �����: ";
		int answer;
		cin >> answer;
		if (answer == 0) {
			cout << "\n\n\x1b[95m[!] �� ������������ ���������!\x1b[0m";
			int qtyUncorrectAnswer = 0;
			for (int j = 0; j < 4; j++) {
				if (j % 2 == 0) {
					cout << "\n\n";
				}
				if (questions[questionArr[i]-1].answer[answerArr[j]-1] == questions[questionArr[i] - 1].correct) {
					cout << "[" << j + 1 << "] " << questions[questionArr[i] - 1].answer[answerArr[j] - 1] << "\t";
				}
				else if (qtyUncorrectAnswer == 0){
					cout << "[" << j + 1 << "] " << questions[questionArr[i] - 1].answer[answerArr[j] - 1] << "\t";
					qtyUncorrectAnswer++;
				}
				else {
					cout << "\x1b[30m[" << j + 1 << "] " << questions[questionArr[i] - 1].answer[answerArr[j] - 1] << "\x1b[0m\t";
				}
			}
			
		cout << "\n\n[+] �����: ";
		cin >> answer;
		qtyHint = 0;
		}
		if (questions[questionArr[i]-1].answer[answerArr[answer-1]-1] == questions[questionArr[i]-1].correct) {
			cout << "\n\n\x1b[92m����� ����������!\x1b[0m";
			qtyCorrectAnswer += 1;
		}
		else {
			qtyLive -= 1;
			cout << "\n\x1b[91m�� ��������!\x1b[0m";
			cout << "\n ���������� ������: " << qtyLive;
			if (qtyLive == 0) {
				cout << "\n\n[+] � ��� ����������� �����!\n\n";
				system("pause");
				return 0;
			}
		}
		cout << "\n\n";
	}
	system("cls");
	cout << "\t\t[+]��������� �����������!\n\n\t\t[+]���������� ���������� �������: " << qtyCorrectAnswer << "/" << qtyAnswer <<"\n\n\n";
	cout << "[0] �����\n[+] ��� �����: ";
	int exit;
	cin >> exit;
	switch (exit) {
	case 0:
	{
		return 0;
	}
	default:
	{
		cout << "[!]";
	}
	}
	return 0;
}

int main() {
	setlocale(0, "");
	cout << "[+] ���������!\n\n[1] ������ ����\n[2] ���������\n\n[0] �����\n\n[+] �������� �����: ";
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
		startGame();
		break;
	}
	case 2:
	{
		setting();
		system("cls");
		main();
		break;
	}
	default:
	{
		return 0;
		break;
	}
	}
}