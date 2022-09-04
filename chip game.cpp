#include<bits/stdc++.h>
using namespace std;

int main(){

   #ifndef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       int t;
       cin>>t;

       while(t--){
       	long long int n,m;
       	cin>>n>>m;

       	if(n <= 2 and m <= 2){
       		cout<<"Tonya"<<endl;
       	}
       	else{
       		cout<<"Burenka"<<endl;
       	}
       }



  #ifndef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}