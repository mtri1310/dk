#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, sum = 0, a[1000], count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	float tbc = float(sum)/float(n);
	for (int i = 0; i < n; i++) {
		if (a[i] >= tbc) {
			cout << a[i] << " ";
			count++;
		}
	}
	cout << endl << count << endl << tbc;

}
