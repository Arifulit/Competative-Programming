#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> leftCoins(n);
        vector<int> rightCoins(m);

        for (int i = 0; i < n; i++) {
            cin >> leftCoins[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> rightCoins[i];
        }

        sort(leftCoins.begin(), leftCoins.end());
        sort(rightCoins.begin(), rightCoins.end());

        int count = 0;
        int leftIndex = 0, rightIndex = m - 1;

        while (leftIndex < n && rightIndex >= 0) {
            int sum = leftCoins[leftIndex] + rightCoins[rightIndex];
            if (sum <= k) {
                count += (rightIndex + 1);
                leftIndex++;
            } else {
                rightIndex--;
            }
        }

        cout << count << endl;
    }

    return 0;
}
