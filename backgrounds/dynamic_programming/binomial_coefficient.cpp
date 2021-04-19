/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

// 이항계수 계산
int bino(int n, int r) {
    if(r == 0 || n == r) return 1;
    return bino(n-1, r-1) + bino(n-1, r);
}

vector<vector<int>> cache(30, vector<int>(30, -1));
// 메모이제이션을 통한 이항계수 계산
int bino2(int n, int r) {
    if(r == 0 || n == r) return 1;
    if(cache[n][r] != -1) return cache[n][r];
    return cache[n][r] = bino2(n-1, r-1) + bino2(n-1, r);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, r;
    cin >> n >> r;

    cout << bino(n, r) << "\n";
	
	return 0;
}
