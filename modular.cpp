

// C++ program to find modular
// inverse of A under modulo M
#include <bits/stdc++.h>
using namespace std;


int modInverse(int A, int M)
{
	for (int X = 1; X < M; X++)
		if (((A % M) * (X % M)) % M == 1)
			return X;
}

// Driver code
int main()
{
	int A = 3, M = 11;

	// Function call
	cout << modInverse(A, M);
	return 0;
}


code in c++ optimal solution