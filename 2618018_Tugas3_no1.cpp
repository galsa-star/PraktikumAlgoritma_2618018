#include <iostream>
using namespace std;

int main() {
	int nilai1, nilai2;
	string hasil;
	
	cout << "Masukkan nilai pertama: "; cin >> nilai1;
	cout << "Masukkan nilai kedua: "; cin >> nilai2;
	
	if ((nilai1 > 60)&(nilai2 > 60)) {
		cout << "Selamat, Anda LULUS!" << hasil << endl;
	}
	else {
		cout << "Maaf, Anda TIDAK LULUS" << hasil << endl;
	}
	
	return 0;
}

