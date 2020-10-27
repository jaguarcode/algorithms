#include <bits/stdc++.h>
using namespace std;

template<typename T>
inline auto print(const T& t) {
	for(auto v : t) cout << v << " ";
	puts("");
}

vector<int> myVector {1,2,3,4,5,6,7,8,9};
int n = myVector.size();
vector<int> subset;

void complete_search(int k) {
	if(k == n) {
		print(subset);		
	} else {
		subset.push_back(myVector[k]);
		complete_search(k + 1);
		subset.pop_back();
		complete_search(k + 1);
	}
}

int main() {
	complete_search(0);
}
