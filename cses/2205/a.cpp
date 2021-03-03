/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	/*
	 * A Gray code is a list of all 2n bit strings of length n, 
	 * where any two successive strings differ in exactly one bit 
	 * (i.e., their Hamming distance is one).
	 * Your task is to create a Gray code for a given length n.
	 */
	
	int n;
	cin >> n;
	long d = pow(2, n);
	vector<string> result(d);

	int rr = 0;
	while((d = d/2) != 0) {
		int index = 1;
		for(string& s : result) {
			s.resize(n);
			s[rr] = (index / d > 0) ? '0' : '1';
			index++;
			index = index % (d*2);
		}
		rr++;
	}
		
	for(string s : result)
		cout << s << "\n";
	
	return 0;
}
