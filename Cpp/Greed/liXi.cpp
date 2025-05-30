#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 1;      // count là “budget” ban đầu (được chọn 1 túi)
    int sum = 0;      // sum tích luỹ tổng tiền
    vector<int> x;    // chứa a_i của các túi b_i = 0

    // Đọc từng túi
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;

        if (b > 0)
        {
            // **Tham lam #1**: luôn chọn ngay những túi có b_i>0
            // vì chúng không làm giảm (thậm chí còn tăng) budget
            sum += a;           // lấy ngay a_i
            count += b - 1;       // cập nhật budget: −1 (chọn) + b_i
        }
        else
        {
            // chưa chọn, bỏ tạm vào x để xử lý sau
            x.push_back(a);
        }
    }

    // **Tham lam #2**: để chọn tiếp trong nhóm b_i=0,
    // ta phải ưu tiên những a_i lớn nhất
    sort(x.begin(), x.end(), greater<int>());  
//    for (int value : x) {
//		cout << value << ' ';
//	}
//	cout << endl << count << endl;
	
    // chỉ chọn tối đa count túi còn lại
    count = min(count, (int)x.size());
    for (int i = 0; i < count; ++i)
    {
        sum += x[i];  // **Tham lam #3**: lấy lần lượt top count phần tử của x
    }

    cout << sum;
    return 0;
}
