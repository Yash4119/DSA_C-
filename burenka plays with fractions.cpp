#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int t;cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;

		a = a*d;
		c = c*b;

		if(a==c){
			cout<<"0"<<endl;
		}
		else if(a==0 || c==0){
			cout<<"1"<<endl;
		}
		else{
			if(a<c){
				swap(a,c);
			}

			if(a%c==0){
				cout<<"1"<<endl;
			}
			else{
				cout<<"2"<<endl;
			}
		}

	}

}