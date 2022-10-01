class Solution {
public:
    
    int calc(vector<int>&dp,string s,int ind){
        
        if(ind>=s.size()){
            return 1;
        }
        
        if(dp[ind]!=-1){
            return dp[ind];
        }
        
        int ans=0;
        int temp = 0;
        temp = s[ind] - '0';

        int temp2 = 0;
        if(ind+1 < s.size())temp2 = (temp*10) + (s[ind+1]-'0');
        
        if(temp >=1 and temp<=26){
            ans += calc(dp,s,ind+1);
        }
        if(temp>0 and temp2>=10 and temp2<=26){
            ans += calc(dp,s,ind+2);
        }
        
        return dp[ind] = ans;
    }
    
    int numDecodings(string s) {
        vector<int>dp(s.size()+1,-1);
        
        return calc(dp,s,0);
        
    }
};


void calc(string s,int& ways,int ind){
        if(ind>=s.size()){
            ways+=1;
            // cout<<ways<<endl;
            return;
        }
        
        int temp = 0;
        // if(s[ind+1]=='0'){
        //    if(s[ind]=='1' || s[ind]=='2'){
        //        temp = s[ind] - '0';
        //    } 
        // }
        // else{
            temp = s[ind] - '0';
        // }
        int temp2 = 0;
        if(ind+1 < s.size())temp2 = (temp*10) + (s[ind+1]-'0');
        
            // cout<<temp<<" "<<temp2<<endl;
        
        if(temp >=1 and temp<=26){
            // cout<<"temp :-"<<temp<<endl;
            calc(s,ways,ind+1);
        }
        if(temp>0 and temp2>=10 and temp2<=26){
            // cout<<"temp2 :- "<<temp2<<endl;
            calc(s,ways,ind+2);
        }
        
    }


    int numDecodings(string s) {
        
        vector<int>dp(s.size()+1,-1);
        
        // if(s[0]=='0'){
        //     return 0;
        // }
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='0' and (s[i-1] - '0')>2){
        //         return 0;
        //     }
        // }
        int ans=0;
        calc(s,ans,0);
        
        return ans;
        
    }