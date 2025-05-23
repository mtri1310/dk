#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	int n, a[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i--) {
		cout << a[i] << " ";
	}
	return 0;
}
