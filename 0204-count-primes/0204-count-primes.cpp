class Solution {
public:
    
    void mark(vector<int>&ans,int n,int num){
        
        
    }
    
    int countPrimes(int n) {
        
        if(n==0 or n==1){
            return 0;
        }
        
        vector<int>ans(n,-1);
        ans[0]=ans[1]=0;
        int sq = sqrt(n);
        
        for(int i=2;i*i<n;i++){
            int temp = i;
            if(ans[temp*temp]==-1){
                while((temp*i)<n){
                    ans[temp*i] = 0;
                    temp += 1;
                }
            }
            
        }
        
        int count=0;
        for(int i=0;i<n;i++){
            if(ans[i]==-1){
                count++;
            }
        }
        
        return count;
    }
};