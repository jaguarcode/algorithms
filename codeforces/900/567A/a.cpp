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
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	printf("%d %d\n",a[1]-a[0],a[n-1]-a[0]);
	for(int i = 1; i < n-1; i++)
		printf("%d %d\n",min(a[i]-a[i-1],a[i+1]-a[i]),max(a[i]-a[0],a[n-1]-a[i]));
	printf("%d %d\n",a[n-1]-a[n-2],a[n-1]-a[0]);
	
	return 0;
}
