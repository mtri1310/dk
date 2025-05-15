#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			}
		}
	}
	cout << a[0] << endl << a[n - 1];
	return 0;
}
