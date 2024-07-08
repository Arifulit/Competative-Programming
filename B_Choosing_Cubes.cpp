#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int favorite_value = a[f - 1];
        
        sort(a.rbegin(), a.rend());
        
        int count_favorite_in_top_k = 0;
        for (int i = 0; i < k; i++) {
            if (a[i] == favorite_value) {
                count_favorite_in_top_k++;
            }
        }
        
        int total_count_favorite = count(a.begin(), a.end(), favorite_value);
        
        if (count_favorite_in_top_k == total_count_favorite) {
            cout << "YES" << endl;
        } else if (count_favorite_in_top_k == 0) {
            cout << "NO" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }
    
    return 0;
}
