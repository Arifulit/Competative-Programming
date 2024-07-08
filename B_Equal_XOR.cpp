#include <bits/stdc++.h>
using namespace std;

void findLR(vector<int>& a, int n, int k) {
    int x = 0;
    for (int i = 0; i < 2 * n; ++i) {
        x ^= a[i];
    }

    unordered_map<int, int> count;
    vector<int> l, r;
    int lxor = 0, rxor = 0;

    for (int i = 0; i < 2 * n; ++i) {
        if (count[a[i]] < 2 && ((lxor ^ a[i]) < x || l.size() < 2 * k)) {
            l.push_back(a[i]);
            lxor ^= a[i];
            count[a[i]]++;
        } else {
            r.push_back(a[i]);
            rxor ^= a[i];
        }
    }

    for (int i = 0; i < 2 * k; ++i) {
        cout << l[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 2 * k; ++i) {
        cout << r[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> a[i];
        }
        findLR(a, n, k);
    }
    return 0;
}
