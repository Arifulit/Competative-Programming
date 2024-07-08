#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int T;
  
	cin>>T;
	while(T--){
        
        string t,s="";
        int n,x;
     	cin>>n>>t;
	    for(int i=n-1;i>=0;--i){
		if(t[i]=='0'){
			x=(t[i-2]-'0')*10+(t[i-1]-'0');
			i-=2;
		} else {
			x=t[i]-'0';
		}
		s=(char)(x+'a'-1)+s;
	}
	cout<<s<<endl;
    }
	return 0;
	
}
	 	 		  		 			   	    	    	

	 		  
   