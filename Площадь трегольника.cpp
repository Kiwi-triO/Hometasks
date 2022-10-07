#include<iostream>
#include<cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	int a, b, c;
	double p;

	cout << "Введите 3 числа - стороны треугольника: ";
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	cout << "Площадь треугольника равна: " << sqrt((p - a) * (p - b) * (p - c));
 return 0;
}