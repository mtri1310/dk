#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 0;
    for (int i = 1; i < 2*n; i+=2) {
		s += i;
	}
	cout << s;
    return 0;
}
