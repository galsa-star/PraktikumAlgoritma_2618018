#include <iostream>
using namespace std;

int main() {
	float celcius;
	float fahrenheit;
	float reamur;
	float kelvin;
	
	cout << "PROGRAM KONVERSI SUHU" << endl << endl;
	cout << "Masukkan Suhu (Celcius) : "; cin >> celcius;
	
	fahrenheit = (9.0 / 5.0) * celcius + 32;
	reamur = (4.0 / 9.0) * (fahrenheit - 32);
	kelvin = (5.0 / 4.0) * reamur + 273.15;
	
	cout << "Jadi," << endl;
	cout << celcius << " derajat celcius = " << fahrenheit << " derajat fahrenheit" << endl;
	cout << fahrenheit << " derajat fahrenheit = " << reamur << " derajat reamur" << endl;
	cout << reamur << " derajat reamur = " << kelvin << " derajat kelvin" << endl;
	
	return 0;
}

