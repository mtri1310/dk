#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, a[1000], b[1000], x, index = 0, count = 0;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == a[x - 1]) {
			b[index++] = i + 1;
			count++;
		}
	}
	
    if (count == 0) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < index; i++) {
            cout << b[i] << " ";
        }
        cout << endl << count;
    }
	return 0;
}
