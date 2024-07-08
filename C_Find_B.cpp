#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> c(n + 1);  // 1-indexed array for easier calculations
        for (int i = 1; i <= n; ++i) {
            cin >> c[i];
        }

        vector<pair<int, int>> queries(q);
        for (int i = 0; i < q; ++i) {
            cin >> queries[i].first >> queries[i].second;
        }

        for (int i = 0; i < q; ++i) {
            int l = queries[i].first;
            int r = queries[i].second;

            unordered_set<int> unique_elements;

            // Check conditions for each subarray [l, r]
            bool is_good = true;
            for (int j = l; j <= r; ++j) {
                unique_elements.insert(c[j] - (j - l));

                if (unique_elements.size() == j - l + 1 && *unique_elements.begin() == 1 && *unique_elements.begin() == j - l + 1) {
                    // condition met
                } else {
                    is_good = false;
                    break;
                }
            }

            if (is_good) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
