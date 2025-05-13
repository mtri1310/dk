#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    // so giao diem toi da khi: 
	// 2 duong thang bat ky (trong n duong) deu cat nhau
	// => s = 2Cn = (n*(n-1))/2 
    cout << (n*(n-1))/2;

    return 0;
}
