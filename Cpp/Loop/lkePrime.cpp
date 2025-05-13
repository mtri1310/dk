#include <bits/stdc++.h>
using namespace std;
int isPrime(int n) {
	if (n == 1) {
    	return -1;
	}
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
    for (int i = 2; i <= n; i++) {
    	if (isPrime(i) == 1) {
    		cout << i << " ";
		}
	}
    return 0;
}
