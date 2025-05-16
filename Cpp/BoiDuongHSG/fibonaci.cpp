#include <bits/stdc++.h>
using namespace std;
// day so fibonaci: 0, 1, 1, 2, 3, 5, 8, 13, 21, 
int findFib(int n) {
	if(n <= 1) {
		return n;
	}
	long long a = 0, b = 1, fib;
	for (int i = 2; i <= n; i++) {
		fib = a + b;
		a = b;
		b = fib;
	}
	return fib;
}
void printFibLs(int n) {
	long long a = 0, b = 1, fib;
	for (int i = 2; i <= n; i++) {
		fib = a + b;
		cout << fib << " ";
		a = b;
		b = fib;
	}
	cout << endl;
} 
int main() {
	int n;
	cin >> n;
	cout << findFib(n) << endl;
	printFibLs(n);
}
