#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        // If the absolute difference between the number of coins is even, Alice wins; otherwise, Bob wins.
        if (abs(a - b) % 2 == 0) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }

    return 0;
}
