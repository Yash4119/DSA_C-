class Solution {
public:
    
    string helper(string s, int len, unordered_map<string,int>&mp){
        if(s.size()==len){
            if(mp.find(s)==mp.end())return s;
            return "";
        }
        
            string lh = helper(s+'1',len,mp);
            string rh = helper(s+'0',len,mp);
            
            return (lh.size()==len)?lh:rh;
        
    }
    
    string findDifferentBinaryString(vector<string>& nums) {
        
        string ans="";
        
        for(int i=0;i<nums.size();i++){
            if(nums[i][i]=='0'){
                ans += '1';
            }
            else{
                ans += '0';
            }
        }
        return ans;
    }
};

// Brute Force

/*

class Solution {
public:
    
    string helper(string s, int len, unordered_map<string,int>&mp){
        if(s.size()==len){
            if(mp.find(s)==mp.end())return s;
            return "";
        }
        
            string lh = helper(s+'1',len,mp);
            string rh = helper(s+'0',len,mp);
            
            return (lh.size()==len)?lh:rh;
        
    }
    
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<string,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        int len = nums[0].size();
        
        return helper("",len,mp);
        
    }
};

*/