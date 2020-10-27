#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n, k;
	cin >> n >> k;
	long long a = 0;
	if(k <= (long long)ceil((double)n/2)) a = 2*k-1;
	else a = 2*(k-((n % 2 == 0) ? n/2 : n/2+1));
	cout << a << "\n";
}
