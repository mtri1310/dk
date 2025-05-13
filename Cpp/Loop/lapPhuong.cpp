#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int n = 100; n <= 999; n++) {
        int a = n / 100;          
        int b = (n / 10) % 10;    
        int c = n % 10;           
        

        if (a * a * a + b * b * b + c * c * c == n) {
            cout << n << " "; 
        }
    }
    return 0;
}

