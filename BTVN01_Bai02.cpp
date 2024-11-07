#include<iostream>

using namespace std;

int main() {
	int n;
	do {
		cout << "Nhap n = "; cin >> n;
		if (n < 1) {
			cout << "n khong hop le\n";
		}
	} while (n < 1);

	for (int i = 1; i <= n; i++) {
		if ((n % i == 0) && (i % 2 != 0)) {
			cout << i << " ";
		}
	}
	return 0;
}