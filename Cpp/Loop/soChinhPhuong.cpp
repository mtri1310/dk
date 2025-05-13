#include <bits/stdc++.h>
using namespace std;
int isPrime(int n) {

    for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return -1;
		}
	}
	return 1;
}
int main() {
    int n;
    cin >> n;
    if (n == 1) {
    	cout << -1;
    	return 0;
	}
	if (isPrime(n) == -1) {
		cout << -1;
		return 0;
	}
    int index = 0;
    int a[100];
    for (int i = 2; i <= n; i++) {
		if (isPrime(i) == 1 && i % 4 == 1) {
			a[index++] = i;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (i*i + j*j == n) {
				cout << i*i << " " << j*j << endl;
				break;
			}
		}
	}
    return 0;
}
