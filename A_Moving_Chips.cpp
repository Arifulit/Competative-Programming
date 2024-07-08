#include <bits\stdc++.h>
using namespace std;

int minOperations(vector<int>& cells) {
    int n = cells.size();
    int operations = 0;
    vector<int> chipIndices;

    for (int i = 0; i < n; ++i) {
        if (cells[i] == 1) {
            chipIndices.push_back(i);
        }
    }

    int numChips = chipIndices.size();

    for (int i = 1; i < numChips; ++i) {
        operations += chipIndices[i] - chipIndices[i - 1] - 1;
    }

    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> cells(n);
        for (int i = 0; i < n; ++i) {
            cin >> cells[i];
        }

        int result = minOperations(cells);
        cout << result << endl;
    }

    return 0;
}
