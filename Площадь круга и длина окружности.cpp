#define _USE_MATH_DEFINES
#include<iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	const double pi = M_PI;
	int R, choice;
	cout << "������� �������� �������: " << endl;
	cin >> R;
	cout << "�������� ��������: 1 - ����� ������� �����, 2 - ����� ����� ����������" << endl;
	cin >> choice;

	switch (choice) {

	case 1:
		cout << "������� ����� ����� " << pi * pow(R, 2);
		break;

	case 2:
		cout << "����� ���������� " << 2 * pi * R;
		break;

	default:
		break;
	}
	return 0;
}