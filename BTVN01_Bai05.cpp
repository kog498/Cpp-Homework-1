#include<iostream>

using namespace std;

int main() {
	int n, tam, dem;

	do {
		cout << "Nhap n = "; cin >> n;
		if (n < 1) cout << "n khong hop le!\n";
	} while (n < 1);

	tam = n;
	dem = 0;

	while (tam != 0) {
		if ((tam % 10) % 2 != 0) {
			dem++;
		}
		tam /= 10;
	}

	cout << n << " co " << dem << " chu so le\n";
	return 0;
}