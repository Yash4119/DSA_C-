class Solution {
public:
    
    string reverse_string(string s, int n){
        int st=0,e=n-1;
        
        while(st<e){
            char temp = s[e];
            s[e] = s[st];
            s[st] = temp;
            st++;
            e--;
        }
        
        return s;
    }
    
    string reverseWords(string s) {
        string ans="";
        
        int i=0,n=s.size();
        while(i<n){
            if(s[i] == ' '){
                i++;
                continue;
            }
            
            string temp="";
            while(i<n and s[i]!= ' '){
                temp += s[i];
                i++;
            }
            // cout<<i<<endl;
            // ans += reverse_string(temp,n);
            ans = temp+ ' ' + ans;
            
        }
        ans.pop_back();
        return ans;
    }
};