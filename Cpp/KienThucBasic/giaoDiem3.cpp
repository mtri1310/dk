#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m, n; // m: so duong tron, n: so duong thang
    cin >> m >> n;
    long long gd2Duong = 2*m*n; 
    cout << m*(m-1) + (n*(n-1))/2 + gd2Duong;
    return 0;
}
