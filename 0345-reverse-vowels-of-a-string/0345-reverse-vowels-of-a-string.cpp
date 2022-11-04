class Solution {
public:
    
    string reverseVowels(string s) {
        
        unordered_map<char,int>mp;
        mp['a']=1;
        mp['e']=1;
        mp['i']=1;
        mp['o']=1;
        mp['u']=1;
        mp['A']=1;
        mp['E']=1;
        mp['I']=1;
        mp['O']=1;
        mp['U']=1;
        
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1){
                st.push(s[i]);
            }
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1){
                s[i] = st.top();
                st.pop();
            }
        }
        
        return s;
    }
};