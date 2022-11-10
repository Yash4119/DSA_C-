class Solution {
public:
    
    
    
    string removeDuplicates(string s) {
        
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            if(!st.empty() && st.top() == s[i]){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        
        s="";
        while(!st.empty()){
            s += st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};


// Approach 2 Using Stack

/*
    class Solution {
    public:
    
    
    
    string removeDuplicates(string s) {
        
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            if(!st.empty() && st.top() == s[i]){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        
        s="";
        while(!st.empty()){
            s = st.top() + s;
            st.pop();
        }
        return s;
    }
};
*/

// Brute Force Solution

/*
class Solution {
public:
    
    
    
    string removeDuplicates(string s) {
        
        if(s.size()==1)return s;
        
        while(true){
            
            string temp="";
            int i=0;
            
            while(i<s.size()){
                if(i+1 < s.size() && s[i] == s[i+1]){
                    i += 2;
                    continue;
                }
                
                temp += s[i];
                i++;
            }
            
            if(s.size()==temp.size()){
                break;
            }
            
            s = temp;
        }
        
        return s;
    }
};
*/