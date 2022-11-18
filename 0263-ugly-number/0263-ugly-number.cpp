class Solution {
public:
    
    bool prime_factors(long long n, set<int>&st){
        
        for(long long i=2; i*i<=n;i++){
            if(n%i==0){
                while(n%i==0){
                    n = n/i;
                }
                if(!ugly_num(i))return false;
            }
        }
        if(n>1){
            if(!ugly_num(n))return false;
        }
        return true;
    }
    
    bool ugly_num(long long k){
        vector<long long>arr = {2,3,5};
        for(int i=0;i<3;i++){
            if(k==arr[i])return true;
        }
        return false;
    }
    
    bool isUgly(int n) {
        set<int>st;
        if(n<=0)return false;
        
        if(n>1){
            return prime_factors(n,st);
        }
        
        // for(auto it:st){
        //     cout<<it<<endl;
        //     if(!ugly_num(it)){
        //         return false;
        //     }
        // }
        return true;
    }
};