#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	short x, summ, proizv;
	cin >> x;
	summ = x / 10 + x % 10;
	proizv = (x / 10) * (x % 10);
	for (int i = min(summ, proizv); i < max(summ, proizv)+1; i++) {
		cout << i << endl;
	}
}