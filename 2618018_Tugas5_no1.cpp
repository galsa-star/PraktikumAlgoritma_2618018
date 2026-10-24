#include <iostream>
#include <string>
using namespace std;

int main() {
	int nilai;
	string nama, nim;
	
	cout << "Nama : "; getline(cin, nama);
	cout << "NIM : "; cin >> nim;
	cout << "Masukkan nilai (0-100) : "; cin >> nilai;
	
	switch (nilai) {
		case 80 ... 100 :
			cout << "Grade A" << endl;
			break;
		case 65 ... 79 :
			cout << "Grade B" << endl;
			break;
		case 56 ... 64 :
			cout << "Grade C" << endl;
			break;
		case 40 ... 55 :
			cout << "Grade D" << endl;
			break;
		case 0 ... 39 :
			cout << "Grade E" << endl;
			break;
		default :
			cout << "Nilai tidak valid!";
			break;
	}
	return 0;
}

