class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.size()!=goal.size())return false;
        if(s==goal)return true;
        
        for(int i=0;i<s.size();i++){
            string temp=s;
            int j;
            for(j=1;j<s.size();j++){
                temp[j-1] = s[j];
            }
            temp[j-1] = s[0];
            if(temp==goal)return true;
            s = temp;
        }
        
        return false;
    }
};