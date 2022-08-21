#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;cin>>t;

	while(t--){
		long long n,m;
		cin>>n>>m;

		if(n==1 and m==1){
			cout<<"0"<<endl;
		}
		else{
		if(n>m){
			swap(n,m);
		}

		long ans = (n*2);
		ans += (m-2);

		cout<<ans<<endl;
		}
	}
	
}