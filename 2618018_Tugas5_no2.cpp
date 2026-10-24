#include <iostream>
#include <string>
using namespace std;

int main() {
	int bangundatar, sisi, panjang, lebar, alas, tinggi;
	float luaspersegi, luaspersegipanjang, luassegitiga;
	string nama, nim;
	
	cout << "Masukkan Nama : "; getline(cin, nama);
	cout << "Masukkan NIM : "; cin >> nim;
	cout << "\n=== MENGHITUNG LUAS BANGUN DATAR ===" << endl;
	cout << "1. Persegi" << endl;
	cout << "2. Persegi Panjang" << endl;
	cout << "3. Segitiga" << endl;
	cout << "Pilih bangun datar : "; cin >> bangundatar;
	
	//validasi pilihan
	if (bangundatar < 1 || bangundatar > 3) {
		cout << "Pilihan tidak valid!";
	}
	else {
		switch (bangundatar) {
		case 1 :
			cout << "Masukkan sisi : "; cin >> sisi;
			luaspersegi = sisi * sisi;
			cout << "Luas Persegi = " << luaspersegi << endl;
			break;
		case 2 :
			cout << "Masukkan panjang : "; cin >> panjang;
			cout << "Masukkan lebar : "; cin >> lebar;
			luaspersegipanjang = panjang * lebar;
			cout << "Luas persegi panjang = " << luaspersegipanjang << endl;
			break;
		case 3 :
			cout << "Masukkan alas : "; cin >> alas;
			cout << "Masukkan tinggi : "; cin >> tinggi;
			luassegitiga = 0.5 * alas * tinggi;
			cout << "Luas segitiga = " << luassegitiga << endl;
			break;
		}
	}
	
	return 0;
}

