/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int>& A, int low, int high, vector<int>& B) {
    if(low >= high) return;
    int mid = (low + high) / 2;

    mergeSort(A, low, mid, B);
    mergeSort(A, mid+1, high, B);

    int i = low, j = mid+1, k = low;
    for(; k <= high; ++k) {
        if(j > high) B[k] = A[i++];
        else if(i > mid) B[k] = A[j++];
        else if(A[i] <= A[j]) B[k] = A[i++];
        else B[k] = A[j++];
    }

    for(i = low; i <= high; ++i) A[i] = B[i];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
    cin >> n;
    vector<int> numbers;
    for(int i = 0; i < n; ++i) {
        int a; cin >> a;
        numbers.push_back(a);
    }

	vector<int> results;
	results.resize(n);
    mergeSort(numbers, 0, numbers.size()-1, results);

    for(const auto& n : results)
        cout << n << "\n";
	
	return 0;
}
