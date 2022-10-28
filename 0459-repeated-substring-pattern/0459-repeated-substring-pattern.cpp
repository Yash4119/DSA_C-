class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string next = s;
        int n =s.size();
        
        if(n<1)return false;
        
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                next = leftShift(s,i);
                if(next==s)return true;
            }
        }
        
        return false;
    }
    
    string leftShift(string s,int i){
        string ret = s.substr(i);
        ret += s.substr(0,i);
        
        return ret;
    }
};