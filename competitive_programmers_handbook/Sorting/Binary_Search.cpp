/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

template<typename T>
auto print(T& t) {
	for(auto value : t) cout << value << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	vector<int> v { 2,3,4,5,6,2,1,8,2,3,6,9 };
	int x;
	cin >> x;
	
	// sort first
	sort(v.begin(), v.end(), [](int a, int b) {
		return (a < b);
	});
	
	print(v);
	
	// binary search
	int a = 0, b = v.size() - 1;
	while(a <= b) {
		int k = (a+b)/2;
		if(v[k] == x) {
			cout << "found at " << k << "\n";
		}
		if(v[k] > x) b = k-1;
		else a = k+1;
	}
	
	return 0;
}
