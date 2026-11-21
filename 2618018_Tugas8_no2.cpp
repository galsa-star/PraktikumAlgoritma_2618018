#include <iostream>
using namespace std;

int layanan;
const int tarifcucibiasa = 5000;
const int tarifcuciseterika = 7000;

void datapelanggan() {
	string nama, nomerhp;
	cout << "Masukkan Nama Pelanggan: "; getline(cin, nama);
	cout << "Masukkan No. HP        : "; cin >> nomerhp;
	cout << "Selamat datang, " << nama << "!" << endl;
}

void garis() {
	for (int a = 1; a <= 45; a++) {
		cout << "=";
	}
}

void tampilkantarif() {
	cout << "\nTarif Laundry per Kg:" << endl;
	cout << "Cuci + setrika: Rp" << tarifcuciseterika << "/kg" << endl;
	cout << "Cuci Biasa: Rp" << tarifcucibiasa << "/kg" << endl; 
}

int hitungcuciseterika() {
	int berat, biaya;
	cout << "Masukkan berat pakaian (kg): "; cin >> berat;
	biaya = berat * tarifcuciseterika;
	cout << "Biaya Laundry = Rp" << biaya << endl;
	cout << "Detail: " << berat << " kg x Rp" << tarifcuciseterika << endl;
	return biaya;
}

int hitungcucibiasa() {
	int berat, biaya;
	cout << "Masukkan berat pakaian (kg): "; cin >> berat;
	biaya = berat * tarifcucibiasa;
	cout << "Biaya Laundry = Rp" << biaya << endl;
	cout << "Detail: " << berat << " kg x Rp" << tarifcucibiasa << endl;
	return biaya;
}

int main() {
	datapelanggan();
	garis();
	cout << "\nPilih jenis layanan :"<< endl;
	cout << "1. Cuci + setrika" << endl;
	cout << "2. Cuci biasa" << endl;
	cout << "Pilihanmu = "; cin >> layanan;
	garis();
	if (layanan == 1) {
		cout << "\nPilihanmu adalah Cuci + setrika" << endl;
		hitungcuciseterika();
	}
	else if (layanan == 2) {
		cout << "\nPilihanmu adalah Cuci biasa" << endl;
		hitungcucibiasa();
	}
	else {
		cout << "\nPilihan tidak valid!" << endl;
	}
	garis();
	tampilkantarif();
	return 0;
}

