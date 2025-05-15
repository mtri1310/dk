#include<iostream>
#include <algorithm> 
using namespace std;

int main() {
    int n;
    cin >> n;

    int index = 0;
    int a[100]; 


    for (int i = 9; i >= 2; i--) {
		while (n % i == 0) {
			a[index] = i;
			n = n / i;
			index++;
		}
    }
    // neu n chua het (tuc la n > 1), ko tao so k duoc nua
    if (n > 1) {
    	cout << -1;
    	return 0;
	}
	sort(a, a + index);
    for (int i = 0; i < index; i++) {
        cout << a[i]; 
    }

    return 0;
}

