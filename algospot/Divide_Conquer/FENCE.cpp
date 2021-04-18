/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

// 울타리 잘라내기 문제를 해결하는 O(n^2) 알고리즘
// 판자의 높이를 담은 배열 h[]가 주어질 때 사각형의 최대 너비를 반환한다.
int bruteForce(const vector<int>& h) {
    int ret = 0;
    int N = h.size();
    // 가능한 모든 left, right 조합을 순회한다.
    for(int left = 0; left < N; ++left) {
        int minHeight = h[left];
        for(int right = left; right < N; ++right) {
            minHeight = min(minHeight, h[right]);
            ret = max(ret, (right - left + 1) * minHeight);
        }
    }
    return ret;
}

// 울타리 잘라내기 문제를 해결하는 분할 정복 알고리즘
// h[left..right] 구간에서 찾아낼 수 있는 가장 큰 사각형의 넓이를 반환한다.
int solve(vector<int>& fence, int left, int right) {
    // 기저 사례: 판자가 하나밖에 없는 경우
    if(left == right) return fence[left];
    // [left, mid], [mid+1, right]의 두 구간으로 문제를 분할한다.
    int mid = (left + right) / 2;
    // 분할한 문제를 각각 해결한다.
    int ret = max(solve(fence, left, mid), solve(fence, mid+1, right));
    // 부분 문제 3: 두 부분에 모두 걸치는 사각형 중 가장 큰 것을 찾는다.
    int lo = mid, hi = mid+1;
    int height = min(fence[lo], fence[hi]);
    // [mid, mid+1]만 포함하는 너비 2인 사각형을 고려한다.
    ret = max(ret, height * 2);
    // 사각형이 입력 전체를 덮을 때까지 확장해 나간다.
    while(left < lo || hi < right) {
        // 항상 높이가 더 높은쪽으로 확장한다.
        if(hi < right && (lo == left || fence[lo-1] < fence[hi+1])) {
            ++hi;
            height = min(height, fence[hi]);
        } else {
            --lo;
            height = min(height, fence[lo]);
        }
        // 확장한 후 사각형의 넓이
        ret = max(ret, height * (hi - lo + 1));
    }
    return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int tt;
    cin >> tt;
    while(tt--) {
        vector<int> h;
        int n;
        cin >> n;
        for(int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            h.push_back(a);
        }
        cout << solve(h, 0, h.size()-1) << "\n";
    }
	
	return 0;
}
