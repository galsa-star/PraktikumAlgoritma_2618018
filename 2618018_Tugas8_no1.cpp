#include <iostream>
using namespace std;

int menu;
char lanjut;

int garis() {
	for (int a = 1; a <= 45; a++) {
		cout << "=";
	}
	cout << endl;
	return 45;
}

void datadiri() {
	string nama, nim;
	cout << "Masukkan Nama Lengkap Anda: ";
	getline(cin, nama);
	cout << "Masukkan NIM Anda         : ";
	getline(cin, nim);
}

void bangundatar() {
	cout << "\n=== BANGUN DATAR ===" << endl;
	cout << "1. Persegi" << endl;
	cout << "2. Persegi panjang" << endl;
	cout << "3. Segitiga" << endl;
	cout << "4. Lingkaran" << endl;
	cout << "5. Keluar" << endl;
	cout << "Masukkan Pilihan Bangun Datar: ";
	cin >> menu;
	switch (menu) {
		case 1:
			cout << "Pilihan Anda adalah persegi" << endl;
			break;
		case 2:
			cout << "Pilihan Anda adalah persegi panjang" << endl;
			break;
		case 3:
			cout << "Pilihan Anda adalah segitiga" << endl;
			break;
		case 4:
			cout << "Pilihan Anda adalah lingkaran" << endl;
			break;
		case 5:
			cout << "Terima kasih telah memilih!" << endl;
			break;
		default:
			cout << "Pilihan tidak valid!" << endl;
	}
}

void hitung() {
	int pilhitung, s, p, l, r, alas, tsegitiga;
	int tbalok, tprisma;
	float luas, volume;
	cout << "\nKamu ingin hitung luas(1)/volume(2)? ";
	cin >> pilhitung;
	if (pilhitung == 1) {
		switch (menu) {
			case 1:
				cout << "Masukkan sisi: "; cin >> s;
				luas = s * s;
				cout << "Luas persegi: sisi X sisi = " << luas << endl;
				break;
			case 2:
				cout << "Masukkan panjang: "; cin >> p;
				cout << "Masukkan lebar: "; cin >> l;
				luas = p * l;
				cout << "Luas persegi panjang: panjang X lebar = " << luas << endl;
				break;
			case 3:
				cout << "Masukkan alas: "; cin >> alas;
				cout << "Masukkan tinggi: "; cin >> tsegitiga;
				luas = 0.5 * alas * tsegitiga;
				cout << "Luas segitiga: 1/2 X alas X tinggi = " << luas << endl;
				break;
			case 4:
				cout << "Masukkan jari-jari: "; cin >> r;
				luas = 3.14 * r * r;
				cout << "Luas lingkaran: 3.14 X r X r = " << luas << endl;
				break;
			default:
				cout << "Pilihan tidak valid!" << endl;
		}
	}
	else if (pilhitung == 2) {
		switch (menu) {
			case 1:
				cout << "Masukkan sisi: "; cin >> s;
				volume = s * s * s;
				cout << "Volume kubus: sisi X sisi X sisi = " << volume << endl;
				break;
			case 2:
				cout << "Masukkan panjang: "; cin >> p;
				cout << "Masukkan lebar: "; cin >> l;
				cout << "Masukkan tinggi: "; cin >> tbalok;
				volume = p * l * tbalok;
				cout << "Volume balok: panjang X lebar X tinggi = " << volume << endl;
				break;
			case 3:
				cout << "Masukkan alas: "; cin >> alas;
				cout << "Masukkan tinggi segitiga: "; cin >> tsegitiga;
				cout << "Masukkan tinggi prisma: "; cin >> tprisma;
				volume = (0.5 * alas * tsegitiga) * tprisma;
				cout << "Volume prisma segitiga: (1/2 X alas X tinggi) X tinggi prisma = " << volume << endl;
				break;
			case 4:
				cout << "Masukkan jari-jari: "; cin >> r;
				volume = (4.0 / 3.0) * 3.14 * r * r * r;
				cout << "Volume bola: 4/3 X 3.14 X r X r X r = " << volume << endl;
				break;
			default:
				cout << "Pilihan tidak valid!" << endl;
		}
	}
	else {
		cout << "Pilihan tidak valid!" << endl;
	}
}

int main() {
	datadiri();
	garis();
	do {
		bangundatar();
		if (menu >= 1 && menu <= 4) {
			hitung();
			garis();
			cout << "Apakah ingin menghitung lagi? (y/n): "; cin >> lanjut;
		}
		else if (menu == 5) {
			cout << "SELAMAT KAMU TELAH MENYELESAIKAN LATIHAN!";
			lanjut = 'n';
		}
		else {
			lanjut = 'y';
		}
	}
	while (lanjut == 'y' || lanjut == 'Y');
	
	return 0;
}

