#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long h, x, y1, y2, k;
        cin >> h >> x >> y1 >> y2 >> k;

        long long hits = 0;

        // Check if the laser is useful and not dropped already
        if (y1 * k + y2 >= x * k) {
            // Use the laser until it drops
            hits = (h + y2 - 1) / y2;
        } else {
            // Use the gun
            hits = (h + x - 1) / x;
        }

        cout << hits << endl;
    }

    return 0;
}
