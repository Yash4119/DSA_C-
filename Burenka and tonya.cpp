#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;cin>>t;

	while(t--){

		int n,m;
		cin>>n>>m;

		int parity1 = n&1;
		int parity2 = m&1;

		if(parity1 == parity2){
			cout<<"Tonya"<<endl;
		}
		else{
			cout<<"Burenka"<<endl;
		}

	}
	
}