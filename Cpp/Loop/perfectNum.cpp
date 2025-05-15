#include<bits/stdc++.h>
using namespace std;
int isPerfect(int n) { 	
   	int sum = 1;

   	for (int i = 2; i <= sqrt(n); i++) {
   		if (n % i == 0)	 {
//   			cout << sum << "+" << i << " = ";
			sum += i;
//			cout << sum << endl;
			if (i != n / i) { 
//				cout << sum << "+" << n << "/" << i << " = ";
                sum += n / i; 
//				cout << sum << endl;
            }
	   }
	}
	if (sum == n) {
		return 1;
	} else {
		return 0;
	}
}
int main() {
   	int n, m;
   	cin >> m >> n;
	cout << isPerfect(n) << endl;
	for (int i = 2; i <= n; i++) {
		if (isPerfect(i) == 1) {
			cout << i << " ";
		}
	}
	cout << endl;
	for (int i = m; i <= n; i++) {
		if (isPerfect(i) == 1) {
			cout << i << " ";
		}
	}
	

   	return 0;
}

