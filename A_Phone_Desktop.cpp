#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        ll ans=0;
        ans+=y/2;
        ll z=y/2;
        ll i=z;
        while(i>0){
            x-=7;
            i--;
        }
        x= max(0,x);
        if(y%2==1){
            x-=11;
            ans++;
        }
        x=max(0,x);
        ans+=x/15;
        x-=15*(x/15);
        if(x>0){
            cout<<ans+1<<endl;

        }
        else{
            cout<<ans<<endl;
        }

        
       
    }

    return 0;
}
