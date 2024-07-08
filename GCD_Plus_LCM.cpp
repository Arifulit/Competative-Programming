#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
	cin.tie(nullptr)->sync_with_stdio(false);

	int t, a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (a > b) swap(a, b);
		int g = __gcd(a, b);
		cout << (g == a ? "true" : "false") << '\n';
	}

	return 0;
}