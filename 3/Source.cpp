#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "[+]\n[-]\n[*]\n[/]\n[%]\n�������� ��������:  ";
	char oper;
	float x, y;
	cin >> oper;

	if (oper == '+')
	{
		cout << "������� ��� ���������: ";
		cin >> x >> y;
		cout << "���������: " << x << " + " << y << " = " << x + y;
	}
	else if (oper == '-')
	{
		cout << "������� ����������� � ����������: ";
		cin >> x >> y;
		cout << "���������: " << x << " - " << y << " = " << x - y;
	}
	else if (oper == '*')
	{
		cout << "������� ��� ���������: ";
		cin >> x >> y;
		cout << "���������: " << x << " * " << y << " = " << x * y;
	}
	else if (oper == '/')
	{
		int a, b;
		cout << "������� ������� � ��������: ";
		cin >> a >> b;
		if (b == 0)
		{
			cout << "�� ���� ������ ������!";
		}
		else
		{
			cout << "���������: " << a << " / " << b << " = " << a / b;
		}
	}
	else if (oper == '%')
	{

		int a, b;
		cout << "������� ������� � ��������: ";
		cin >> a >> b;
		if (b == 0)
		{
			cout << "�� ���� ������ ������!";
		}
		else
		{
			cout << "���������: " << a << " % " << b << " = " << a % b;
		}
	}
	else
	{
		cout << "��������� �������� � ��������� �������";
	}
	return 0;
}