#include<iostream>
#include<cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	int a, b, c;
	double p;

	cout << "������� 3 ����� - ������� ������������: ";
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	cout << "������� ������������ �����: " << sqrt((p - a) * (p - b) * (p - c));
 return 0;
}