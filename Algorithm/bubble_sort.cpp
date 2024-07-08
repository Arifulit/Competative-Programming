#include<bits/stdc++.h>
using namespace std;



void bubblesort(int a[],int n){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
           if( a[j]>a[j+1]){
              swap(a[j],a[j+1]);
            }
        }
    }
}


 void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
}
int main(){
    int a[]={3,2,6,3,5,63,0,9};
    int n=sizeof(a)/sizeof(a[0]);

    bubblesort(a,n);
    cout<<"sorted data";
    printarray(a,n);
}