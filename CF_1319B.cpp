#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen(“input.txt”, “r”, stdin);
	freopen(“output.txt”, “w”, stdout);
	#endif

	int n;
	cin>>n;

	vector<int>arr(n,0);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int ans = 0;

	for(int i=0;i<n-1;i++){
		if(arr[i] < arr[i]+1){
			ans+=arr[i];
		}
		else{
			ans += (arr[i+1]-1);
		}
	}

	ans += arr[n-1];

	cout<<ans;

}