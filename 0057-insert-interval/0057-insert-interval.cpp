class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& ins, vector<int>& newin) {
        vector<vector<int>>ans;
        
        if(ins.size()==0){
            return {newin};
        }
        
        int i=0;
        
        while(i<ins.size()){
            
            if(ins[i][1]<newin[0]){
                ans.push_back(ins[i]);
            }
            else if(ins[i][0]>newin[1]){
                
                ans.push_back(newin);
                newin = ins[i];
            }
            else if(ins[i][1] > newin[0] || ins[i][0] <= newin[1]){
                newin[0] = min(ins[i][0],newin[0]);
                newin[1] = max(ins[i][1],newin[1]);
            }
            i++;
        }
           
        ans.push_back(newin);
        
        return ans;
    }
};