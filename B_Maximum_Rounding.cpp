#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s; cin>>s;
		int p=-1;
		for(int i=s.size()-1;i;i--)
			if(s[i]>='5'){
				s[i-1]++;
				p=i;
			}
		if(s[0]>='5')cout<<'1',p=0;
		if(~p)
			for(int i=p;i<s.size();i++)
				s[i]='0';
		cout<<s<<"\n";
	}
    return 0;
}