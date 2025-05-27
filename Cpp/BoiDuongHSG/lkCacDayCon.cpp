#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int start = 0;  // vị trí bắt đầu dãy con không giảm

    for (int i = 1; i <= n; ++i) {
        // nếu kết thúc dãy hoặc a[i] < a[i-1] thì dãy không giảm kết thúc ở i-1
        if (i == n || a[i] < a[i - 1]) { // kt ko giam
            if (i - start >= 2) {    // chỉ in dãy có >= 2 phần tử
                for (int j = start; j < i; ++j)
                    cout << a[j] << ' ';
                cout << '\n';
            }
            start = i;   // bắt đầu dãy mới từ i
        }
    }

    return 0;
}
