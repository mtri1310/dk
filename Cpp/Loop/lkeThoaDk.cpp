#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    for (int i = 3; i <= n; i++) {
    	if (i % 3 == 0 && i % 5 != 0) {
    		cout << i << " ";
		}
	}

    return 0;
}
