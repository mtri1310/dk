#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;

	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] + a[j] == k) {
				count++;
			}
		}
	}
	if (count == 0) {
		cout << -1;
	} else {
		cout << count;
	}

    return 0;
}
