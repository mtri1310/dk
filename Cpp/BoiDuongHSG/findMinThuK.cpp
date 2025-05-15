#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[1000], k;
    cin >> n >> k;
	if (k >= n) {
		cout << 0;
		return 0;
	}
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
	sort(a, a + n);
//	for (int i = 0; i < n; i++) {
//		cout << "a[" << i << "]" << " = " << a[i] << endl;
//	}
	
	cout << a[n - k];

    return 0;
}


