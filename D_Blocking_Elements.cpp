#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long sum_blocked = 0;
        long long max_suffix_sum = 0;
        long long max_suffix_sum_with_blocked = 0;

        for (int i = n - 1; i >= 0; --i) {
            sum_blocked += a[i];
            max_suffix_sum = max(max_suffix_sum, sum_blocked);
            max_suffix_sum_with_blocked = max(max_suffix_sum_with_blocked, max_suffix_sum - sum_blocked);
        }

        cout << max(sum_blocked, max_suffix_sum_with_blocked) << endl;
    }

    return 0;
}
