#include<iostream>

using namespace std;

int main() {

	int x, i = 0;
	while (cin >> x) {
		i++;
		if (x >= 0) continue;
		else {
			cout << i;
			break;
		}
	}
}