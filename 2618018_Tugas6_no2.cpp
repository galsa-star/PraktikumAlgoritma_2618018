#include <iostream>
using namespace std;

int main() {
	int i = 1, n, total = 0;
	
	cout << "##             2618018           ##" << endl;
	cout << "## Program C++ Penjumlahan Deret ##" << endl;
	cout << "Jumlah deret yang diinginkan: "; cin >> n;
	while (i <= n) {
		cout << i;
		i++;
		if (i <= n) {
			cout << " + ";
		}
		total += i;
	}
	cout << " = " << total;
	return 0;
}

