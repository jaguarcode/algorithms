/**
 * author: jaguarcode
 * date:
 * 두 큰 수를 곱하는 O(n^2) 시간 알고리즘
**/
#include <bits/stdc++.h>
using namespace std;

// num[]의 자릿수 올림을 처리한다.
void normalize(vector<int>& num) {
    num.push_back(0);
    // 자릿수 올림을 처리한다.
    for(int i = 0; i+1 < num.size(); ++i) {
        if(num[i] < 0) {
            int borrow = (abs(num[i]) + 9) / 10;
            num[i+1] -= borrow;
            num[i] += borrow * 10;
        }
        else {
            num[i+1] += num[i] / 10;
            num[i] %= 10;
        }
    }
    while(num.size() > 1 && num.back() == 0) num.pop_back();
}

// 두 긴 자연수의 곱을 반환한다.
// 각 배열에는 각 수의 자릿수가 1의 자리에서부터 시작해 저장되어 있다.
// 예: multiply({3,2,1}, {6,5,4}) = 123 * 456 = 56088 = {8,8,0,6,5}
vector<int> multiply(const vector<int>& a, const vector<int>& b) {
    vector<int> c(a.size() + b.size() + 1, 0);
    for(int i = 0; i < a.size(); ++i)
        for(int j = 0; j < b.size(); ++j)
            c[i+j] += a[i] * b[j];
    normalize(c);
    return c;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	vector<int> a = {4,3,2,1}, b = {8,7,6,5};
    vector<int> result = multiply(a, b);
	
    reverse(result.begin(), result.end());
    for(const auto& r : result) cout << r;
    cout << "\n";

	return 0;
}
