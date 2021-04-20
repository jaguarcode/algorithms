/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

// 최대 증가 부분 수열 문제를 해결하는 완전 탐색 알고리즘
int lis(const vector<int>& A) {
    // 기저사례: A가 비었을때
    if(A.empty()) return 0;
    int ret = 0;
    for(int i = 0; i < A.size(); ++i) {
        vector<int> B;
        for(int j = 0; j < B.size(); ++j) {
            if(A[i] < A[j]) B.push_back(A[j]);
        }
        ret = max(ret, 1 + lis(B));
    }
    return ret;
}

// 최대 증가 부분 수열 문제를 해결하는 동적 계획법 알고리즘 (1)
int n;
int cache[100], S[100];
// S[start]에서 시작하는 증가 부분 수열 중 최대 길이를 반환한다.
int lis2(int start) {
    int& ret = cache[start];
    if(ret != -1) return ret;
    // 항상 S[start]는 있기 때문에 길이는 최하 1
    ret = 1;
    for(int next = start+1; next < n; ++next)
        if(S[start] < S[next])
            ret = max(ret, lis2(next) + 1);
    return ret; // 값을 받아가서 maxLen 계산 후에 결과로 쓰면 됨
}

// 최대 증가 부분 수열 문제를 해결하는 동적 계획법 알고리즘 (2)
int n;
int cache2[501], S2[500]; // 캐시 1 증가
int lis3(int start) {
    int& ret = cache2[start+1];
    if(ret != -1) return ret;
    ret = 1;
    for(int next = start+1; next < n; ++next)
        if(start == -1 || S2[start] < S[next])
            ret = max(ret, lis3(next) + 1);
    return ret; // lis3(-1)-1을 결과로 쓰면 됨
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
		
	return 0;
}
