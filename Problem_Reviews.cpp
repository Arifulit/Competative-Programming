#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> scores(n);

        // Input the scores given by each judge
        for (int i = 0; i < n; ++i) {
            cin >> scores[i];
        }

        // Check if every judge gave a score strictly greater than 4
        bool isGood = true;
        for (int i = 0; i < n; ++i) {
            if (scores[i] <= 4) {
                isGood = false;
                break;
            }
        }

        // Output the result for the current test case
        cout << (isGood ? "YES" : "NO") << endl;
    }

    return 0;
}
