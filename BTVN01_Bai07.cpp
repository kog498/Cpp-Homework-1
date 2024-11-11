#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int a, b, c;

	do {
		cout << "Nhap 3 canh cua tam giac:\n";
		cin >> a >> b >> c;
		if (a + b > c && b + c > a && c + a > b) {
			break;
		}
		else {
			cout << "Do dai 3 canh tam giac khong hop le!\n";
		}
	} while (true);

	if ((pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2) || pow(c, 2) + pow(a, 2) == pow(b, 2))
		&& (a == b || a == c || b == c)) {
		cout << "Day la tam giac vuong can!\n";
	}
	else if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2) || pow(c, 2) + pow(a, 2) == pow(b, 2)) {
		cout << "Day la tam giac vuong!\n";
	}
	else if (a == b && b == c) {
		cout << "Day la tam giac deu!\n";
	}
	else if (a == b || a == c || b == c) {
		cout << "Day la tam giac can!\n";
	}
	else {
		cout << "Day la tam giac nhon!\n";
	}
	return 0;
}