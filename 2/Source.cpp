#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "������� ����" << endl << "[1]����" << endl << "[2]�����" << endl << "[3]����" << endl << "[4]�����" << endl << "�������� ����� ����: ";
    int n;
    cin >> n;
    if (n == 1)
    {
        system("cls");
        cout << " �� ������� ����";
    }
    else if (n == 2)
    {
        system("cls");
        cout << " �� ������� �����";
    }
    else if (n == 3)
    {
        system("cls");
        cout << " �� ������� ����";
    }
    else if (n == 4)
    {
        system("cls");
        cout << " �� ������� �����";
    }
    else
    {
        system("cls");
        cout << " �� ����� ������������ �����. ���������� �����";
    }
    return 0;
}