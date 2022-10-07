#define _USE_MATH_DEFINES
#include<iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	const double pi = M_PI;
	int R, choice;
	cout << "Введите значение радиуса: " << endl;
	cin >> R;
	cout << "Выберите действие: 1 - найти площадь круга, 2 - найти длину окружности" << endl;
	cin >> choice;

	switch (choice) {

	case 1:
		cout << "Площадь круга равна " << pi * pow(R, 2);
		break;

	case 2:
		cout << "Длина окружности " << 2 * pi * R;
		break;

	default:
		break;
	}
	return 0;
}