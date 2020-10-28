/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

template<typename T>
inline auto print(const T& t) {
	for(const auto& e : t) cout << e << " ";
	cout << "\n";
}

// Method 2. using bit representation of integers
vector<int> myVector = {1,2,3,4,5,6,7,8,9};
int n = myVector.size();

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	for(int b = 0; b < (1 << n); b++) {
		vector<int> subset;
		for(int i = 0; i < n; i++) {
			if(b & (1 << i)) subset.push_back(myVector[i]);
		}
		print(subset);
	}
	
	return 0;
}
