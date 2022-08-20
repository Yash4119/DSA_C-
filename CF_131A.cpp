#include<bits/stdc++.h>

using namespace std;

string correct_string(string s,bool fl){

	
	
	for(int i=0;i<s.size();i++){
	    if(i==0 && fl == false && s[0] >= 97){
		s[0] = s[0] - 'a' +'A';
	    }
		else if(s[i] <= 90){
			s[i] = s[i] + 'a' - 'A';
		}
	}
	return s;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s;
	cin>>s;



	bool fl = false;
	bool al = true;

	if(s[0] <= 90){
		fl = true;
	}


	for(int i=1;i<s.size();i++){
		if(s[i] >= 97){
			al = false;
			break;
		}
	}

	if(fl==false and al == true){
		s = correct_string(s,false);
	}
	if(fl and al){
		s = correct_string(s,true);
	}
	
	cout<<s;

}