//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
public:
    int onesComplement(int N){
        //code here
        
        int two = 1;
        int ans=0;
        
        while(N>0){
            // cout<<N<<" "<<two<<" "<<ans<<endl;
            if(!(N&1)){
                ans +=two;
            }
            two *= 2;
            N >>= 1;
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        Solution ob;
        cout<<ob.onesComplement(n)<<"\n";
    }
}
// } Driver Code Ends