/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

// fastSum(n) = 2 * fastSum(n/2) + n^2/2

// 필수 조건: n은 자연수
// 1 + 2 + ... + n을 반환한다.
int fastSum(int n) {
    // 기저 사례
    if(n == 1) return 1;
    if(n%2 == 1) return fastSum(n-1) + n;
    return 2*fastSum(n/2) + (n/2)*(n/2);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// code here
	
	return 0;
}
