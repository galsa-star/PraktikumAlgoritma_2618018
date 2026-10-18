#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int tanggungan;
	double pendapatan, tarifpajak, pajak, pajakakhir;
	string nama, nim;
	
	cout << "===== PROGRAM PAJAK PENDAPATAN =====" << endl << endl;
	cout << "Nama Anda: "; getline (cin, nama);
	cout << "NIM Anda: "; cin >> nim;
	cout << "\nDATA PENDAPATAN\n";
	cout << "Pendapatan bulanan: " << "Rp "; cin >> pendapatan;
	
	//validasi pendapatan
	if (pendapatan < 0) {
		cout << "Pendapatan tidak valid!";
		return 0;
	}
	
	//tarif pajak
	if ((pendapatan >= 0) && (pendapatan < 5000000)) {
		tarifpajak = 0;
	}
	else if ((pendapatan >= 5000000) && (pendapatan < 10000000)) {
		tarifpajak = 0.05;
	}
	else if ((pendapatan >= 10000000) && (pendapatan < 20000000)) {
		tarifpajak = 0.1;
	}
	else {
		tarifpajak = 0.15;
	}
	
	//pajak
	pajak = pendapatan * tarifpajak;
	
	cout << "Memiliki tanggungan? (1 = Ya, 0 = Tidak): "; cin >> tanggungan;
	
	//validasi tanggungan
	if (tanggungan < 0 || tanggungan > 1) {
		cout << "Pilihan tidak valid!";
		return 0;
	}
	
	//tanggungan
	if (tanggungan == 1) {
		pajakakhir = pajak - 100000;
	}
	else {
		pajakakhir = pajak;
	}
	
	//validasi pajak akhir
	if (pajakakhir < 0) {
		pajakakhir = 0;
	}
	
	cout << "Tarif pajak: " << tarifpajak * 100 << "%" << endl;
	cout << "Pajak akhir: " << "Rp " << fixed << setprecision(0) << pajakakhir;
	
	return 0;
}

