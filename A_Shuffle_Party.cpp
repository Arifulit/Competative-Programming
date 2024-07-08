#include <iostream>
#include <cmath>
using namespace std;

int findPositionOfOne(int n) {
    int power = log2(n) + 1;
    return (1 << power) - 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << findPositionOfOne(n) << endl;
    }

    return 0;
}
