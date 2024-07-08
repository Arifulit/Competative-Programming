#include<bits/stdc++.h>
using namespace std;

int main(){

 int row=5;
    for(int i=1;i<=row;i++){

        for(int spc=1;spc<=(row-i);spc++){
            cout<<" ";
        }

        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%c", j+64);
        }
        cout<<endl;
    }


}