#include<iostream>

using namespace std;

int main() {
	int n;

	cout << "Nhap n = "; cin >> n;

	for (int i = 0; i * 1000 <= n; i++) {
		for (int j = 0; j * 2000 <= n; j++) {
			for (int k = 0; k * 5000 <= n; k++) {
				if (i * 1000 + j * 2000 + k * 5000 == n) {
					cout << i << " x 1000 + " << j << " x 2000 + " << k << " x 5000 = " << n << endl;
				}
			}
		}
	}
	return 0;
}