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
	case 3:
		cout << "Горизонтально";
		break;

	case 2:
	case 4:
		cout << "Вертикально";
		break;

	default:
		cout << "Неверное число!";
		break;
	}
}