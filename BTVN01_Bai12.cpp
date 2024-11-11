#include<iostream>

using namespace std;

int main() {
	int h;
	cout << "Nhap h = "; cin >> h;
	
	// Cau a
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1 || j == i || i == h) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;

	// Cau b
	for (int i = h; i >= 1; i--) {
		for (int j = 1; j <= h; j++) {
			if (j >= i) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;

	// Cau c
	for (int i = h; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	// Cau d
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= h; j++) {
			if (j >= i) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;

	// Cau e
	for (int i = h; i >= 1; i--) {
		for (int j = 1; j <= h; j++) {
			if (j < i) {
				cout << " ";
			}
			else {
				cout << "* ";
			}
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}