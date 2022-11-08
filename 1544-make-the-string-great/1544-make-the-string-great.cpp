class Solution {
public:
    
    string helper(string s){
        if(s.size()<=1)return s;
        
        string ans = "";
        int i=0;
        
        while(i < s.size()){
            if(i+1 < s.size() && s[i] <= 91 and s[i]+32 == s[i+1]){
                i += 2;
                continue;
            }
            else if(i+1 < s.size() && s[i] >= 97 && s[i]-32 == s[i+1]){
                i += 2;
                continue;
            }
            ans += s[i];
            i++;
            // if(i==s.size()-1){
            //     ans += s[i];
            // }
        }
        // if(i==s.size()-1)ans += s[i];
        return ans;
    }
    
    string makeGood(string s) {
        
        while(true){
            string ans = helper(s);
            // cout<<ans<<" "<<s<<" "<<endl;
            if(ans=="")return "";
            if(s.size()==ans.size())break;
            s=ans;
        }
        
        return s;
    }
};