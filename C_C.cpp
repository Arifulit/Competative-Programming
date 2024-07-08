#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    
    for (int turn = 0; turn < K; ++turn) {
        
        int maxElement = *max_element(A.begin(), A.end());

       
        for (int i = 0; i < N; ++i) {
            A[i] = maxElement - A[i];
        }
    }

   
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }

    return 0;
}
