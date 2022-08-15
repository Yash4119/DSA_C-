#include<bits/stdc++.h>
using namespace std;

void sort_1_2(vector<int>&arr, int n){
   int ct0= 0;
   int ct1 = 0;
   int ct2 = 0;

   for(int i=0;i<n;i++){
      if(arr[i]==0)ct0++;
      else if(arr[i]==1)ct1++;
      else ct2++;
   }

   int i=0;
   while(i<n and ct0>0){
      arr[i] = 0;
      i++;
      ct0--;
   }
   while(i<n and ct1>0){
      arr[i] = 1;
      i++;
      ct1--;
   }
   while(i<n and ct2>0){
      arr[i] = 2;
      i++;
      ct2--;
   }
}

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

       for(int i=0;i<n;i++){
         cin>>arr[i];
       }

       cout<<"Before Sorting"<<endl;
       for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
       }
       cout<<endl;

       sort_1_2(arr, n);

       cout<<"After Sorting"<<endl;
       for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
       }
       cout<<endl;

  #ifndef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}