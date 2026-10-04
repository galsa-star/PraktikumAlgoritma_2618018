#include <iostream>
using namespace std;

int main() {
	string nama;
	string kelas;
	int nim;
	int semester;
	int ipk;
	
	cout << "PRAKTIKUM ALGORITMA 2026";
	cout << "\nMasukkan Nama : "; cin >> nama;
	cout << "\nMasukkan NIM : "; cin >> nim;
	cout << "\nMasukkan Kelas : "; cin >> kelas;
	cout << "\nSemester : "; cin >> semester;
	cout << "\nMasukkan IPK : "; cin >> ipk;
	cout << "\nBIODATA MAHASISWA";
	cout << "\n==================";
	cout << "\nNama : " << nama;
	cout << "\nNIM : " << nim;
	cout << "\nKelas : " << kelas;
	cout << "\nSemester : " << semester;
	cout << "\nIPK : " << ipk;
	
	return 0;
}

