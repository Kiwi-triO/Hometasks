#include<iostream>
#include<Windows.h>

using namespace std;

int main() {

	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251); //if setlocale doesn't work

	setlocale(LC_ALL, "ru");
	
	int x;
	cin >> x;
	switch (x) {

	case 1:
		cout << "������";
		break;

	case 2:
		cout << "�����";
		break;

	case 3:
		cout << "�������";
		break;

	case 4:
		cout << "����";
		break;

	default:
		cout << "�������� �����!";
		break;
	}
}