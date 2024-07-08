#include<bits/stdc++.h>
using namespace std;


void solve(){
   string s;
        cin >> s;

        
        int hours = stoi(s.substr(0, 2));
        int minutes = stoi(s.substr(3, 2));

       
        string period;
        if (hours >= 12) {
            period = "PM";
            if (hours > 12) {
                hours -= 12;
            }
        } else {
            period = "AM";
            if (hours == 0) {
                hours = 12;
            }
        }

       
        cout << (hours < 10 ? "0" : "") << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " " << period << endl;
  
}




 int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
 }