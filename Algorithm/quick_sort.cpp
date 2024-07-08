
#include<bits/stdc++.h>
using namespace std;

int partion(int a[],int l,int h){

    int pivot=a[l];
    int i=l,j=h;

    while(i<j){

        while(a[i]<=pivot){
            i++;
        }
        
        while(a[j]>pivot){
            j--;
        }

        if(i<j){
            swap(a[i],a[j]);
        }
    }
    swap(a[l],a[j]);
    return j;
}




void quickSort(int a[],int l,int h){
    if(l<h){
       int  j=partion(a,l,h);
       quickSort(a,l,j-1);
       quickSort(a,j+1,h);

    }
}

int main() {
  int arr[]={10,7,8,9,1,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  // Function call
  quickSort(arr,0,n-1);
  //Print the sorted array
  cout<<"Sorted Array\n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}