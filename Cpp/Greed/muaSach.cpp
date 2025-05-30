#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;                     // số sách
    vector<long long> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];              // đọc giá từng cuốn
    }

    // 1) Sắp giảm dần
    sort(p.begin(), p.end(), greater<long long>());

    // 2) Lấy những cuốn không rơi vào vị trí i%3==2
    long long total = 0;
    for (int i = 0; i < n; i++) {
        if (i % 3 != 2) {
            total += p[i];
        }
        // nếu i%3==2 thì là cuốn được tặng, không cộng giá
    }

    cout << total << "\n";
    return 0;
}
