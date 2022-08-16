#include<bits/stdc++.h>
using namespace std;

int main(){

   #ifndef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Buttons

       int n;
       cin>>n;

       long long presses = 0;

       for(int i=1;i<n;i++){
       		long long val = (n-i) * (i);
       		presses += val;

       		// cout<<val<<endl;
       }

       presses += n;

       cout<<presses;

  #ifndef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}