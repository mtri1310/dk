#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	a.erase(
	    remove_if(
	        a.begin(), a.end(),
	        [k](int x) { return x % k == 0; }
	    ),
	    a.end()
	);

	cout << a.size() << endl;
		for (int value : a) {
		cout << value << ' ';
	}
}
