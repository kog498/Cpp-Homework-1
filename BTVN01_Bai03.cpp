#include<iostream>

using namespace std;

int main() {
	int x, tong = 0;

	do {
		cout << "Nhap x = "; cin >> x;
		if (x < 1) cout << "x khong hop le!\n";
	} while (x < 1);

	int i = 1;
	while (i < x) {
		if (x % i == 0) {
			tong += i;
		}
		i++;
	}

	if (x == tong) {
		cout << x << " la so hoan thien\n";
	}
	else {
		cout << x << " khong phai la so hoan thien\n";
	}

	return 0;
}