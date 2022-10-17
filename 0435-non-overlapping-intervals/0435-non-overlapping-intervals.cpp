class Solution {
public:
    
    static bool comp(vector<int>&v1,vector<int>&v2){
            return v1[1]<v2[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        if(in.size()==0)return 0;
        sort(in.begin(),in.end(),comp);
        
        int count=0;
        
        vector<int>p = in[0];
        
        for(int i=1;i<in.size();i++){
            if(p[1] > in[i][0])count++;
            else p = in[i];
        }
        
        return count;
    }
};