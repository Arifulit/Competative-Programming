#include<bits/stdc++.h>
using namespace std;



/* int conver(long long n){
    int dec=0,i=0,rem;

    while(n!=0){
        rem=n%10;
        n/=10;

        dec+=rem*pow(2,i);
        ++i;
    }
    return dec;

} */


//vector<int>v;



// C++ implementation to reverse bits of a number



#include <bits/stdc++.h>

using namespace std;


int reverseBits( int n)
{
	int rev = 0;

	// traversing bits of 'n' from the right
	while (n > 0) {
		
		rev <<= 1;

		
		if (n & 1 == 1)
			rev ^= 1;

	
		n >>= 1;
	}

	
	return rev;
}

int main()
{
int n;
    cin>>n;
	cout << reverseBits(n);
	return 0;
}


/* for(int j=0;j<=i-1;j++){
  k=a[j];
} */
  /*   for(int j=i-1;j>=0;j--){
        cout<<a;
    } */

 //cout<<conver(k);
  

