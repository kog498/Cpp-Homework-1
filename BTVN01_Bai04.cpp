#include<iostream>

using namespace std;

int main() {
	int n, tam;
	double tong;

	do {
		cout << "Nhap n = "; cin >> n;
		if (n < 0) cout << "n khong hop le!\n";
	} while (n < 0);

	tam = n;
	tong = sqrt(n);

	while (tam >= 2) {
		tong = sqrt(n + tong);
		tam--;
	}

	cout << "S = " << tong << endl;
	return 0;
}