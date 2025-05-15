#include <bits/stdc++.h>
using namespace std;
int isPrime(int n) {
	if (n <= 1) {
    	return 0;
	}
    for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
    int n, m;
    cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (isPrime(i) == 1) {
			cout << i << " ";
		}
	}
    return 0;
}
