#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int min = 100000;	
	for (int i = 0; i < n; i++) {
		if (a[i] <= min) {
			min = a[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == min) {
			cout << i + 1 << " ";
		}
	}
	return 0;
}
