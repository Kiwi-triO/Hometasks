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
		cout << "Налево";
		break;

	case 2:
		cout << "Вверх";
		break;

	case 3:
		cout << "Направо";
		break;

	case 4:
		cout << "Вниз";
		break;

	default:
		cout << "Неверное число!";
		break;
	}
}