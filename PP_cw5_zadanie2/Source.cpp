#include<cstdio>
#include <iostream>

using namespace std;

long long silnia(int n) {
	static int licznik = 0;
	cout << ++licznik << " wywolanie funkcji " << __func__ << " z parametrem n = " << n << "\n";
	if (n == 0) {
		return 1;
	}
	return n * silnia(n - 1);
}

long long fibo(int n) {
	static int licznik = 0;
	cout << ++licznik << " wywolanie funkcji " << __func__ << " z parametrem n = " << n << "\n";
	if (n == 0) { return 0; }
	if (n == 1) { return 1; }
	return fibo(n - 1) + fibo(n - 2);
}

void hanoi(int n, char x, char y, char z) {
	static int licznik = 0;
	cout << ++licznik << " wywolanie funkcji " << __func__ << " z parametrem n = " << n << ", x = " << x << ", y = " << y << ", z = " << z << "\n";
	if (n == 1) {
		cout << x << " -> " << z << "\n";
		return;
	}
	hanoi(n - 1, x, z, y);
	hanoi(1, x, y, z);
	hanoi(n - 1, y, x, z);
}



int main() {
	cout << "*** TESTIWANIE FUNKCJI ***\n";

	cout << "*******************************************\n";
	cout << "***               SILNIA                ***\n";
	cout << "*******************************************\n";
	cout << "\n";

	silnia(5);

	cout << "\n";
	cout << "*******************************************\n";
	cout << "***                 FIBO                ***\n";
	cout << "*******************************************\n";
	cout << "\n";

	fibo(5);

	cout << "\n";
	cout << "*******************************************\n";
	cout << "***               HANOI                 ***\n";
	cout << "*******************************************\n";
	cout << "\n";

	hanoi(3, 'a', 'b', 'c');

}