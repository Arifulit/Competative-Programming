#include<bits/stdc++.h>
using namespace std;



 void knapscak(int n,float weight[],float profit[],float capacity){
    float x[20], tp = 0;
   int i, j, u;

   u = capacity;

  //main algorithm starts from here
   for (i = 0; i < n; i++)
   {
       x[i] = 0.0;
   }

   for (i = 0; i < n; i++)
   {
      if (weight[i] > u)
      {
          break;
      }
      else
      {
         x[i] = 1.0;
         tp = tp + profit[i];
         u = u - weight[i];
      }
   }

   if (i < n)
   {
       x[i] = u / weight[i];
   }

   tp = tp + (x[i] * profit[i]);

   cout<<"Maximum Profit: "<<tp;
 }

int main(){
    float weight[20],profit[20],capacity,ratio[20],temp;
    int num,i,j;

    cout<<"Number of object: ";
    cin>>num;
    
    cout<<"\nWeight and profit of each object:- \n";
    for(int i=0;i<num;i++){
        cin>>weight[i]>>profit[i];
    }

    cout<<"\nCapacity of knapscak:-";
    cin>>capacity;

    for(int i=0;i<num;i++){
        ratio[i]=profit[i]/weight[i];

    }

     //Sorting objects according to their profit per unit weight

     for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(ratio[i]<ratio[j]){

                swap(ratio[i],ratio[j]);
                swap(weight[i],weight[j]);
                swap(profit[i],profit[j]);
            }
        }
     }

     knapscak(num,weight,profit,capacity);
     return 0;



    
}