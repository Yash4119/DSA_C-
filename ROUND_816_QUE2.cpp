#include<bits/stdc++.h>
#define mod 1000000000000000000
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;cin>>t;

	while(t--){
		int n;
		long long int k;
		long long int b;
		long long int s;
	
		cin>>n>>k>>b>>s;

		if(s < (b*k) || s > (b*k)+n*(k-1)){
			cout<<"-1"<<endl;
		}
		else{
			s -= (b*k);

			for(int i=1;i<n;i++){
				cout<<min(s,k-1)<<" ";
				s -= min(s,k-1);
			}
			cout<<(s+(b*k))<<endl;
		}

	}
	
}