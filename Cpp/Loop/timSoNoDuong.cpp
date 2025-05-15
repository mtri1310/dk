#include <bits/stdc++.h>
using namespace std;

int main() {
	for (int i = 10; i <= 21; i++) {
		int n = i*i*i;
		int x = sqrt(n);
		
		if (x*x == i*i*i) {
			cout << n << endl << i << " " << x;
		}
	}

}
