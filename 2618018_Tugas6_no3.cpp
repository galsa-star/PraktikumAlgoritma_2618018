#include <iostream>
using namespace std;

int main() {
	int hasil, level = 1, jawaban;
	
	cout << "==== 2618018 || Galuh Fara Sahita ====" << endl;
	cout << "====    PROGRAM GAME MATEMATIKA   ====" << endl << endl;
	do {
		cout << "Level " << level << endl;
		cout << "Berapa hasil dari " << level << " + " << level * 5 << " = ";
		cin >> jawaban;
		hasil = level + level * 5;
		if (jawaban == hasil) {
			cout << "Benar! Naik level!" << endl << endl;
		}
		else {
			cout << "Game Over" << endl;
			return 0;
		}
		level++;
		if (level == 6) {
			cout << "Selamat! Kamu menyelesaikan semua level!";
		}
	}
	while (level <= 5);
	return 0;
}

