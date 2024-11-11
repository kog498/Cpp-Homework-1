#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
	int n;
	double s;

	do {
		cout << "Nhap n = "; cin >> n;
		if (n < 0) {
			cout << "n khong hop le!\n";
		}
	} while (n < 0);

	s = sqrt(n);

	for (int i = 2; i <= n; i++) {
		s = sqrt(n + s);
	}

	cout << "S = " << fixed << setprecision(2) << s * 1.0 << endl;
	return 0;
}