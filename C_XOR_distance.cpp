#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mod =1000000007;

/* int power(int a,int b){
    int result=1;

    while(b){
        if(b&1){
            result*=a;

        }
        a*=a;
        b/=2;
    }

    return result;    

} */

int main(){
     int t;
     cin>>t;
     while(t--){
        int a,b,r;
        cin>>a>>b>>r;
          long long minXOR = min(a, b);
        long long maxXOR = a ^ b;

        long long result = (r < maxXOR) ? (minXOR + r) : maxXOR;

        cout << result << endl;
     }


}