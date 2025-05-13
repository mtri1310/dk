#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int sum = 0, tbc = 0;
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
    	sum += a[i];
	}
	tbc = sum/ n;
	int soPt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= tbc) {
    		cout << a[i] << " ";
			soPt++;
		}
	}
	cout << endl << soPt<< " " << tbc;
	
	
    return 0;
}

