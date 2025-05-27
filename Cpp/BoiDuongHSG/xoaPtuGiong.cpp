#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<int> res;  // vector lưu phần tử không trùng
	
	cout << res.size() << endl;
    for (int i = 0; i < n; ++i) {
        bool found = false;
        for (int j = 0; j < (int)res.size(); ++j) {
            if (a[i] == res[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            res.push_back(a[i]);
        }
    }

    cout << res.size() << '\n';
    for (int x : res) cout << x << ' ';
}
