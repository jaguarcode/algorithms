/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	stack<int> left, middle, right;
	
	while(n--) left.push(n+1);
	
	while(left.size()) {
		int top = left.top();
		if(middle.top() < top) {
			middle.push(top);
			left.pop();
		} else {
			right.push(top);
			left.pop();
		}
	}
	
	while(middle.size()) {
		int top = middle.top();
		if(right.top() < top) {
			right.push(top);
			middle.pop();
		}
	}
	
	cout << right.size() << "\n";
	
	return 0;
}
