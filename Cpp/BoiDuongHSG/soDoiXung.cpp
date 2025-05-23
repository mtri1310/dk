#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    int org = n;
    int rev = 0;
    
    // dao nguoc so, vd: 121
    while (n > 0) {
        int digit = n % 10; //121 % 10 = 1, 12 % 10 = 2, 1 % 10 = 1 
        rev = rev * 10 + digit; // rev = 1, rev = 12, rev = 121
        n /= 10; // n = 12, n = 1, n = 0
    }
    
    return org == rev;
}
int isPrime(int n) {
	if(n <= 1) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
    int n, m;
    cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if(isPalindrome(i) && isPrime(i)) {
			cout << i << " ";
		}
	}
    

    return 0;
}

