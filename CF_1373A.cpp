#include<bits/stdc++.h>
#define int long long int
#define mod 10000000000007

using namespace std;

int calc_first(int a,int b,int c,int tot_cost){
	if(a >= c){
		return -1;
	}
	else if(tot_cost >= c){
		return 1;
	}

	return a;
}

int calc_second(int a,int b,int c,int tot_cost){
	if(tot_cost <= c){
		return -1;
	}

	return b;
}

int32_t main(){

   #ifndef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       int t;cin>>t;

       while(t--){
       	int a,b,c;
       	cin>>a>>b>>c;

       	// All details for the 1st Shop
       	// Cost per Donut :- a dollars
       	// Total cost for b donuts :- a * b
       	int tot_cost = (a*b)%mod;

       	// All details for 2nd shop
       	// Donuts per pack :- b
       	// cost per pack :- c

       	int ans_1st = calc_first(a,b,c,tot_cost);
       	int ans_2nd = calc_second(a,b,c,tot_cost);

       	// Answer for each test case
       	cout<<ans_1st<<" "<<ans_2nd<<endl;
       }


  #ifndef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}