class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char>temp;
        int n = s.size();
        
        for(int i=0;i<n;i++){
            if((s[i]>= 65 and s[i]<91) || (s[i]>=97 and s[i]<123)){
                temp.push_back(s[i]);
            }
        }
        
        reverse(temp.begin(),temp.end());
        
        int j=0;
        
        for(int i=0;i<n;i++){
            if((s[i]>= 65 and s[i]<91) || (s[i]>=97 and s[i]<123)){
                s[i] = temp[j];
                j++;
            }
        }
        
        return s;
    }
};