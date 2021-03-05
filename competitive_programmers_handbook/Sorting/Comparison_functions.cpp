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
	sort(v.begin(), v.end(), [](int a, int b) {
		return (a < b); // incr
		//return (a > b); // decr
	});
	
	print(v);
	
	return 0;
}
