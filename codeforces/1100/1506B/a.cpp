/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int tt;
    cin >> tt;
    while(tt--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int i, j;
        int count = 0;
        int position;

        i = s.find('*');
        j = s.rfind('*');

        position = i + k;

        if(i == j) count = 1;
        else {
            count = 2;
            while(position < j) {
                while(s[position] != '*') position--;
                i = position;
                count++;
                position = i + k;
            }
        }
        cout << count << "\n";
    }
	return 0;
}
