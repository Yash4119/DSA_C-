class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int res = 0;
        
        for(int i=0;i<nums.size();i++){
            int gcd = 0;
            for(int j=i;j<nums.size();j++){
                
                gcd = getGCD(gcd,nums[j]);
                if(gcd == k)res++;
                if(gcd < k or gcd % k != 0)break;
            }
        }
        
        return res;
    }
    
    static int getGCD(int a,int b){
        
        while(b!=0){
            int temp = b;
            b = a%b;
            a = temp;
        }
        
        return a;
    }
};