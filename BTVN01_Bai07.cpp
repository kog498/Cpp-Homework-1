#include<iostream>
#include<cmath>

using namespace std;

int main() {
	double a, b, c;
	bool flag = true;
	do {
		cout << "Nhap vao 3 canh cua tam giac:\n";
		cin >> a >> b >> c;

		if ((a + b > c) && (b + c > a) && (c + a > b)) {
			flag = false;
		}
		else {
			cout << "Do dai 3 canh tam giac khong hop le!\n";
		}
	} while (flag == true);

	if ((a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) && (a == b || a == c || b == c)) {
		cout << "Day la tam giac vuong can!\n";
	}
	else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
		cout << "Day la tam giac vuong!\n";
	}
	else if (a == b && b == c) {
		cout << "Day la tam giac deu!\n";
	}
	else if (a == b || a == c || b == c) {
		cout << "Day la tam giac can\n";
	}
	else {
		cout << "Day la tam giac nhon\n";
	}
	return 0;
}