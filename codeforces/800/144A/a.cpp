/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

int count = 0;

void solve(vector<int> array) {

	int size = array.size();
	int max = *max_element(array.begin(), array.end());
	int min = *min_element(array.begin(), array.end());
	
	int min_index = 0;
	for(int i = 0; i < size; i++) {
		if(min == array[i]) min_index = i;
	}
	
	int max_index = 0;
	for(int i = size-1; i >= 0; i--) {
		if(max == array[i]) max_index = i;
	}
	
	int move = 0;
	if(min_index < max_index) move = ((array.size()-1) - min_index) + (max_index-1);
	else move = ((array.size()-1) - min_index) + max_index;
	
	cout << move << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int tt;
	cin >> tt;
	
	vector<int> a;
	while(tt--) {
		int n;
		cin >> n;
		a.push_back(n);
	}
	
	solve(a);
	
	return 0;
}
