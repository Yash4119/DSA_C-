class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int>perm(n+1);
        
        int d = n;
        int st = 0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                perm[i] = st;
                st++;
            }else{
                perm[i] = d;
                d--;
            }
        }
        
        perm[n] = st;
        
        return perm;
    }
};