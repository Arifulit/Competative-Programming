#include<bits/stdc++.h>
using namespace std;
string s;
int t;
int main() {
	cin>>t;
	while(t--) 
	{
		cin>>s;
		int m=1;
		int ans=0;
		for(int i = 0; i<4; i++) 
		{
			int a=s[i]-'0';
			if(a==0)
                a=10;
			ans+=abs(a-m)+1;
			m=a;
		}
		cout<<ans<<endl;
	}
	return 0;
}
