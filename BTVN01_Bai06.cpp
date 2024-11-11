#include<iostream>

using namespace std;

int main() {
	int n, tam, soDaoNguoc;

	do {
		cout << "Nhap n = "; cin >> n;
		if (n < 0) cout << "n khong hop le!\n";
	} while (n < 0);

	tam = n;
	soDaoNguoc = 0;

	while (tam != 0) {
		soDaoNguoc = soDaoNguoc * 10 + tam % 10;
		tam /= 10;
	}

	if (n == soDaoNguoc) {
		cout << n << " la so doi xung!\n";
	}
	else {
		cout << n << " khong phai la so doi xung!\n";
	}
	return 0;
}