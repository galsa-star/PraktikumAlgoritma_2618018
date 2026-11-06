#include <iostream>
using namespace std;

int main() {
	int i, n, hasil;
	
	cout << "===== Galuh Fara Sahita || 2618018 =====" << endl << endl;
	cout << "Masukkan jumlah angka: "; cin >> n;
	for (i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			hasil = i * 2;
			cout << hasil << " ";
		} else if (i % 3 == 0) {
			hasil = i + 3;
			cout << hasil << " ";
		} else {
			cout << i << " ";
		}
	}
	return 0;
}

