#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)


    {
        ll n, k, l = 0, m = 0, i, j, ans = 0, r = 0;
        cin >> n;
        string st, s;
        cin >> s;


        for (i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'a' || s[i] == 'e')
            {
                st += s[i];
                while (s[i - 1] == 'a' || s[i - 1] == 'e')
                {
                    st += s[i - 1];
                    i--;
                }

                
                i--;
                st += s[i];
                if (i != 0)
                    st += '.';
            }
            else
                st += s[i];
        }

        reverse(st.begin(), st.end());
        cout << st << endl;
    }
}
