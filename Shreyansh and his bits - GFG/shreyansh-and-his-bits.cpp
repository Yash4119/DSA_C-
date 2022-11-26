//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++
#include<bits/stdc++.h>
class Solution{
public:
    
    long long dp [64][64];
    
    long long ncr(int pos, int one){
        if(pos==0)return 0;
        if(one==0 || one==pos)return 1;
        
        if(dp[pos][one]!=-1){
            return dp[pos][one];
        }
        
        return dp[pos][one] = (ncr(pos-1,one) + ncr(pos-1,one-1));
    }
    
    long long count(long long x) {
        // Code Here
        
        long long ct = 0;
        
        for(int i=0;i<64;i++){
            for(int j=0;j<64;j++){
                dp[i][j]=-1;
            }
        }
        
        int pos=0;
        int one=0;
        
        while(x>0){
            if(x&1){
                one++;
                // cout<<pos<<" "<<one<<" "<<ct<<" ";
                ct += ncr(pos,one);
                // cout<<ct<<endl;
            }
            pos++;
            x >>= 1;
        }
        
        return ct;
    }
};

//{ Driver Code Starts.

int main() {
    
	int t;
	cin >> t;
	while (t-- > 0) {
	    long long x; cin >> x;
	    Solution ob;
	    cout << ob.count(x) << '\n';
	}
	return 0;
}
// } Driver Code Ends