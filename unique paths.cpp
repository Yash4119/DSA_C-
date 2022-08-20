#include<bits/stdc++.h>

using namespace std;

int calc_recur(int m,int n,int x,int y){
	if(x >= m || y>= n){
		return 0;
	}

	if(x==m-1 && y==n-1){
		return 1;
	}

	int ans=0;

	ans += calc_recur(m,n,x+1,y);
	ans += calc_recur(m,n,x,y+1);

	return ans;
}

int calc_memoi(vector<vector<int>>&dp, int m, int n){
	if(m<0 || n<0){
		return 0;
	}
	if(m==0 && n==0){
		return 1;
	}

	if(dp[m][n]!=-1){
		return dp[m][n];
	}

	int ans=0;
	ans += calc_memoi(dp,m-1,n);
	ans += calc_memoi(dp,m,n-1);

	return dp[m][n] = ans;
}

int calc_tabu(int m,int n){
	vector<vector<int>>dp(m,vector<int>(n,1));

	for(int i=1;i<m;i++){
		for(int j=1;j<n;j++){
			dp[i][j] = dp[i][j-1] + dp[i-1][j];
		}
	}

	return dp[m-1][n-1];
}

int calc_tabu_space(int m,int n){

	vector<int>dp(n,1);

	for(int i=1;i<m;i++){
		vector<int>temp(n,1);
		for(int j=1;j<n;j++){
			temp[j] = temp[j-1] + dp[j];
		}
		dp = temp;
	}

	return dp[n-1];
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin>>m>>n;

	int ways = calc_recur(m,n,0,0);
	cout<<"ways (recurssive) :- "<<ways<<endl;
	
	vector<vector<int>>dp(m,vector<int>(n,-1));
	int ways2 = calc_memoi(dp,m-1,n-1);
	cout<<"ways (Memoization) :- "<<ways2<<endl;

	int ways3 = calc_tabu(m,n);
	cout<<"ways (Tabulation) :- "<<ways3<<endl;

	int ways4 = calc_tabu_space(m,n);
	cout<<"ways (space_optimised) :- "<<ways4<<endl;
}
