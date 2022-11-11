class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        
        int suma = accumulate(a.begin(),a.end(),0),sumb = accumulate(b.begin(),b.end(),0);
        int diff = (sumb-suma)/2;
        
        set<int>st(a.begin(),a.end());
        set<int>bt(b.begin(),b.end());
        
        for(auto &it:st){
            if(bt.find(it+diff)!=bt.end()){
                return {it,it+diff};
            }
        }
        
        return {0,0};
    }
};