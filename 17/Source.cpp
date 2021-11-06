#include <iostream>
using namespace std;

float calculator(int a, int b, char operation) {
	if (b == 0 && operation == '/') {
		cout << "[!] Вы ввели некорректные данные!";
	}
	switch (operation) {
	case '+':
	{
		return a + b;
	}
	case '-':
	{
		return a - b;
	}
	case '*':
	{
		return a * b;
	}
	case '/':
	{
		return a / b;
	}
	case '@':
	{
		return pow(a, b) * 2;
	}
	case '$':
	{
		return (pow(a, 2) + pow(b, 2)) / 2;
	}
	case '&':
	{
		return pow(a + b, 2);
	}
	case '^':
	{
		pow(a, b);
	}
	default:
	{
		cout << "[!] Вы ввели некорректные данные";
		return 0;
	}
	}

}

int main() {
	setlocale(0, "");

	cout << "[+] Калькулятор\n\n[1] Введите первое число: ";
	int first;
	cin >> first;
	cout << "\n[2] Введите второе число: ";
	int second;
	cin >> second;
	cout << "\n[+] Введите операцию: ";
	char operation;
	cin >> operation;

	int result = calculator(first, second, operation);
	cout << "[+] Результат: " << result;

	return 0;
}