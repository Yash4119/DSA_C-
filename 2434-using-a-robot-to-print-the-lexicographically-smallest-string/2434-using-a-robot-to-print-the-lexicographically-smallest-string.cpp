class Solution {
public:
    
    char lower_chars(vector<int>&freq){
        
        for(int i=0;i<freq.size();i++){
            if(freq[i]!=0){
                return 'a'+ i;
            }
        }
        
        return 'a';
    }
    
    string robotWithString(string s) {
        stack<char>st;
        string ans="";
        vector<int>freq(26,0);
        
//         For calculating freq of each character in the string
        for(char c:s){
            freq[c-'a']++;
        }
        
//         Actual Logic of the program
        for(char c : s){
            st.push(c);
            freq[c-'a']--;
            
            while(!st.empty() and st.top() <= lower_chars(freq)){
                ans += st.top();
                st.pop();
            }
        }
        
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};