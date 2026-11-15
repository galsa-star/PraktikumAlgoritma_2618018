#include <iostream>
using namespace std;

int main() {
	int i;
	int ukuran;
	
	cout << "2618018 || Galuh Fara Sahita" << endl;
	cout << "        TUGAS BAB 7        " << endl;
	cout << "============================" << endl;
	cout << "1. Membuat Kotak Angka Diagonal" << endl;
	cout << "   Masukkan ukuran kotak: "; cin >> ukuran;
	for (i = 1; i <= ukuran; i++) {
		for (int j = 1; j <= ukuran; j++) {
			if (i == j) {
				cout << "1 ";
			}
			else {
				cout << "0 ";
			}
		}
		cout << endl;
	}
	
	cout << "\n2. Membuat Segitiga Terbalik Genap" << endl;
	cout << "   Masukkan ukuran segitiga: "; cin >> ukuran;
	
	int m = ukuran * 2;
	while (m >= 1) {
		int n = 2;
		while (n <= m) {
			cout << n << " ";
			n += 2;
		}
		cout << endl;
		m -= 2;
	}
	
	cout << "\n3. Membuat Segitiga Siku-siku Huruf" << endl;
	cout << "   Masukkan ukuran segitiga siku-siku: "; cin >> ukuran;
	
	int a = 1;
	do {
		int b = 1;
		do {
			cout << char ('A' + b - 1) << " ";
			b++;
		}
		while (b <= a);
		cout << endl;
		a++;
	}
	while (a <= ukuran);
	return 0;
}

