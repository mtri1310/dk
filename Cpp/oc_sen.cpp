#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, v;
	cin >> a >> b >> v;
	int countDay = 0;
	int h = 0;
	while (h < v) {
		countDay++;
		h += a;
		if (h >= v) { // neu len dinh thi dung lai
			break;
		}
		h -= b; 
	}
	cout << countDay;
   	return 0;
}

