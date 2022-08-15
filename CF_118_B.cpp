#include<bits/stdc++.h>
using namespace std;

void solve_pattern(vector<string>&ans, int n){

	for(int i=0;i<=n;i++){
		string temp="";
		for(int j=0;j<n-i;j++){
			temp += "  ";
		}
		for(int k=0;k<i;k++){
			temp += (k + '0');
			temp += ' ';
		}
		// temp.pop_back();
		for(int k=i;k>=0;k--){
			temp += (k + '0');
			temp += ' ';
		}
		temp.pop_back();
		ans.push_back(temp);
	}
	for(int i=n-1;i>=0;i--){
		string temp="";
		for(int j=0;j<n-i;j++){
			temp += "  ";
		}
		for(int k=0;k<i;k++){
			temp += (k + '0');
			temp += ' ';
		}
		// temp.pop_back();
		for(int k=i;k>=0;k--){
			temp += (k + '0');
			temp += ' ';
		}
		temp.pop_back();
		ans.push_back(temp);
	}

}

int main(){

   #ifndef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
       int n;
       cin>>n;

       vector<string>ans;

       solve_pattern(ans,n);

       for(int i=0;i<ans.size();i++){
       	cout<<ans[i]<<endl;
       }

  #ifndef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}