#include <iostream>
using namespace std;

int main() {
	float r;
	float t;
	float volume;
	
	cout << "=== Program Menghitung Volume Tabung ===" << endl;
	cout << "Masukkan jari-jari tabung : "; cin >> r;
	cout << "Masukkan tinggi tabung : "; cin >> t;
	
	volume = 3.14 * r * r * t;
	
	cout << "Volume tabung adalah = " << volume;
	
	return 0;
}

