/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

/*
	최장 증가 부분 수열 (Longest increasing subsequence)
	
	-- 빌드업 ---------
	1. length(k)를 위치 k에서 끝나는 LIS의 길이라고 하자.
	2. 그러면 0 <= k <= n-1를 만족하는 모든 k에 대해 length(k)를 계산하여 LIS의 길이를 구할 수 있다.
	-------------------
	
	length(k)의 값을 계산하기 위해서는 array[i] < array[k]이면서 length(i)가 최대가 되는 위치 i<k를 찾아야 한다.
	그러면 length(k) = length(i) + 1 임을 알 수 있는데, 
	이는 i에서 끝나는 LIS의 마지막에 array[k]를 추가하는 것이 최적이기 때문이다.

	하지만, 이를 만족하는 i가 없다면 수열은 array[k]만을 포함하므로 length(k) = 1이 된다.

	모든 함수값은 더 작은 값을 통해 계산될 수 있으므로 동적 계획법을 이용할 수 있다.
	함수의 값은 배열 length에 저장된다.
*/

vector<int> a = {6,2,5,1,7,4,8,3};
int n = 8;
vector<int> length;

int length_with_loop() {
	for(int k = 0; k < n; k++) {
		length[k] = 1;
		for(int i = 0; i < k; i++) {
			if(a[i] < a[k])
				length[k] = std::max(length[k], length[i]+1);
		}
	}
	
	int mx = 0;
	for(int i = 0; i < n; i++) 
		mx = std::max(mx, length[i]);

	return mx;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// cin >> n;
	length.resize(n);
	
	int answer = length_with_loop();
	cout << answer << "\n";
	
	return 0;
}
