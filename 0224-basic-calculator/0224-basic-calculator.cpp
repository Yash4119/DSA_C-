class Solution {
public:
    int calculate(string s) {
        
        stack<int>st;
        int sign=1;
        st.push(sign);
        int ans=0;
        long long num=0;
        // char ch='';
        
        for(char& ch : s){
            if(ch==' ')continue;
            else if(ch=='+' || ch=='-'){
                ans += num*sign;
                sign = st.top()*((ch=='+')?1:-1);
                num=0;
            }
            else if(ch=='('){
                st.push(sign);
            }
            else if(ch==')'){
                st.pop();
            }
            else{
                num = num*10 + (ch-'0');
            }
        }
        ans += num*sign;
        
        return ans;
    }
};