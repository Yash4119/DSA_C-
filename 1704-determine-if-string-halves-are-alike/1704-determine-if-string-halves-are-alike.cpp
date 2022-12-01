class Solution {
public:
    bool halvesAreAlike(string s) {
        
        unordered_map<char,int>vowels;
        
        vowels['a'] = 1;
        vowels['e'] = 1;
        vowels['i'] = 1;
        vowels['o'] = 1;
        vowels['u'] = 1;
        vowels['A'] = 1;
        vowels['E'] = 1;
        vowels['I'] = 1;
        vowels['O'] = 1;
        vowels['U'] = 1;
        
        int ct1=0,ct2=0;
        
        for(int i=0;i<s.size()/2;i++){
            if(vowels.find(s[i])!=vowels.end())ct1++;
        }
        for(int i=s.size()/2;i<s.size();i++){
            if(vowels.find(s[i])!= vowels.end())ct2++;
        }
        
        return ct1==ct2;
    }
};