class Solution {
public:
    
    bool isPal(string s){
        int st=0;
        int e=s.size()-1;
        
        while(st<e){
            if(s[st]!=s[e])return false;
            st++;
            e--;
        }
        
        return true;
    }
    
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>mp;
        int len=0;
        
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
            if(isPal(words[i]))continue;
            
            string temp = words[i];
            reverse(temp.begin(),temp.end());
            
            if(mp[temp] > 0){
                len += 4;
                mp[temp]--;
                mp[words[i]]--;
            }
            
        }
        
        int ct1=0;
        int calc=0;
        bool flag=false;
        for(auto it:mp){
            if(isPal(it.first)){
                if(it.second==1){
                    ct1++;
                }
                else if(it.second%2==0){
                    calc += ((it.second)*2);
                }
                else{
                    calc += ((it.second-1)*2);
                    flag = true;
                }
            }
        }
        
        if(ct1>=1 || flag)len += 2;
        
        return len+calc;
    }
};