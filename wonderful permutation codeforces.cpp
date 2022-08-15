#include<bits/stdc++.h>
using namespace std;

int main(){

   #ifndef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       int t;cin>>t;

       while(t--){
       	int n,k;
       	cin>>n>>k;
       	
       	int ans=0;

       	for(int i=0;i<n;i++){
       		int temp;
       		cin>>temp;
       		// cout<<temp<<" "<<i+1<<endl;
       		if(i<k and temp != i+1){
       			ans += 1;
       		}
       	}
       	cout<<ans<<endl;
       	}


  #ifndef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}