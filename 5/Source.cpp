#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "����������\n[1]������� �����\n[2]���������� �����\n\n[3]�����\n";
	int choose1;
	cin >> choose1;
	switch (choose1)
	{
	case 1:
		system("cls");
		cout << "������� �����:\n[1]������\n[2]���\n[3]�����\n[4]������\n[5]���\n[6]����\n[7]���������\n[8]����\n[9]������� ����\n[10]�����\n[11]������\n[12]����\n[13]�����\n[14]������\n[15]������\n\n�������� ����� �����: ";
		int choose2;
		cin >> choose2;
		switch (choose2)
		{
		case 1:
			cout << "�������: ������ -> Hello";
			break;
		case 2:
			cout << "�������: ��� -> World";
			break;
		case 3:
			cout << "�������: ����� -> Word";
			break;
		case 4:
			cout << "�������: ������ -> Road";
			break;
		case 5:
			cout << "�������: ��� -> Ball";
			break;
		case 6:
			cout << "�������: ���� -> foot";
			break;
		case 7:
			cout << "�������: ��������� -> Computer";
			break;
		case 8:
			cout << "�������: ���� -> Table";
			break;
		case 9:
			cout << "�������: ������� ���� -> Desktop";
			break;
		case 10:
			cout << "�������: ����� -> Fire";
			break;
		case 11:
			cout << "�������: ������ -> Sun";
			break;
		case 12:
			cout << "�������: ���� -> Water";
			break;
		case 13:
			cout << "�������: ����� -> Earth";
			break;
		case 14:
			cout << "�������: ������ -> Air";
			break;
		case 15:
			cout << "�������: ������ -> Car";
			break;
		default:
			cout << "��������� �������� � ��������� �������";
			break;
		}
		break;

	case 2:
		system("cls");
		cout << "���������� �����:\n[1]Hello\n[2]World\n[3]Word\n[4]Road\n[5]Ball\n[6]Foot\n[7]Computer\n[8]Table\n[9]Desktop\n[10]Fire\n[11]Sun\n[12]Water\n[13]Earth\n[14]Air\n[15]Car\n�������� ����� �����: ";
		int choose3;
		cin >> choose3;
		switch (choose3)
		{
		case 1:
			cout << "�������: Hello -> ������";
			break;
		case 2:
			cout << "�������: World -> ���";
			break;
		case 3:
			cout << "�������: Word -> �����";
			break;
		case 4:
			cout << "�������: Road -> ������";
			break;
		case 5:
			cout << "�������: Ball -> ���";
			break;
		case 6:
			cout << "�������: Foot -> ����";
			break;
		case 7:
			cout << "�������: Computer -> ���������";
			break;
		case 8:
			cout << "�������: Table -> ����";
			break;
		case 9:
			cout << "�������: Desktop -> ������� ����";
			break;
		case 10:
			cout << "�������: Fire -> �����";
			break;
		case 11:
			cout << "�������: Sun -> ������";
			break;
		case 12:
			cout << "�������: Water -> ����";
			break;
		case 13:
			cout << "�������: Earth -> �����";
			break;
		case 14:
			cout << "�������: Air -> ������";
			break;
		case 15:
			cout << "�������: Car -> ������";
			break;
		default:
			cout << "��������� �������� � ��������� �������";
			break;
		}
		break;

	case 3:
		system("cls");
		break;
	default:
		cout << "��������� �������� � ��������� �������";
		break;
	}
	return 0;
}