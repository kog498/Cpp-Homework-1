#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int x, n, s = 0;

	cout << "Nhap x = "; cin >> x;
	cout << "Nhap n = "; cin >> n;

	for (int i = 1; i <= n; i++) {
		s = s + pow(x, i);
	}
	cout << "S = " << s;
	return 0;
}