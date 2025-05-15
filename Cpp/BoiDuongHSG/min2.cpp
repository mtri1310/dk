#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, a[1000], b[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }
    sort(b, b+n); // b[1]: phan tu nho thu 2 sau khi sort
    for (int i = 0; i < n; i++) {
        if (a[i] == b[1])
            cout << i+1;
        }
//    for (int i = 0; i < n; i++) {
//    	cout << b[i] <<" "
//	}
    if (b[1] == b[0]) cout << -1;
    return 0;
}
