#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1";
        return 0;
    }

    int digits[10]; 
    int index = 0;


    for (int i = 9; i >= 2; i--) {
        while (n % i == 0) {
            digits[index++] = i;  // Lýu ch? s? vào m?ng
            n = n / i;  // Chia n cho i
        }
    }

    if (n > 1) {
        // N?u sau khi chia h?t mà n v?n c?n l?i > 1, không th? phân tích ðý?c
        cout << "-1";
        return 0;
    }

    // In các ch? s? theo th? t? tãng d?n ð? t?o ra s? nh? nh?t
    for (int i = index - 1; i >= 0; i--) {
        cout << digits[i];  // In ch? s? t? cu?i m?ng
    }

    return 0;
}

