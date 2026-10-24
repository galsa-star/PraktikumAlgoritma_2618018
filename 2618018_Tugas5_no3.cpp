#include <iostream>
#include <string>
using namespace std;

int main() {
	int menu, pesanan, hargasatuan, totalpesanan, diskon, totalbayar;
	string nama;
	
	cout << "Masukkan Nama Pemesan : "; cin >> nama;
	cout << "\n=== MENU KANTIN ===" << endl;
	cout << "1. Nasi Goreng - Rp15000" << endl;
	cout << "2. Mie Goreng  - Rp12000" << endl;
	cout << "3. Bakso       - Rp10000" << endl;
	cout << "4. Es Teh      - Rp5000" << endl;
	cout << "Pilih menu : "; cin >> menu;
	
	//validasi pilihan
	if (menu < 1 || menu > 4) {
		cout << "Pilihan tidak valid!";
		return 0;
	}
	
	cout << "Masukkan jumlah pesanan : "; cin >> pesanan;
	
	//validasi jumlah pesanan
	if (pesanan <= 0) {
		cout << "Jumlah pesanan tidak valid!";
		return 0;
	}
	
	//switch menu
	switch (menu) {
		case 1 :
			hargasatuan = 15000;
			break;
		case 2 :
			hargasatuan = 12000;
			break;
		case 3 :
			hargasatuan = 10000;
			break;
		case 4 :
			hargasatuan = 5000;
	}
	
	totalpesanan = pesanan * hargasatuan;
	
	if (totalpesanan > 40000) {
		diskon = totalpesanan * 0.08;
	}
	else {
		diskon = 0;
	}
	
	totalbayar = totalpesanan - diskon;
	
	cout << "\n===== STRUK PEMBAYARAN =====" << endl;
	cout << "Nama Pemesan     : " << nama << endl;
	cout << "Harga Satuan     : Rp" << hargasatuan << endl;
	cout << "Jumlah Pesanan   : " << pesanan << endl;
	cout << "Total Pesanan    : Rp" << totalpesanan << endl;
	cout << "Diskon 8%        : Rp" << diskon << endl;
	cout << "Total Pembayaran : Rp" << totalbayar << endl;
	cout << "Terima kasih telah memesan!" << endl;
	
	return 0;
}

