#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, sum = 0, a[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	cout << sum << endl << float(sum)/float(n);

}
