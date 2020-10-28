/**
 * author: jaguarcode
 * date: 28.10.2020 08:07:09
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*
	// trying 
	int n;
	cin >> n;
	vector<int> v;
	int num = n;
	while(num != 0) {
		v.push_back(num % 10);
		num /= 10;
	}
	size_t size = v.size();
	int mx = n;
	for(size_t i = 0; i < size; i++) {
		int sum = 0;
		for(size_t j = 0; j < size; j++)
			if(j != i) sum += pow(10, j) * v[j];
		mx = max(mx, sum);
	}
	cout << mx << "\n";
	*/
	
	// solution from tutorial
	int n;
	cin >> n;
	int Max = n;
	if (n/10 > Max) Max = n/10;
	if (n%10 + (n/100)*10 > Max) Max = n%10 + (n/100)*10;
	cout << Max;
	return 0;
}
