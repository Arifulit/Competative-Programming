#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    /* int n;
    cin>>n;
    string t="ABC";
    int a=0,b=0,c=0;
    string s1,s2,s3;
    for(int i=0;i<n;i++){

         cin>>s1>>s2>>s3;
       if(s1[i]=='A')a++;
      else if(s1[i]=='B')b++;
      else  if(s1[i]=='C')c++;


     if(s2[i]=='A')a++;
      else if(s2[i]=='B')b++;
      else  if(s2[i]=='C')c++;

       if(s3[i]=='A')a++;
      else if(s3[i]=='B')b++;
      else  if(s3[i]=='C')c++;


      



    }


    for(int i=0;i<n;i++){
         if(a==3 &&b==3&&c<=2)cout<<"C"<<endl;
 else if(b==3 &&c==3 &&a<=2)cout<<"A"<<endl;
 else if(c==3 && a==3 && b<=2)cout<<"B"<<endl;

    }

    return 0; */


    int t;
    cin>>t;
    while(t--){

        ll n, k, l = 0, m = 0, i, j, ans = 0, r = 0;
        //ll a=0,b=0,c=0;


          char a[3][3];
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '?')
                {
                    k = i, l = j;
                }
            }
        }



        for (i = 0; i < 3; i++)
        {
            if (a[i][l] == 'A')
                ans++;
            else if (a[i][l] == 'B')
                m++;
            else if (a[i][l] == 'C')
                r++;
        }

        if (r == 0)
            cout << "C" << endl;
        else if (m == 0)
            cout << "B" << endl;
        else
            cout << "A" << endl;
    }
}
