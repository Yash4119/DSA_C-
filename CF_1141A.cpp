#include<bits/stdc++.h>
using namespace std;

int find_moves(long long n,long long m){
	if(n > m){
		return -1;
	}
	if(n==m){
		return 0;
	}

	int two = find_moves(n*2,m);
	int three = find_moves(n*3,m);

	if(two != -1){
		return 1 + two;
	}
	else if(three != -1){
		return 1 + three;
	} 

	return -1;
}

int main(){

   #ifndef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       long long n,m;
       cin>>n>>m;

       int ans = find_moves(n,m);
       cout<<ans;


  #ifndef ONLINEJUDGEB
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}