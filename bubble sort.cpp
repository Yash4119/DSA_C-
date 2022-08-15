#include<bits/stdc++.h>
using namespace std;

int main(){

   #ifndef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
       int n;
       cin>>n;

       vector<int>arr(n,0);

       // Taking Input for the array
       // for(int i=0;i<n;i++)cin>>arr[i];
       for(int i=0;i<n;i++)arr[i]=i+1;
       		
       for(int i=0;i<n;i++){
       	// Using a Boolean variable to check if swapping took place
       	bool swapped = false;

       		for(int j=1;j<n;j++){

       			if(arr[j-1] > arr[j]){
       	// if element is lesser than the adjacent element then just simpply swap them
       				swap(arr[j-1],arr[j]);
       				swapped = true;
       			}
       		}

       	// Displaying the array after every swap
       		cout<<"Pass "<<i+1<<" :- ";
       		for(int k=0;k<n;k++){
       			cout<<arr[k]<<" ";
       		}
       		cout<<endl;

       	// if swapping hass not occured in the array that 
       	// means array is already sorted and hence break the for loop
       		if(!swapped)break;
       }

       // Displaying the Sorted array
       for(int i=0;i<n;i++){
       	cout<<arr[i]<<" ";
       }
       cout<<endl;


  #ifndef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}