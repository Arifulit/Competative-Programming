#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<pair<int, int>> players(22);

        // Input the runs and wickets for each player
        for (int i = 0; i < 22; ++i) {
            cin >> players[i].first >> players[i].second;
        }

        int maxScore = 0, manOfTheMatch = 0;

        // Calculate points for each player and find the Man of the Match
        for (int i = 0; i < 22; ++i) {
            int score = players[i].first + players[i].second * 20;
            if (score > maxScore) {
                maxScore = score;
                manOfTheMatch = i + 1; // Index is 1-based
            }
        }

        // Output the result for the current test case
        cout << manOfTheMatch << endl;
    }

    return 0;
}
