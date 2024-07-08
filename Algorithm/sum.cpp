#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n){

    if(n==0){
        return 0;
    }
    else{

      return arr[0]+sum(arr+1,n-1);
    }
   
 }

int main(){

    int arr[]={3,4,5,6};
    int n=sizeof(arr )/sizeof(arr[0]);
    cout<<sum(arr,n)<<endl;

}
cpp

