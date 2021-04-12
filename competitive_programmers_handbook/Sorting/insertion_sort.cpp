/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& A) {
    for(int i = 0; i < A.size(); ++i) {
        int j = i;
        while(j > 0 && A[j-1] > A[j]) {
            swap(A[j-1], A[j]);
            --j;
        }
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// code here
	
	return 0;
}
