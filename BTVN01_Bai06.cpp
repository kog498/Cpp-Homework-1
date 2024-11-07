#include<iostream>

using namespace std;

int main() {
	int n, tam, soDaoNguoc;

	cout << "Nhap n = "; cin >> n;
	
	tam = n;
	soDaoNguoc = 0;

	while (tam != 0) {
		soDaoNguoc = soDaoNguoc * 10 + tam % 10;
		tam /= 10;
	}

	if (n == soDaoNguoc) {
		cout << n << " la so doi xung\n";
	}
	else {
		cout << n << " khong la so doi xung\n";
	}
	return 0;
}