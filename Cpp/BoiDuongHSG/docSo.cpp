#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
	int a[1000];
	for (int i = 0;  i< n; i++) {
		cin >> a[i];
	}
	cout << n << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

    return 0;
}

