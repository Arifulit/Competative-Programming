#include<bits/stdc++.h>
const int N=3e5+9;
using namespace std ;
#define ll long long 
int d[N],t[N],me[N];
int main()
{
    int n,c,m;
    cin >> n>>c>>m;


    for(int i=0;i<n;i++)
    {
        cin >> d[i]>>t[i]>>me[i];
    }

    for(int i=0;i<n;i++)
    {
        if(t[i]>c)
        {
        cout << "CLE" << endl;
        return 0;
        }
        if(me[i]>m)
        {
        cout << "MLE" << endl;
        return 0;
        }
        if(d[i])
        {
        cout << "WA" << endl;
        return 0;
        }
    }
    
    cout << "AC" << endl;
}