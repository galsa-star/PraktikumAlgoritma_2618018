#include <iostream>
using namespace std;

int main() {
	int i, n, total = 1;
	
	cout << "## Galuh Fara Sahita - 2618018 ##" << endl;
	cout << "==================================" << endl;
	cout << "## Program C++ Hitung Faktorial ##" << endl;
	cout << "==================================" << endl;
	
	cout << "input angka: "; cin >> n;
	cout << n << "! = "; 
	for (i = 1; i <= n; i++) {
		cout << i;
		if (i < n) {
			cout << " * ";
		}
		total *= i; 
	}
	cout << " = " << total;
	return 0;
}

