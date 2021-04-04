/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

<<<<<<< HEAD
		Output:
		00
		01
		11
		10
	 */
	int n;
	cin >> n;
	
	int count = pow(2, n);
	
	vector<string> pattern = {
		"00", "01", "11", "10",
		"10", "11", "01", "00",
	};
	
	vector<string> result;
	result.resize(count);
	for(int j = 1; j < count/2; j+=2) {
		for(int i = 1; i <= count; i++) {
			//int b = pow(2, i);
			cout << i << " " << j << "\n";
			string c = pattern[i/j + 1];
			result[i-1] += c;
		}
	}
	
	
	for(auto a : result) cout << a << "\n";
=======
	int n;
	cin >> n;
	
	int cnt = pow(2, n);
	vector<string> p = { "0", "1", "1", "0" };
	
	vector<string> v(cnt);
	int r = pow(2, n-1);
	
	for(int i = n; i > 0; i--) {
		for(size_t j = 0; j < v.size(); j++) {
			string& c = v[j];
			c += p[(j/r)%p.size()];
		}
		r /= 2;
	}
>>>>>>> 1accf99401ebc0e298aa64e387173462e24a86bb
	
	for(auto a : v) cout << a << "\n";
	
	return 0;
}
