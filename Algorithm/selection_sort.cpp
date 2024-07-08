#include<bits/stdc++.h>
using namespace std;




void selectionSort(int a[],int n){
    int i,j,mn;

    for(int i=0;i<n-1;i++){
        mn=i;

     for(int j=i+1;j<n;j++){
            if(a[j]<a[mn]){
                mn=j;
            }
        }

        if(mn!=i){
            swap(a[mn],a[i]);
        }
    }
}




void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}
 
// Driver program
int main()
{
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function Call
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
 