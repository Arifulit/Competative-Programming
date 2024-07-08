#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin >> s)
    {
        bool flag =true;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A' and s[i]<='Z');

            else
                flag = false;
        }
        if(!flag)
            cout<<s<<" ";
    }

    return 0;
}