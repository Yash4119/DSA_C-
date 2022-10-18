class Solution {
public:
    
    int count(string ans, int j){
        int freq=1;
        
        for(int i=j;i<ans.size()-1;i++){
            if(ans[i]==ans[i+1])freq++;
            else return freq;
        }
        
        return freq;
    }
    
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string ans = "11";
        if(n==2)return ans;
        
        for(int i=3;i<=n;i++){
            
            string temp = "";
            int j=0;
            
            while(j<ans.size()){
                
                int freq=count(ans,j);
                char ch = ans[j];
                
                temp = temp + (to_string(freq) + ch);
                // temp += ch;
                // cout<<freq<<" "<<ch<<" "<<temp<<endl;
                j+=freq;
            }
            // cout<<j<<" "<<temp<<endl;
            ans = temp;
            
        }
        
        return ans;
    }
};