#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");
	double x, f, n;
	cin >> x;
	f = (cosh(pow(x, -7))) + (log(2 * x) / log(0.875));
	cout << fixed << setprecision(6);
	cout << f << endl << modf(f, &n) << endl;
	return 0;
}