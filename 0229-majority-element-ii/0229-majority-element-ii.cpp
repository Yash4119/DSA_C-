class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        
        int n= nums.size()/3;
        vector<int>ans;
        for(auto it:mp){
            if(it.second > n){
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};