/**
 * author: jaguarcode
 * date:
**/
#include <bits/stdc++.h>
using namespace std;

// 정방행렬을 표현하는 SquareMatrix 클래스가 있다고 가정하자.
class SquareMatrix;
// n*n 크기의 항등 행렬(identity matrix)을 반환하는 함수
SquareMatrix identity(int n);
// A^m을 반환한다.
SquareMatrix pow(const SquareMatrix& A, int m) {
    if(m == 0) return identity(A.size());
    if(m % 2 > 0) return pow(A, m-1) * A;
    SquareMatrix half = pow(A, m/2);
    // A^m = (A^(m/2)) * (A^(m/2))
    return half * half;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// code here
	
	return 0;
}
