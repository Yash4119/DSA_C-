#include<bits/stdc++.h>

using namespace std;


void calc(vector<int>&dp,int n,int m,int st,int& steps){
       if(n<0)return;
       if(n==0){
             // cout<<st<<endl;
              
              
              if(st%m==0){
                     //cout<<st<<endl;
                     steps = min(st,steps);
                     dp[n] = steps;
              }
              return;
       }
       if(dp[n]!=-1){
              steps = min(st,dp[n]);
              return;
       }
       
       calc(dp,n-2,m,st+1,steps);
       calc(dp,n-1,m,st+1,steps);
}

int calc2(int n,int m){
	int steps = 0;
	if(n%2==0){
		steps += n/2;
	}
	else{
		steps += (n/2)+1;
	}

	while(steps % m != 0){
		steps += 1;
	}

	return steps;

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
		int n,m;
       cin>>n>>m;
       vector<int>dp(n+1,-1);
       // int steps = 100000;
       // if(m<=n)calc(dp,n,m,0,steps);
       // if(steps==100000)steps=-1;
       // cout<<steps;
       int steps;
       if(n<m){
       	steps = -1;
       }
       else{
       	steps = calc2(n,m);
       }
       cout<<steps;
}
