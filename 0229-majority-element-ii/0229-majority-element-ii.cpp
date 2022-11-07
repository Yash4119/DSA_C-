class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        
        int n = nums.size()/3;
        int freq=1,i=0;
        
        while(nums.size()>i){
            // cout<<i<<" ";
                while(i+1<nums.size() && nums[i]==nums[i+1]){
                    freq++;
                    i++;
                }
                // cout<<i<<endl;
                if(freq>n)ans.push_back(nums[i]);
                
            freq=1;
            i++;
        }
        
        // if(freq>n)ans.push_back(nums[i-1]);
        
        return ans;
    }
};


// Brute Force

/*

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

*/