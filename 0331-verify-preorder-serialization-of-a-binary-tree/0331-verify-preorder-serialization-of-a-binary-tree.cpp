class Solution {
public:
    
    vector<string> split(string pre){
        
        vector<string>ans;
        int n = pre.size();
        
        int i=0;
        while(i<n){
            if(pre[i]==','){
                i++;
                continue;
            }
            string temp = "";
            while(i<n && pre[i]!=','){
                temp += pre[i];
                i++;
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
    
    bool isValidSerialization(string preorder) {
        
        int n = preorder.size();
        int diff = 1;
        
        vector<string>temp = split(preorder);
        
        for(string it:temp){
            diff -= 1;
            
            if(diff < 0)return false;
            if(it != "#")diff += 2;
        }
        
        return diff==0;
    }
};