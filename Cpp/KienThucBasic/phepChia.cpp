#include <bits/stdc++.h>

using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	cout << a/b << endl << a%b << endl << fixed << setprecision(2) << float(a)/float(b);
    return 0;
}
