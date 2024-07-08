#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<<"print gcd"<<endl;
    cout<<"Enter two number "<<endl;
    int a,b;
    cin>>a>>b;
    int gcd;
    for(int i=1;i<=a&&i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<gcd<<endl;




    cout<<"print lcm"<<endl;
 




    
    //max = (n1 > n2) ? n1 : n2;
    int max=(a>b)?a:b;


    while (1) {
        if ((max % a == 0) && (max % b== 0)) {
            printf("The LCM of %d and %d is %d.", a, b, max);
            break;
        }
        ++max;
    }
 

}