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
	cout << "[+] Настройки\n\n";
	cout << "[1] Количество вопросов: " << qtyAnswer << "\n";
	cout << "[2] Количество жизней: " << qtyLive << "\n";
	cout << "[3] Наличие подсказки : " << hint << "\n";
	cout << "[0] Назад\n\n";
	cout << "[+] Выберите пункт: ";
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
		cout << "[+] Количество вопросов\n\n[1] 5 вопросов\n[2] 10 вопросов\n[3] 15 вопросов\n\n[0] Назад\n\n[+] Выберите пункт: ";
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
		cout << "[+] Количество жизней\n\n[1] 1 жизнь\n[2] 2 жизни\n[3] 3 жизни\n[4] 4 жизни\n[5] 5 жизней\n\n[0] Назад\n\n[+] Выберите пункт: ";
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
		cout << "[+] Наличие подсказки\n\n[1] Да\n[2] Нет\n\n[0] Назад\n\n[+] Выберите пункт: ";
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
			hint = "Да";
			qtyHint = 1;
			break;
		}
		case 2:
		{
			hint = "Нет";
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
	{"Как зовут Орлова?", {"Дмитрий", "Алексей", "Николай", "Александр"}, "Алексей"},
	{"Как зовут старосту?", {"Катя", "Павел", "Владислав", "Дмитрий"}, "Катя"},
	{"К какой нормальной форме следует приводить базу данных?", {"К 1 НФ", "К 3 НФ", "К 5 НФ", "К любой"}, "К 3 НФ"},
	{"Чопа гоус ..?", {"дрэнь", "гэньг", "бен", "чопа"}, "бен"},
	{"Кто обитает на дне океана?", {"Губка Боб", "Патрик", "Камбала", "Морти"}, "Губка Боб"},
	{"Какая игрушка была первой, которую рекламировали по телевидению?", {"Барби", "Ракетный Гонщик", "Мистер Картофельная Голова", "Братц"}, "Мистер Картофельная Голова"},
	{"В какой стране находится Прага?", {"Испания", "Бразилия", "Англия", "Чехия"}, "Чехия"},
	{"Сколько вкусовых рецепторов имеет средний человеческий язык?", {"100", "1000", "10000", "100000"}, "10000"},
	{"Национальный вид спорта Канады?", {"Боулинг", "Баскетбол", "Лакросс", "Футбол"}, "Лакросс"},
	{"Из какого вещества состоят ногти?", {"Кератин", "Меланин", "Эпидермис", "Серотонин"}, "Кератин"},
	{"Кто из художников за жизнь продал всего одну картину? ", {"Ван Гог", "Клод Моне", "Пабло Пикассо", "Сальвадор Дали"}, "Ван Гог"},
	{"Какой тип данных имеет размер = 1?", {"int", "char", "string", "float"}, "char"},
	{"Сколько звездных капель можно получить в игре Stardew Valley", {"5", "7", "9", "8"}, "7"},
	{"(2+2)^2 = ", {"2^2 + 2^2", "2^2 + 4 + 2^2", "2^2 + 8 + 2^2", "2^2 + 16 + 2^2"}, "2^2 + 8 + 2^2"},
	{"Как зовут Николаенко?", {"Николай Александрович", "Александр Николаевич", "Александр Александрович", "Николай Николаевич"}, "Николай Александрович"}
};

int startGame() {
	system("cls");
	int qtyCorrectAnswer = 0;
	randomArr(questionArr, QTYQUESTION);
	for (int i = 0; i < qtyAnswer; i++) {
		randomArr(answerArr, 4);
		cout << "\n\x1b[95m[+] Вопрос " << i + 1 << "\x1b[0m\n\n";
		cout << questions[questionArr[i]-1].question;
		for (int j = 0; j < 4; j++) {
			if (j % 2 == 0) {
				cout << "\n\n";
			}
			cout << "[" << j+1 << "] " << questions[questionArr[i]-1].answer[answerArr[j]-1] << "\t";
		}
		if (qtyHint) {
			cout << "\n\n[0] Нажмите 0 для использования подсказки.";
		}
		cout << "\n\n[+] Ответ: ";
		int answer;
		cin >> answer;
		if (answer == 0) {
			cout << "\n\n\x1b[95m[!] Вы использовали подсказку!\x1b[0m";
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
			
		cout << "\n\n[+] Ответ: ";
		cin >> answer;
		qtyHint = 0;
		}
		if (questions[questionArr[i]-1].answer[answerArr[answer-1]-1] == questions[questionArr[i]-1].correct) {
			cout << "\n\n\x1b[92mОтвет правильный!\x1b[0m";
			qtyCorrectAnswer += 1;
		}
		else {
			qtyLive -= 1;
			cout << "\n\x1b[91mВы ошиблись!\x1b[0m";
			cout << "\n Количество жизней: " << qtyLive;
			if (qtyLive == 0) {
				cout << "\n\n[+] У вас законсились жизни!\n\n";
				system("pause");
				return 0;
			}
		}
		cout << "\n\n";
	}
	system("cls");
	cout << "\t\t[+]Викторина закончилась!\n\n\t\t[+]Количество правильных ответов: " << qtyCorrectAnswer << "/" << qtyAnswer <<"\n\n\n";
	cout << "[0] Выйти\n[+] Ваш выбор: ";
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
	cout << "[+] Викторина!\n\n[1] Начать игру\n[2] Настройки\n\n[0] Выход\n\n[+] Выберите пункт: ";
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