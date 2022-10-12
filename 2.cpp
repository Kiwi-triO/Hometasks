#include<iostream>
#include<Windows.h>

using namespace std;

int main() {

	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251); //if setlocale doesn't work

	setlocale(LC_ALL, "ru");

	int a, b, c;
	cin >> a >> b >> c;

	if (b * b - 4 * a * c > 0) cout << "Два корня";
	if (b * b - 4 * a * c < 0) cout << "Корней нет";
	if (b * b - 4 * a * c == 0) cout << "Один корень";
}