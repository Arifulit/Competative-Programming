#include <bits/stdc++.h>
using namespace std;
int n,l1,l2,o1,o2;


string s;

int main()
{
	cin>>n>>s;

	for(int i=0;i<n;i++)
	if(s[i]=='L') l2++;
	else o2++;
	
	for(int i=1;i<n;i++)
	{
		if(s[i-1]=='L') l1++,l2--;
		else o1++,o2--;
        
		if(l1!=l2&&o1!=o2)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<-1;
}
