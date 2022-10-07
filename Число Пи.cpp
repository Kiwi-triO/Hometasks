#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	double pi1 = M_PI, pi2 = atan(1) * 4, pi3 = 22. / 7., pi4 = 355. / 113., pi5 = 104348. / 33215., pi6 = sqrt(9.869604401), pi7 = 2 * acos(0.);
	
	cout << fixed << setprecision(35);
	cout << pi1 << endl << pi2 << endl << pi3 << endl << pi4 << endl << pi5 << endl << pi6 << endl << pi7 << endl << endl;
 return 0;
}