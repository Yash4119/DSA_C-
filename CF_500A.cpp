#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n,t;
	cin>>n>>t;

	t-=1;

	vector<int>arr(n-1,0);

	for(int i=0;i<n-1;i++){
		cin>>arr[i];
	}

	bool flag = false;
	int i=0;
	while(i<n-1){
		if(i==t){
			flag = true;
			break;
		}
		// cout<<i<<endl;
		i = (i) + arr[i];
	}
	// cout<<i<<endl;
	if(flag || i==t){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}

}