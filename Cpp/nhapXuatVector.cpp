#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
//	cin >> n;
//	vector<int> a(n);
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}

	vector<int> a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		a.push_back(n);
	}
	
	for (int value : a) {
		cout << value << ' ';
	}

}
