#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pai acos(-1)
#define mod 1000000007
#define INF 1e18
#define pb push_back
#define pi pair<int,int>
#define pii pair<ll,ll>
#define srt(v) sort(v.begin(),v.end())
#define rsort(v) sort(v.rbegin(),v.rend())
#define fast  ios_base::sync_with_stdio(false),cin.tie(NULL)
 
 
void solve(){
     int R, C;
    cin >> R >> C;

    // Input the grid
    string G[R];
    for (int row = 0; row < R; ++row) {
        cin >> G[row];
    }

    int safeSpots = 0;

    // Iterate through each spot in the grid
    for (int row = 0; row < R; ++row) {
        for (int col = 0; col < C; ++col) {
            // Check if the current spot is a free spot
            if (G[row][col] == '.') {
                // Check neighbors
                bool safe = true;

                // Check the spot above
                if (row > 0 && G[row - 1][col] == '*') {
                    safe = false;
                }

                // Check the spot below
                if (row < R - 1 && G[row + 1][col] == '*') {
                    safe = false;
                }

                // Check the spot to the left
                if (col > 0 && G[row][col - 1] == '*') {
                    safe = false;
                }

                // Check the spot to the right
                if (col < C - 1 && G[row][col + 1] == '*') {
                    safe = false;
                }

                // Increment the count if the spot is safe
                if (safe) {
                    safeSpots++;
                }
            }
        }
    }
    cout<<safeSpots;

}
int main()
{
    fast;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}