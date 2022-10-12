#include<iostream>
#include<Windows.h>

using namespace std;

int main() {

	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251); //if setlocale doesn't work

	setlocale(LC_ALL, "ru");

	double x, y;
	cin >> x >> y;
	if (abs(y) < 3 && abs(x) < 1 && (x * x + y * y) > 4) {
		cout << "Внутри поля";
	}
	else if ((abs(x) > 1 && abs(y) > 3) || (x * x + y * y) < 4) {
		cout << "Вне поля";
	}
	else {
		cout << "На границе";
	}

	
}