class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int>mp;
        int n = bills.size();
        
        for(int i=0;i<n;i++){
            int amt = bills[i];
            
            if(amt == 5){
                mp[amt]++;
            }
            else if(amt==10){
                if(mp[5]>=1){
                    mp[5]--;
                }        
                else{
                    return false;
                }
                mp[10]++;
            }
            else{
                    if(mp[10]>=1){
                        amt-=10;
                        mp[10]--;
                    }
                    if(amt==20){
                        if(mp[5]>=3){
                            mp[5]-=3;
                            amt=0;
                        }        
                        else{
                            return false;
                        }
                    }
                    if(amt==10){
                        if(mp[5]>=1){
                            mp[5]--;
                            amt=0;
                        }        
                        else{
                            return false;
                        }
                    }
                
            }
            
        }
        
        return true;
    }
};